// FUN_0003670c @ 0003670c  size=188  callers=1
// program: bmminer


undefined4 FUN_0003670c(uint param_1)

{
  int iVar1;
  char acStack_808 [2040];
  
  iVar1 = FUN_0001c888(param_1 & 0xff);
  if (iVar1 != 0) {
    FUN_0001c8c0();
    thunk_FUN_0004c224(param_1 & 0xff);
    return 0;
  }
  if (3 < DAT_00087bbc) {
    snprintf(acStack_808,0x800,"Chain %d PIC reset failed.\n",param_1);
    FUN_00032218(3,acStack_808,0);
  }
  FUN_0002013c(param_1,0);
  FUN_0003a9e0(4,param_1);
  FUN_00036380(8,"PIC reset failed.\n");
  return 0xffffffff;
}

