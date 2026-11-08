// FUN_00045af8 @ 00045af8  size=204  callers=1
// program: bmminer


void FUN_00045af8(void)

{
  int iVar1;
  char local_808 [2048];
  
  if (DAT_0050f5f4 == 0) {
    return;
  }
  iVar1 = munmap(DAT_0050f5e8,0x1200);
  if (iVar1 < 0) {
    builtin_strncpy(local_808,"munmap failed!\n",0x10);
    FUN_00032218(0,local_808);
  }
  iVar1 = munmap(DAT_0050f5f0,0x1000000);
  if (iVar1 < 0) {
    builtin_strncpy(local_808,"munmap fpga_mem_addr_hal failed!\n",0x22);
    FUN_00032218(0,local_808);
  }
  DAT_0050f5f4 = 0;
  close(DAT_0050f5e4);
  close(DAT_0050f5ec);
  return;
}

