// FUN_00f7f074 @ 00f7f074 size=72 calls_out=3 calls_in=1
// strings: 

void FUN_00f7f074(longlong *param_1)

{
  longlong lVar1;
  int iStack_14;
  uint uStack_10;
  
  FUN_014f4a6c(&iStack_14);
  if (iStack_14 == -0x80000000) {
    lVar1 = (ulonglong)uStack_10 << 0x20;
  }
  else {
    FUN_0189bc00(&iStack_14);
    lVar1 = FUN_0070153c();
  }
  *param_1 = lVar1;
  return;
}

