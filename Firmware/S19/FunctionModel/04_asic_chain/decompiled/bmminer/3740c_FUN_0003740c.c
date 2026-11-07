// FUN_0003740c @ 0003740c  size=216  callers=1
// program: bmminer


void FUN_0003740c(void)

{
  uint uVar1;
  char acStack_810 [2052];
  
  FUN_0004a4a4(&DAT_00b2d22c,0x20);
  if (3 < DAT_00087bbc) {
    snprintf(acStack_810,0x800,"miner ID : %s\n",&DAT_00b2d22c);
    FUN_00032218(3,acStack_810,0);
  }
  uVar1 = FUN_0004b5f0();
  if (3 < DAT_00087bbc) {
    snprintf(acStack_810,0x800,"FPGA Version = 0x%04X\n",uVar1 & 0xffff);
    FUN_00032218(3,acStack_810,0);
  }
  sprintf(&DAT_0008a874,"%d.%d.%d.%d",uVar1 & 0xff,(uVar1 & 0xffffff) >> 0x10,1,3);
  return;
}

