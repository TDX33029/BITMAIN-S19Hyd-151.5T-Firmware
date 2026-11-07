// FUN_016cb120 @ 016cb120 size=88 calls_out=1 calls_in=10
// strings: 

void FUN_016cb120(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar2 = 0;
  bVar3 = *(int *)(param_2 + 0x10) == 0;
  iVar1 = 0;
  if (!bVar3) {
    iVar1 = *(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x10) * 8;
    bVar3 = iVar1 == 8;
  }
  if (!bVar3) {
    uVar2 = *(undefined4 *)(iVar1 + -4);
  }
  FUN_016c1488(&local_20,uVar2);
  param_1[5] = param_2;
  *param_1 = 0;
  param_1[2] = local_20;
  param_1[3] = uStack_1c;
  param_1[4] = uStack_18;
  return;
}

