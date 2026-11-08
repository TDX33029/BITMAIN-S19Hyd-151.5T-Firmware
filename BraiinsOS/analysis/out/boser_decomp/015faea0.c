// FUN_015faea0 @ 015faea0 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_015faea0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_015da848(param_2);
  if (iVar1 == 0) {
    *param_1 = 0x80000000;
    return;
  }
  FUN_006666fc(param_1,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  return;
}

