// FUN_00060dc8 @ 00060dc8  size=812  callers=4
// program: bmminer


undefined4 FUN_00060dc8(void)

{
  undefined4 uVar1;
  char acStack_808 [2048];
  
  if (DAT_00944cbc == 0) {
    DAT_00944cc0 = open("/dev/axi_fpga_dev",2);
    if (DAT_00944cc0 < 0) {
      snprintf(acStack_808,0x800,"/dev/axi_fpga_dev open failed. fd = %d\n",DAT_00944cc0);
      FUN_0004948c(0,acStack_808,0);
      uVar1 = 0xffffffff;
    }
    else {
      DAT_00944cc4 = mmap((void *)0x0,0x1200,3,1,DAT_00944cc0,0);
      if (DAT_00944cc4 == (void *)0x0) {
        snprintf(acStack_808,0x800,"mmap axi_fpga_addr failed. axi_fpga_addr = %p\n",(void *)0x0);
        FUN_0004948c(0,acStack_808,0);
        close(DAT_00944cc0);
        uVar1 = 0xfffffffe;
      }
      else {
        DAT_00944cc8 = open("/dev/fpga_mem",2);
        if (DAT_00944cc8 < 0) {
          snprintf(acStack_808,0x800,"/dev/fpga_mem open failed. fd_fpga_mem_hal = %d\n",
                   DAT_00944cc8);
          FUN_0004948c(0,acStack_808,0);
          perror("open");
          munmap(DAT_00944cc4,0x1200);
          close(DAT_00944cc0);
          uVar1 = 0xffffffff;
        }
        else {
          DAT_00944ccc = mmap((void *)0x0,0x1000000,3,1,DAT_00944cc8,0);
          if (DAT_00944ccc == (void *)0x0) {
            snprintf(acStack_808,0x800,"mmap fpga_mem_addr_hal failed. fpga_mem_addr_hal = 0x%x\n",0
                    );
            FUN_0004948c(0,acStack_808,0);
            munmap(DAT_00944cc4,0x1200);
            close(DAT_00944cc0);
            close(DAT_00944cc8);
            uVar1 = 0xffffffff;
          }
          else {
            snprintf(acStack_808,0x800,"mmap fpga_mem_addr_hal = 0x%x\n",(uint)DAT_00944ccc);
            FUN_0004948c(3,acStack_808,0);
            DAT_00944cbc = 1;
            uVar1 = 0;
          }
        }
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

