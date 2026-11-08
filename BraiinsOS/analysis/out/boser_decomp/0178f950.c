// FUN_0178f950 @ 0178f950 size=88 calls_out=1 calls_in=0
// strings: 

void FUN_0178f950(undefined4 *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(param_2 + 0x8c);
  bVar2 = iVar1 != -0x80000000;
  if (bVar2) {
    iVar1 = *(int *)(param_2 + 0x94);
  }
  if (bVar2 && iVar1 != 0) {
    FUN_015e8ad4(&local_18,*(undefined4 *)(*(int *)(param_2 + 0x90) + 4),
                 *(undefined4 *)(*(int *)(param_2 + 0x90) + 8));
  }
  else {
    local_18 = 0x80000000;
  }
  *param_1 = local_18;
  param_1[1] = uStack_14;
  param_1[2] = uStack_10;
  return;
}

