#!/usr/bin/env python3
"""
AntMiner PIC16F1704 GUI Flasher (Based on Tkinter)
Author: TDX33029 / AntMiner Project
"""

import os
import sys
import time
import threading
import tkinter as tk
from tkinter import ttk, filedialog, messagebox
import serial.tools.list_ports

from pic16f_flasher import PIC16F1704Programmer

class PIC16F1704GUI:
    def __init__(self, root: tk.Tk):
        self.root = root
        self.root.title("AntMiner PIC16F1704 固件刷写工具 (STM32F103)")
        self.root.geometry("820x660")
        self.root.minsize(750, 580)

        self.programmer = PIC16F1704Programmer()
        self.is_connected = False
        self.is_busy = False

        self._setup_style()
        self._build_ui()
        self.refresh_ports()

    def _setup_style(self):
        style = ttk.Style()
        style.theme_use('clam')
        style.configure("TLabel", font=("Segoe UI", 10))
        style.configure("TButton", font=("Segoe UI", 10), padding=4)
        style.configure("Header.TLabel", font=("Segoe UI", 11, "bold"))
        style.configure("Title.TLabel", font=("Segoe UI", 14, "bold"), foreground="#1a5276")
        style.configure("Success.TLabel", font=("Segoe UI", 10, "bold"), foreground="#27ae60")
        style.configure("Error.TLabel", font=("Segoe UI", 10, "bold"), foreground="#c0392b")
        style.configure("Big.TButton", font=("Segoe UI", 11, "bold"), padding=6)

    def _build_ui(self):
        # 1. Top Title Frame
        title_frame = ttk.Frame(self.root, padding="10 8 10 5")
        title_frame.pack(fill=tk.X)

        title_lbl = ttk.Label(title_frame, text="⚡ 蚂蚁矿机算力板 PIC16F1704 固件刷写器", style="Title.TLabel")
        title_lbl.pack(side=tk.LEFT)

        sub_lbl = ttk.Label(title_frame, text="STM32F103C8T6 联机 / 脱机双模式", foreground="#7f8c8d")
        sub_lbl.pack(side=tk.RIGHT, pady=4)

        # 2. Connection Settings Frame
        conn_frame = ttk.LabelFrame(self.root, text="串口连接设置", padding="10 8")
        conn_frame.pack(fill=tk.X, padx=10, pady=5)

        ttk.Label(conn_frame, text="通信端口:").grid(row=0, column=0, sticky=tk.W, padx=5)
        self.port_combobox = ttk.Combobox(conn_frame, width=18, state="readonly")
        self.port_combobox.grid(row=0, column=1, padx=5)

        self.btn_refresh = ttk.Button(conn_frame, text="🔄 刷新", width=8, command=self.refresh_ports)
        self.btn_refresh.grid(row=0, column=2, padx=5)

        ttk.Label(conn_frame, text="波特率:").grid(row=0, column=3, sticky=tk.W, padx=(15, 5))
        self.baud_combobox = ttk.Combobox(conn_frame, values=["115200", "57600", "38400"], width=10, state="readonly")
        self.baud_combobox.set("115200")
        self.baud_combobox.grid(row=0, column=4, padx=5)

        self.btn_connect = ttk.Button(conn_frame, text="🔌 打开串口", width=12, command=self.toggle_connection)
        self.btn_connect.grid(row=0, column=5, padx=(15, 5))

        self.lbl_conn_status = ttk.Label(conn_frame, text="● 未连接", foreground="#c0392b", font=("Segoe UI", 10, "bold"))
        self.lbl_conn_status.grid(row=0, column=6, padx=10)

        # 3. Target Chip Information Frame
        chip_frame = ttk.LabelFrame(self.root, text="目标芯片状态 (PIC16F1704 / S19 算力板)", padding="10 8")
        chip_frame.pack(fill=tk.X, padx=10, pady=5)

        ttk.Label(chip_frame, text="芯片型号:").grid(row=0, column=0, sticky=tk.W, padx=5, pady=2)
        self.lbl_chip_model = ttk.Label(chip_frame, text="--", style="Header.TLabel")
        self.lbl_chip_model.grid(row=0, column=1, sticky=tk.W, padx=5)

        ttk.Label(chip_frame, text="Device ID:").grid(row=0, column=2, sticky=tk.W, padx=(20, 5))
        self.lbl_dev_id = ttk.Label(chip_frame, text="--")
        self.lbl_dev_id.grid(row=0, column=3, sticky=tk.W, padx=5)

        ttk.Label(chip_frame, text="Revision:").grid(row=0, column=4, sticky=tk.W, padx=(20, 5))
        self.lbl_rev_id = ttk.Label(chip_frame, text="--")
        self.lbl_rev_id.grid(row=0, column=5, sticky=tk.W, padx=5)

        ttk.Label(chip_frame, text="CONFIG1:").grid(row=1, column=0, sticky=tk.W, padx=5, pady=2)
        self.lbl_cfg1 = ttk.Label(chip_frame, text="--")
        self.lbl_cfg1.grid(row=1, column=1, sticky=tk.W, padx=5)

        ttk.Label(chip_frame, text="CONFIG2:").grid(row=1, column=2, sticky=tk.W, padx=(20, 5))
        self.lbl_cfg2 = ttk.Label(chip_frame, text="--")
        self.lbl_cfg2.grid(row=1, column=3, sticky=tk.W, padx=5)

        ttk.Label(chip_frame, text="User ID:").grid(row=1, column=4, sticky=tk.W, padx=(20, 5))
        self.lbl_user_id = ttk.Label(chip_frame, text="--")
        self.lbl_user_id.grid(row=1, column=5, sticky=tk.W, padx=5)

        # 4. Firmware File Frame
        file_frame = ttk.LabelFrame(self.root, text="刷写固件文件 (HEX)", padding="10 8")
        file_frame.pack(fill=tk.X, padx=10, pady=5)

        self.file_entry = ttk.Entry(file_frame)
        self.file_entry.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(0, 10))

        self.btn_browse = ttk.Button(file_frame, text="📁 浏览...", width=10, command=self.browse_file)
        self.btn_browse.pack(side=tk.RIGHT)

        # 5. Operations & Actions Frame
        action_frame = ttk.Frame(self.root, padding="10 5")
        action_frame.pack(fill=tk.X, padx=10)

        self.btn_flash = ttk.Button(action_frame, text="⚡ 一键自动刷写 (Erase & Write & Verify)", style="Big.TButton", command=self.action_flash)
        self.btn_flash.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(0, 5))

        self.btn_detect = ttk.Button(action_frame, text="🔍 检测芯片", width=12, command=self.action_detect)
        self.btn_detect.pack(side=tk.LEFT, padx=3)

        self.btn_erase = ttk.Button(action_frame, text="🗑️ 整片擦除", width=12, command=self.action_erase)
        self.btn_erase.pack(side=tk.LEFT, padx=3)

        self.btn_dump = ttk.Button(action_frame, text="💾 读取导出", width=12, command=self.action_dump)
        self.btn_dump.pack(side=tk.LEFT, padx=3)

        self.btn_reset = ttk.Button(action_frame, text="🔄 复位运行", width=12, command=self.action_reset)
        self.btn_reset.pack(side=tk.LEFT, padx=3)

        # 6. Progress Bar
        prog_frame = ttk.Frame(self.root, padding="10 2")
        prog_frame.pack(fill=tk.X, padx=10)

        self.progress_var = tk.DoubleVar()
        self.prog_bar = ttk.Progressbar(prog_frame, variable=self.progress_var, maximum=100)
        self.prog_bar.pack(fill=tk.X, side=tk.TOP, pady=2)

        self.lbl_progress = ttk.Label(prog_frame, text="就绪", font=("Segoe UI", 9), foreground="#7f8c8d")
        self.lbl_progress.pack(side=tk.LEFT)

        # 7. Log Output Window
        log_frame = ttk.LabelFrame(self.root, text="运行操作日志", padding="5")
        log_frame.pack(fill=tk.BOTH, expand=True, padx=10, pady=(5, 10))

        self.log_text = tk.Text(log_frame, wrap=tk.WORD, font=("Consolas", 9), bg="#1e1e1e", fg="#d4d4d4")
        self.log_text.pack(side=tk.LEFT, fill=tk.BOTH, expand=True)

        scrollbar = ttk.Scrollbar(log_frame, command=self.log_text.yview)
        scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
        self.log_text.config(yscrollcommand=scrollbar.set)

        self.log("[INFO] 欢迎使用 AntMiner PIC16F1704 固件刷写器上位机。")
        self.log("[INFO] 请连接 STM32F103 烧录器并正确接线到算力板 PIC 接口。")

    def log(self, msg: str, tag: str = None):
        t_str = time.strftime("[%H:%M:%S] ")
        self.log_text.insert(tk.END, t_str + msg + "\n")
        self.log_text.see(tk.END)

    def refresh_ports(self):
        ports = PIC16F1704Programmer.list_ports()
        self.port_combobox['values'] = ports
        if ports:
            if not self.port_combobox.get() or self.port_combobox.get() not in ports:
                self.port_combobox.current(0)
        else:
            self.port_combobox.set("")

    def toggle_connection(self):
        if not self.is_connected:
            port = self.port_combobox.get().strip()
            if not port:
                messagebox.showerror("错误", "请选择有效的通信串口！")
                return

            baud = int(self.baud_combobox.get())
            self.programmer.port = port
            self.programmer.baudrate = baud

            try:
                if self.programmer.connect():
                    self.is_connected = True
                    self.lbl_conn_status.config(text="● 已连接", foreground="#27ae60")
                    self.btn_connect.config(text="🔌 关闭串口")
                    self.log(f"[SUCCESS] 成功连接烧录器: {port} @ {baud}bps")
                    self.action_detect()
                else:
                    self.programmer.disconnect()
                    messagebox.showerror("通信失败", f"无法与 {port} 上的烧录器建立通信，请确认固件已烧录且连接正常！")
            except Exception as e:
                self.log(f"[ERROR] 打开串口失败: {e}")
                messagebox.showerror("连接错误", str(e))
        else:
            self.programmer.disconnect()
            self.is_connected = False
            self.lbl_conn_status.config(text="● 未连接", foreground="#c0392b")
            self.btn_connect.config(text="🔌 打开串口")
            self.lbl_chip_model.config(text="--")
            self.lbl_dev_id.config(text="--")
            self.lbl_rev_id.config(text="--")
            self.lbl_cfg1.config(text="--")
            self.lbl_cfg2.config(text="--")
            self.lbl_user_id.config(text="--")
            self.log("[INFO] 串口已断开。")

    def browse_file(self):
        filename = filedialog.askopenfilename(
            title="选择 PIC 固件文件",
            filetypes=[("Intel HEX Files", "*.hex;*.HEX"), ("All Files", "*.*")]
        )
        if filename:
            self.file_entry.delete(0, tk.END)
            self.file_entry.insert(0, filename)

    def set_busy(self, busy: bool):
        self.is_busy = busy
        state = tk.DISABLED if busy else tk.NORMAL
        self.btn_flash.config(state=state)
        self.btn_detect.config(state=state)
        self.btn_erase.config(state=state)
        self.btn_dump.config(state=state)
        self.btn_reset.config(state=state)
        self.btn_browse.config(state=state)

    def action_detect(self):
        if not self.is_connected:
            messagebox.showwarning("警告", "请先连接串口！")
            return

        def task():
            self.set_busy(True)
            self.log("[*] 正在检测目标 PIC 芯片...")
            try:
                info = self.programmer.detect_chip()
                if info.get('connected'):
                    self.root.after(0, lambda: self._update_chip_info(info))
                    self.log(f"[OK] 发现芯片: {info['chip_name']} (DevID: {info['dev_id']:#06x}, Rev: {info['rev_id']:#04x})")
                else:
                    self.root.after(0, lambda: self._clear_chip_info())
                    self.log("[WARN] 未检测到 PIC 芯片或芯片未响应！请检查接线 (MCLR/CLK/DAT/VDD/GND)")
            except Exception as e:
                self.log(f"[ERROR] 检测芯片异常: {e}")
            finally:
                self.set_busy(False)

        threading.Thread(target=task, daemon=True).start()

    def _update_chip_info(self, info: dict):
        self.lbl_chip_model.config(text=info['chip_name'], foreground="#27ae60" if info['is_valid'] else "#e67e22")
        self.lbl_dev_id.config(text=f"{info['dev_id']:#06x}")
        self.lbl_rev_id.config(text=f"{info['rev_id']:#04x}")
        self.lbl_cfg1.config(text=f"{info['config1']:#06x}")
        self.lbl_cfg2.config(text=f"{info['config2']:#06x}")
        self.lbl_user_id.config(text=" ".join(f"{u:04X}" for u in info['userids']))

    def _clear_chip_info(self):
        self.lbl_chip_model.config(text="未检测到", foreground="#c0392b")
        self.lbl_dev_id.config(text="--")
        self.lbl_rev_id.config(text="--")
        self.lbl_cfg1.config(text="--")
        self.lbl_cfg2.config(text="--")
        self.lbl_user_id.config(text="--")

    def action_erase(self):
        if not self.is_connected:
            messagebox.showwarning("警告", "请先连接串口！")
            return
        if not messagebox.askyesno("确认擦除", "确定要整片擦除 PIC16F1704 吗？\n所有 Flash 程序和配置字将被清空！"):
            return

        def task():
            self.set_busy(True)
            self.log("[*] 正在执行整片擦除 (Bulk Erase)...")
            try:
                if self.programmer.bulk_erase():
                    self.log("[SUCCESS] 整片擦除成功！")
                    self.action_detect()
                else:
                    self.log("[ERROR] 整片擦除失败！")
            except Exception as e:
                self.log(f"[ERROR] 擦除异常: {e}")
            finally:
                self.set_busy(False)

        threading.Thread(target=task, daemon=True).start()

    def action_reset(self):
        if not self.is_connected:
            return
        try:
            self.programmer.reset_target()
            self.log("[OK] 已释放 MCLR 复位线，目标 PIC 开始正常运行。")
        except Exception as e:
            self.log(f"[ERROR] 复位失败: {e}")

    def action_flash(self):
        if not self.is_connected:
            messagebox.showwarning("警告", "请先连接串口！")
            return

        hex_path = self.file_entry.get().strip()
        if not hex_path or not os.path.exists(hex_path):
            messagebox.showerror("错误", "请选择有效的 .hex 固件文件！")
            return

        def task():
            self.set_busy(True)
            self.log(f"[*] 开始刷写固件: {os.path.basename(hex_path)}")

            def progress_cb(pct, total, msg):
                self.root.after(0, lambda: self._update_progress(pct, msg))

            try:
                self.programmer.flash_hex(hex_path, verify=True, progress_cb=progress_cb)
                self.log("[SUCCESS] 🎉 固件刷写并校验 100% 成功！PIC 已进入运行状态。")
                self.root.after(0, lambda: messagebox.showinfo("成功", "固件刷写与校验成功！"))
                self.action_detect()
            except Exception as e:
                self.log(f"[FAIL] 刷写失败: {e}")
                self.root.after(0, lambda: messagebox.showerror("刷写失败", str(e)))
            finally:
                self.set_busy(False)

        threading.Thread(target=task, daemon=True).start()

    def action_dump(self):
        if not self.is_connected:
            messagebox.showwarning("警告", "请先连接串口！")
            return

        out_path = filedialog.asksaveasfilename(
            title="保存固件导出文件",
            defaultextension=".hex",
            filetypes=[("Intel HEX Files", "*.hex")]
        )
        if not out_path:
            return

        def task():
            self.set_busy(True)
            self.log(f"[*] 正在从 PIC16F1704 导出固件到 {os.path.basename(out_path)}...")

            def progress_cb(pct, total, msg):
                self.root.after(0, lambda: self._update_progress(pct, msg))

            try:
                self.programmer.dump_hex(out_path, progress_cb=progress_cb)
                self.log(f"[SUCCESS] 固件成功导出至: {out_path}")
                self.root.after(0, lambda: messagebox.showinfo("成功", f"固件已成功导出！\n文件: {out_path}"))
            except Exception as e:
                self.log(f"[FAIL] 固件导出失败: {e}")
                self.root.after(0, lambda: messagebox.showerror("导出失败", str(e)))
            finally:
                self.set_busy(False)

        threading.Thread(target=task, daemon=True).start()

    def _update_progress(self, pct: int, msg: str):
        self.progress_var.set(pct)
        self.lbl_progress.config(text=f"[{pct}%] {msg}")

def main():
    root = tk.Tk()
    app = PIC16F1704GUI(root)
    root.mainloop()

if __name__ == "__main__":
    main()
