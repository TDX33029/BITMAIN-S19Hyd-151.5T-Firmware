// FUN_01245ca4 @ 01245ca4 size=68 calls_out=2 calls_in=1
// strings: Missing upstream authority key

void FUN_01245ca4(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_01ad01f0(param_2,param_3,0x2f);
  if ((int)((ulonglong)lVar2 >> 0x20) == 0) {
    uVar1 = FUN_00667978("Missing upstream authority key",0x1e);
    lVar2 = (ulonglong)uVar1 << 0x20;
  }
  *param_1 = lVar2;
  return;
}

