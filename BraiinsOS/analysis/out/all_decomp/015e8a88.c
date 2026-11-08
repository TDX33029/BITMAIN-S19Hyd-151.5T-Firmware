// FUN_015e8a88 @ 015e8a88 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_015e8a88(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_016e034e(2,param_3,param_4);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    *(undefined4 *)(param_1 + 4) = *puVar2;
    *param_1 = 0;
    return;
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 4;
  return;
}

