// FUN_0155898c @ 0155898c size=556 calls_out=4 calls_in=1
// strings: 

void FUN_0155898c(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_10c;
  uint local_108;
  uint local_104;
  int local_100;
  int local_fc;
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_d4;
  int local_d0;
  undefined1 auStack_c8 [4];
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a0;
  int local_9c;
  int iStack_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined2 local_28;
  
  local_108 = param_5;
  piVar4 = (int *)((uint)auStack_c8 | 4);
  local_104 = 0;
  local_10c = param_4;
  if (param_2 == 0) {
    FUN_0150dac0(&local_a0,&local_10c);
    if (local_a0 == -0x80000000) {
      piVar4[1] = iStack_98;
      piVar4[2] = local_94;
      local_c4 = local_9c;
      goto LAB_01558a10;
    }
    local_100 = local_88;
    local_fc = local_84;
    local_f8 = local_80;
    iVar2 = local_9c;
    local_f0 = local_90;
    local_9c = iStack_98;
    iStack_98 = local_94;
    iVar3 = local_a0;
    local_90 = local_8c;
  }
  else {
    FUN_0150d960(&local_a0,&local_10c);
    if (local_a0 == -0x80000000) {
      *piVar4 = local_9c;
      piVar4[1] = iStack_98;
      local_bc = local_94;
LAB_01558a10:
      param_1[2] = 0x80000016;
      param_1[3] = local_c4;
      param_1[4] = local_c0;
      param_1[5] = local_bc;
      *param_1 = 1;
      return;
    }
    iVar2 = local_a0;
    local_f0 = local_94;
    iVar3 = -0x80000000;
  }
  uVar1 = local_f8;
  piVar4[1] = local_9c;
  piVar4[2] = iStack_98;
  local_d0 = local_bc;
  local_b0 = local_100;
  local_ac = local_fc;
  local_a8 = local_f8;
  local_d4 = local_c0;
  local_e8 = local_100;
  local_e4 = local_fc;
  uStack_e0 = local_f8;
  local_f8 = local_c0;
  local_f4 = local_bc;
  if (local_108 <= local_104) {
    param_1[1] = iVar3;
    param_1[2] = iVar2;
    param_1[3] = local_c0;
    param_1[4] = local_bc;
    param_1[5] = local_f0;
    param_1[6] = local_90;
    param_1[7] = local_100;
    param_1[8] = local_fc;
    param_1[9] = uVar1;
    *param_1 = 0;
    return;
  }
  local_28 = 4;
  local_9c = 0x100001;
  local_a0 = -0x7fffffff;
  local_100 = iVar3;
  local_fc = iVar2;
  FUN_01525ed4(param_3,&local_a0,*(char *)(param_3 + 0x31) == '\x02');
  *(undefined1 *)(param_1 + 3) = 6;
  *(undefined1 *)(param_3 + 0x255) = 1;
  param_1[2] = 0x80000016;
  *param_1 = 1;
  if (iVar3 == -0x80000000) {
    piVar4 = (int *)((uint)&local_100 | 4);
    iVar2 = *piVar4;
  }
  else {
    if (iVar3 != 0) {
      thunk_FUN_016d3fb4(local_fc);
    }
    if (local_f4 != 0) {
      thunk_FUN_016d3fb4(local_f0);
    }
    piVar4 = &local_e8;
    iVar2 = local_e8;
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(piVar4[1]);
  }
  return;
}

