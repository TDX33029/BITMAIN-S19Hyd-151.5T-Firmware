// FUN_015471e0 @ 015471e0 size=164 calls_out=3 calls_in=2
// strings: 

void FUN_015471e0(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int local_a8;
  int local_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if (param_2 == 0) {
    iVar1 = 0;
    iVar2 = 4;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
    iVar1 = *(int *)(param_2 + 8);
  }
  FUN_01513a48(&local_a8,iVar2,iVar2 + iVar1 * 0xc);
  local_88 = *param_3;
  iVar1 = param_3[1];
  iStack_a0 = param_3[2];
  if (local_a8 != 0) {
    thunk_FUN_016d3fb4(local_a4);
  }
  if (local_88 == -0x80000000) {
    local_88 = 0;
    iStack_a0 = 0;
    local_a4 = 1;
  }
  else {
    local_a4 = iVar1;
  }
  uStack_7c = uStack_9c;
  uStack_78 = uStack_98;
  uStack_74 = uStack_94;
  local_8c = 0x80000005;
  local_a8 = local_88;
  iStack_84 = local_a4;
  iStack_80 = iStack_a0;
  FUN_01527ba4(param_1);
  return;
}

