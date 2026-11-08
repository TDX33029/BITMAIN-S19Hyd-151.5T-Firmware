// FUN_00abc544 @ 00abc544 size=692 calls_out=6 calls_in=0
// strings: MANUAL | PauseFanMode | PauseFanMode | PauseFanMode

void FUN_00abc544(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int ***pppiVar3;
  uint uVar4;
  int **ppiVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 auStack_e5 [13];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 auStack_cd [13];
  int **local_c0;
  int **local_bc;
  int **local_b8;
  undefined1 *puStack_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int **local_90;
  int **local_8c;
  int **local_88;
  int **local_84;
  int **local_80;
  undefined1 *local_7c;
  uint uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int ***local_58;
  undefined2 *local_54;
  int *local_50;
  undefined4 ****local_4c;
  int *local_40;
  char *local_3c;
  int ***local_38;
  code *local_34;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  
  local_b0 = param_2[4];
  if (local_b0 == 0x80000000) {
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 4;
    FUN_00abbec8(param_2);
    return;
  }
  if (local_b0 == 0x80000007) {
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 3;
    return;
  }
  local_c0 = (int **)*param_2;
  local_bc = (int **)param_2[1];
  local_b8 = (int **)param_2[2];
  puStack_b4 = (undefined1 *)param_2[3];
  local_ac = param_2[5];
  local_a8 = param_2[6];
  iStack_a4 = param_2[7];
  local_a0 = param_2[8];
  iStack_9c = param_2[9];
  iStack_98 = param_2[10];
  iStack_94 = param_2[0xb];
  uVar4 = 7;
  if ((int)local_b0 < 0) {
    uVar4 = local_b0 ^ 0x80000000;
  }
  if (uVar4 == 2) {
    ppiVar5 = local_b8;
    ppiVar7 = local_bc;
  }
  else {
    if (uVar4 != 5) {
      local_38 = &local_88;
      local_28 = 0xc;
      local_30 = -0x80000000;
      local_40 = &local_30;
      local_2c = "PauseFanMode";
      local_34 = FUN_00700f8c;
      local_3c = &LAB_012b97d8;
      local_88 = local_c0;
      local_84 = local_bc;
      local_80 = local_b8;
      local_7c = puStack_b4;
      uStack_78 = local_b0;
      iStack_74 = local_ac;
      local_70 = local_a8;
      iStack_6c = iStack_a4;
      iStack_68 = local_a0;
      iStack_64 = iStack_9c;
      iStack_60 = iStack_98;
      iStack_5c = iStack_94;
      FUN_00664898(&local_50,&DAT_0059054b,&local_40);
      if (local_30 != -0x80000000) {
        FUN_019bb7e0(local_30,local_2c);
      }
      FUN_01bed4e2(auStack_cd,&local_50,0xc);
      pppiVar3 = &local_88;
      goto LAB_00abc784;
    }
    ppiVar5 = local_bc;
    ppiVar7 = local_c0 + 2;
  }
  iVar6 = 0;
  local_90 = ppiVar7;
  local_8c = ppiVar5;
  do {
    if ((*(int ***)((int)&DAT_01c12bfc + iVar6) == ppiVar5) &&
       (iVar2 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01c12bf8 + iVar6),ppiVar7,ppiVar5),
       iVar2 == 0)) {
      FUN_00fe40e4(&local_c0);
      uVar1 = (&DAT_01c12c00)[iVar6];
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = uVar1;
      return;
    }
    iVar6 = iVar6 + 0xc;
  } while (iVar6 != 0x24);
  local_58 = &local_90;
  local_54 = &DAT_0132b6a0;
  local_4c = &local_58;
  local_38 = (int ***)&DAT_0000000c;
  local_40 = (int *)&DAT_80000000;
  local_80 = &local_50;
  local_88 = &local_40;
  local_50 = (int *)&DAT_0058702e;
  local_3c = "PauseFanMode";
  local_7c = &LAB_012fff30;
  local_84 = (int **)&LAB_012b97d8;
  FUN_00664898(&local_30,&DAT_00592d44,&local_88);
  if (local_40 != (int *)&DAT_80000000) {
    FUN_019bb7e0(local_40,local_3c);
  }
  FUN_01bed4e2(auStack_cd,&local_30,0xc);
  pppiVar3 = &local_c0;
LAB_00abc784:
  FUN_00fe40e4(pppiVar3);
  FUN_01bed4e2(auStack_e5,auStack_cd,0xc);
  local_f0 = local_d8;
  uStack_ec = uStack_d4;
  local_e8 = local_d0;
  local_e6 = local_ce;
  FUN_01bed4e2((int)param_1 + 5,&local_f0,0x17);
  *param_1 = 0;
  return;
}

