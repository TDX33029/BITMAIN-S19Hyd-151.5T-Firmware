// FUN_018caf4c @ 018caf4c size=244 calls_out=7 calls_in=1
// strings: 

void FUN_018caf4c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_1c0 [160];
  int local_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined2 local_a4;
  int local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 *local_90;
  uint local_8c;
  undefined4 local_88;
  int local_84;
  undefined2 local_80;
  undefined1 local_24;
  
  FUN_018cb058(auStack_1c0,param_1,*(undefined1 *)(param_2 + 0xac));
  local_8c = local_8c & 0xffffff00;
  local_90 = &DAT_80000010;
  local_24 = 0x11;
  FUN_018e1c0c(&local_120,&local_90);
  local_a4 = 5;
  FUN_018e0168(&local_90,&local_120);
  uVar1 = local_8c;
  local_94 = local_80;
  local_98 = local_88;
  local_9c = local_8c;
  local_a0 = local_84;
  FUN_018bf724(&local_120,param_2,&local_a0);
  FUN_018e0a2c(&local_a0,&local_120);
  local_120 = local_a0;
  uStack_11c = local_9c;
  uStack_118 = local_98;
  iVar2 = *(int *)(param_2 + 0x98);
  if (iVar2 != -0x80000000) {
    FUN_0134bd64(iVar2,*(undefined4 *)(param_2 + 0x9c));
  }
  *(int *)(param_2 + 0x98) = local_120;
  *(uint *)(param_2 + 0x9c) = uStack_11c;
  *(undefined4 *)(param_2 + 0xa0) = uStack_118;
  FUN_0134bd64(local_90,uVar1);
  FUN_018cb508(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 4),auStack_1c0,param_2);
  return;
}

