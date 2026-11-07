// FUN_0004eb54 @ 0004eb54  size=188  callers=1
// program: bmminer


undefined4 FUN_0004eb54(uint param_1)

{
  int iVar1;
  char acStack_2008 [8184];
  
  iVar1 = FUN_00024304(param_1 & 0xff);
  if (iVar1 != 0) {
    FUN_0002433c();
    thunk_FUN_0006eaac(param_1 & 0xff);
    return 0;
  }
  if (3 < DAT_000be63c) {
    snprintf(acStack_2008,0x2000,"Chain %d PIC reset failed.\n",param_1);
    FUN_0004948c(3,acStack_2008,0);
  }
  FUN_0002a654(param_1,0);
  FUN_00056e88(4,param_1);
  FUN_0004e8c8(8,"PIC reset failed.\n");
  return 0xffffffff;
}

