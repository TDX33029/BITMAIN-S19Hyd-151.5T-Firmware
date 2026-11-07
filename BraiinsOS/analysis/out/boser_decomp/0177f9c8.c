// FUN_0177f9c8 @ 0177f9c8 size=88 calls_out=1 calls_in=1
// strings: 

void FUN_0177f9c8(undefined4 *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(param_2 + 0x9c);
  bVar2 = iVar1 != -0x80000000;
  if (bVar2) {
    iVar1 = *(int *)(param_2 + 0xa4);
  }
  if (bVar2 && iVar1 != 0) {
    FUN_015e8ad4(&local_18,*(undefined4 *)(*(int *)(param_2 + 0xa0) + 4),
                 *(undefined4 *)(*(int *)(param_2 + 0xa0) + 8));
  }
  else {
    local_18 = 0x80000000;
  }
  *param_1 = local_18;
  param_1[1] = uStack_14;
  param_1[2] = uStack_10;
  return;
}

