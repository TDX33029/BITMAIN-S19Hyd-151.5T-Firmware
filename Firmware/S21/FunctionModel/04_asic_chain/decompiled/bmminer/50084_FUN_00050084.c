// FUN_00050084 @ 00050084  size=216  callers=1
// program: bmminer


void FUN_00050084(void)

{
  uint uVar1;
  char acStack_2010 [8196];
  
  FUN_0006b6c0(&DAT_00a6c8fc,0x20);
  if (3 < DAT_000be63c) {
    snprintf(acStack_2010,0x2000,"miner ID : %s\n",&DAT_00a6c8fc);
    FUN_0004948c(3,acStack_2010,0);
  }
  uVar1 = FUN_0006cc50();
  if (3 < DAT_000be63c) {
    snprintf(acStack_2010,0x2000,"FPGA Version = 0x%04X\n",uVar1 & 0xffff);
    FUN_0004948c(3,acStack_2010,0);
  }
  sprintf(&DAT_000c9514,"%d.%d.%d.%d",uVar1 & 0xff,(uVar1 & 0xffffff) >> 0x10,1,3);
  return;
}

