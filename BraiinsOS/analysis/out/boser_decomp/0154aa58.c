// FUN_0154aa58 @ 0154aa58 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_0154aa58(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01a41998(param_2);
  if (iVar1 == 0) {
    *param_1 = 0x80000000;
    return;
  }
  FUN_006666fc(param_1,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  return;
}

