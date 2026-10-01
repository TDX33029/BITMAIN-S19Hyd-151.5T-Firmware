Import("env")
import os
import shutil

def after_build(source, target, env):
    elf_path = str(target[0])
    bin_path = elf_path.replace(".elf", ".bin")
    hex_path = elf_path.replace(".elf", ".hex")

    # Generate .hex and .bin
    objcopy = env.subst("$OBJCOPY")
    env.Execute(f'"{objcopy}" -O ihex "{elf_path}" "{hex_path}"')
    env.Execute(f'"{objcopy}" -O binary "{elf_path}" "{bin_path}"')

    # Output directory
    bin_dir = os.path.abspath(os.path.join(env.get("PROJECT_DIR"), "..", "bin"))
    os.makedirs(bin_dir, exist_ok=True)

    target_bin = os.path.join(bin_dir, "stm32_pic16f1704_flasher.bin")
    target_hex = os.path.join(bin_dir, "stm32_pic16f1704_flasher.hex")

    if os.path.exists(bin_path):
        shutil.copyfile(bin_path, target_bin)
        print(f"[POST-BUILD] Copied binary to: {target_bin}")
    if os.path.exists(hex_path):
        shutil.copyfile(hex_path, target_hex)
        print(f"[POST-BUILD] Copied hex to: {target_hex}")

env.AddPostAction("$BUILD_DIR/${PROGNAME}.elf", after_build)
