// FUN_00920c54 @ 00920c54 size=1508 calls_out=12 calls_in=2
// strings: enabled | PoolConfigIn | PoolConfigIn | user-- | PoolConfigIn

void FUN_00920c54(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int **ppiVar4;
  int **ppiVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *local_110;
  undefined1 *local_10c;
  int *local_108;
  code *local_104;
  int iStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int *local_e0;
  undefined1 *local_dc;
  undefined4 local_d8;
  undefined1 *local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int local_b0;
  char *pcStack_ac;
  undefined4 uStack_a8;
  int local_a0;
  char *local_9c;
  int local_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int local_80;
  int local_7c;
  int iStack_78;
  int local_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *local_40;
  char *local_3c;
  int *local_38;
  undefined1 *local_34;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  
  iVar10 = param_2[4];
  if (iVar10 < 0) {
    local_70 = -0x80000000;
    if (iVar10 != -0x7ffffff9) {
      local_80 = *param_2;
      local_7c = param_2[1];
      iStack_78 = param_2[2];
      local_74 = param_2[3];
      local_6c = param_2[5];
      iStack_68 = param_2[6];
      iStack_64 = param_2[7];
      local_60 = param_2[8];
      iStack_5c = param_2[9];
      iStack_58 = param_2[10];
      iStack_54 = param_2[0xb];
      local_70 = iVar10;
    }
    local_104 = FUN_00700f8c;
    local_108 = &local_80;
    local_110 = &local_a0;
    local_98 = 0xc;
    local_9c = "PoolConfigIn";
    local_a0 = -0x80000000;
    local_10c = &LAB_012b97d8;
    FUN_00664898(&local_e0,&DAT_0059054b,&local_110);
    if (local_a0 != -0x80000000) {
      FUN_019bb7e0(local_a0,local_9c);
    }
    param_1[5] = local_e0;
    param_1[6] = local_dc;
    param_1[7] = local_d8;
    param_1[1] = 0;
    FUN_00ba8128(&local_80);
    *param_1 = 0x80000000;
    return;
  }
  local_110 = (int *)*param_2;
  local_10c = (undefined1 *)param_2[1];
  local_108 = (int *)param_2[2];
  local_104 = (code *)param_2[3];
  iStack_100 = param_2[4];
  iStack_fc = param_2[5];
  local_f8 = param_2[6];
  iStack_f4 = param_2[7];
  iStack_f0 = param_2[8];
  iStack_ec = param_2[9];
  iStack_e8 = param_2[10];
  iStack_e4 = param_2[0xb];
  uVar8 = FUN_007017a8(&local_110,"enabled",7);
  FUN_006c1c88(&local_80,uVar8);
  FUN_00abd2cc(&local_a0,&local_80);
  pcVar1 = local_9c;
  if (local_a0 == 2) {
LAB_00920e68:
    uVar8 = FUN_007017a8(&local_110,"url",3);
    FUN_006c1c88(&local_80,uVar8);
    FUN_006c8594(&local_a0,&local_80);
    if (local_a0 == 2) {
      puVar9 = (undefined4 *)((uint)&local_a0 | 4);
      puVar11 = (undefined4 *)((uint)&local_e0 | 4);
      uVar8 = puVar9[1];
      uVar12 = puVar9[2];
      *puVar11 = *puVar9;
      puVar11[1] = uVar8;
      puVar11[2] = uVar12;
    }
    else {
      local_80 = local_a0;
      local_7c = (int)local_9c;
      iStack_78 = local_98;
      local_74 = local_94;
      local_70 = iStack_90;
      local_6c = iStack_8c;
      iStack_68 = iStack_88;
      FUN_00a1f330(&local_e0,&local_80);
      if (local_e0 != (int *)0x2) {
        param_1[5] = local_d0;
        param_1[6] = uStack_cc;
        param_1[7] = uStack_c8;
        *param_1 = 0x80000000;
        param_1[1] = local_e0;
        param_1[2] = local_dc;
        param_1[3] = local_d8;
        param_1[4] = local_d4;
        goto LAB_0092120c;
      }
    }
    puVar6 = local_d4;
    ppiVar4 = local_d8;
    puVar2 = local_dc;
    uVar8 = FUN_007017a8(&local_110,"user--",4);
    FUN_006c1c88(&local_80,uVar8);
    FUN_006c8594(&local_a0,&local_80);
    if (local_a0 == 2) {
      puVar9 = (undefined4 *)((uint)&local_a0 | 4);
      puVar11 = (undefined4 *)((uint)&local_e0 | 4);
      uVar8 = puVar9[1];
      uVar12 = puVar9[2];
      *puVar11 = *puVar9;
      puVar11[1] = uVar8;
      puVar11[2] = uVar12;
LAB_00920f88:
      puVar7 = local_d4;
      ppiVar5 = local_d8;
      puVar3 = local_dc;
      uVar8 = FUN_007017a8(&local_110,&DAT_00571120,8);
      FUN_006c1c88(&local_80,uVar8);
      FUN_00abd194(&local_a0,&local_80);
      if (local_a0 == 2) {
        puVar9 = (undefined4 *)((uint)&local_a0 | 4);
        local_50 = *puVar9;
        uStack_4c = puVar9[1];
        uStack_48 = puVar9[2];
      }
      else {
        local_80 = local_a0;
        local_7c = (int)local_9c;
        iStack_78 = local_98;
        local_74 = local_94;
        local_70 = iStack_90;
        local_6c = iStack_8c;
        iStack_68 = iStack_88;
        local_3c = "PoolConfigIn";
        local_40 = (int *)&DAT_80000000;
        local_d8 = &local_40;
        local_e0 = &local_70;
        local_38 = (int *)&DAT_0000000c;
        local_d4 = &LAB_012b97d8;
        local_dc = &LAB_00632348;
        FUN_00664898(&local_30,&DAT_005bd155,&local_e0);
        if (local_40 != (int *)&DAT_80000000) {
          FUN_019bb7e0(local_40,local_3c);
        }
        iVar10 = local_80;
        local_b0 = local_30;
        pcStack_ac = local_2c;
        uStack_a8 = local_28;
        puVar9 = (undefined4 *)((uint)&local_80 | 4);
        local_50 = *puVar9;
        uStack_4c = puVar9[1];
        uStack_48 = puVar9[2];
        FUN_019bb7e0(local_70,local_6c);
        if (iVar10 != 2) {
          local_c0 = local_50;
          uStack_bc = uStack_4c;
          uStack_b8 = uStack_48;
          param_1[5] = local_b0;
          param_1[6] = pcStack_ac;
          param_1[7] = uStack_a8;
          param_1[2] = local_50;
          param_1[3] = uStack_4c;
          param_1[4] = uStack_48;
          *param_1 = 0x80000000;
          param_1[1] = iVar10;
          FUN_019bb7e0(puVar3,ppiVar5);
          goto LAB_00921200;
        }
      }
      local_c0 = local_50;
      uStack_bc = uStack_4c;
      uStack_b8 = uStack_48;
      param_1[6] = local_50;
      param_1[7] = uStack_4c;
      param_1[8] = uStack_48;
      *(char *)(param_1 + 9) = (char)pcVar1;
      *param_1 = puVar2;
      param_1[1] = ppiVar4;
      param_1[2] = puVar6;
      param_1[3] = puVar3;
      param_1[4] = ppiVar5;
      param_1[5] = puVar7;
      FUN_006c1408(&local_110);
      if (param_2[4] == -0x7ffffff9) {
        return;
      }
      if (-1 < param_2[4]) {
        return;
      }
      goto LAB_00921228;
    }
    local_80 = local_a0;
    local_7c = (int)local_9c;
    iStack_78 = local_98;
    local_74 = local_94;
    local_70 = iStack_90;
    local_6c = iStack_8c;
    iStack_68 = iStack_88;
    FUN_00a1f330(&local_e0,&local_80);
    if (local_e0 == (int *)0x2) goto LAB_00920f88;
    param_1[5] = local_d0;
    param_1[6] = uStack_cc;
    param_1[7] = uStack_c8;
    *param_1 = 0x80000000;
    param_1[1] = local_e0;
    param_1[2] = local_dc;
    param_1[3] = local_d8;
    param_1[4] = local_d4;
LAB_00921200:
    FUN_019bb7e0(puVar2,ppiVar4);
  }
  else {
    local_80 = local_a0;
    local_7c = (int)local_9c;
    iStack_78 = local_98;
    local_74 = local_94;
    local_70 = iStack_90;
    local_6c = iStack_8c;
    iStack_68 = iStack_88;
    local_28 = 0xc;
    local_30 = -0x80000000;
    local_38 = &local_30;
    local_40 = &local_70;
    local_2c = "PoolConfigIn";
    local_34 = &LAB_012b97d8;
    local_3c = &LAB_00632348;
    FUN_00664898(&local_50,&DAT_005bd155,&local_40);
    if (local_30 != -0x80000000) {
      FUN_019bb7e0(local_30,local_2c);
    }
    FUN_01bed4e2((int)&local_d8 + 3,&local_50,0xc);
    pcVar1 = (char *)local_7c;
    iVar10 = local_80;
    FUN_01bed4e2(&local_e0,(uint)&local_80 | 5,0xb);
    FUN_019bb7e0(local_70,local_6c);
    if (iVar10 == 2) goto LAB_00920e68;
    FUN_01bed4e2((int)param_1 + 9,&local_e0,0x17);
    *(char *)(param_1 + 2) = (char)pcVar1;
    *param_1 = 0x80000000;
    param_1[1] = iVar10;
  }
LAB_0092120c:
  FUN_006c1408(&local_110);
  if (param_2[4] == 0x80000007) {
    return;
  }
  if ((uint)param_2[4] < 0x80000000) {
    return;
  }
LAB_00921228:
  FUN_00db19c4(param_2);
  return;
}

