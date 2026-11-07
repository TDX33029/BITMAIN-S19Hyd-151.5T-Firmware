// FUN_000458e8 @ 000458e8  size=496  callers=4
// program: bmminer


undefined4 FUN_000458e8(void)

{
  undefined4 uVar1;
  char acStack_818 [2052];
  
  DAT_0050f5e4 = open64("/dev/axi_fpga_dev",2);
  if (DAT_0050f5e4 < 0) {
    snprintf(acStack_818,0x800,"/dev/axi_fpga_dev open failed. fd = %d\n",DAT_0050f5e4);
    FUN_00032218(0,acStack_818);
    uVar1 = 0xffffffff;
  }
  else {
    DAT_0050f5e8 = mmap64((void *)0x0,0x1200,3,1,DAT_0050f5e4,0);
    if (DAT_0050f5e8 == (void *)0x0) {
      snprintf(acStack_818,0x800,"mmap axi_fpga_addr failed. axi_fpga_addr = %p\n",(void *)0x0);
      FUN_00032218(0,acStack_818,0);
      close(DAT_0050f5e4);
      uVar1 = 0xfffffffe;
    }
    else {
      DAT_0050f5ec = open64("/dev/fpga_mem",2);
      if (DAT_0050f5ec < 0) {
        snprintf(acStack_818,0x800,"/dev/fpga_mem open failed. fd_fpga_mem_hal = %d\n",DAT_0050f5ec)
        ;
        FUN_00032218(0,acStack_818);
        perror("open");
        munmap(DAT_0050f5e8,0x1200);
        close(DAT_0050f5e4);
        uVar1 = 0xffffffff;
      }
      else {
        DAT_0050f5f0 = mmap64((void *)0x0,0x1000000,3,1,DAT_0050f5ec,0);
        if (DAT_0050f5f0 == (void *)0x0) {
          snprintf(acStack_818,0x800,"mmap fpga_mem_addr_hal failed. fpga_mem_addr_hal = 0x%x\n",0);
          FUN_00032218(0,acStack_818,0);
          munmap(DAT_0050f5e8,0x1200);
          close(DAT_0050f5e4);
          close(DAT_0050f5ec);
          uVar1 = 0xffffffff;
        }
        else {
          snprintf(acStack_818,0x800,"mmap fpga_mem_addr_hal = 0x%x\n",(uint)DAT_0050f5f0);
          FUN_00032218(3,acStack_818,0);
          uVar1 = 0;
          DAT_0050f5f4 = 1;
        }
      }
    }
  }
  return uVar1;
}

