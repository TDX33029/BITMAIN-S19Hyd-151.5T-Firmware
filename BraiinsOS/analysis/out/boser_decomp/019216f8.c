// FUN_019216f8 @ 019216f8 size=156 calls_out=3 calls_in=0
// strings: 

void FUN_019216f8(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r9;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *local_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
    unaff_r9 = *(int *)(param_2 + 8);
  }
  if (iVar3 == 0) {
    iVar3 = 4;
    unaff_r9 = 0;
  }
  FUN_018eb974(&local_a8,iVar3,iVar3 + unaff_r9 * 0xc);
  iVar2 = *param_3;
  iVar1 = param_3[1];
  iVar3 = param_3[2];
  FUN_0134bd64(local_a8,iStack_a4);
  if (iVar2 == -0x80000000) {
    iVar2 = 0;
    iVar3 = 0;
    iStack_a4 = 1;
  }
  else {
    iStack_a4 = iVar1;
  }
  uStack_7c = uStack_9c;
  uStack_78 = uStack_98;
  uStack_74 = uStack_94;
  local_8c = &DAT_80000005;
  local_a8 = iVar2;
  iStack_a0 = iVar3;
  local_88 = iVar2;
  iStack_84 = iStack_a4;
  iStack_80 = iVar3;
  FUN_018f3540(param_1);
  return;
}

