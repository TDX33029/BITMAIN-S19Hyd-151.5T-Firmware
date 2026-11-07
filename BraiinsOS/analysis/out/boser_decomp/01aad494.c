// FUN_01aad494 @ 01aad494 size=764 calls_out=5 calls_in=0
// strings: 

void FUN_01aad494(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined *local_dc;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  undefined *local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined1 local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94 [5];
  int **local_80;
  int local_7c;
  int *local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int *local_64;
  undefined1 *local_60;
  int local_5c;
  int *local_58;
  undefined *local_54;
  int local_50;
  int *local_4c;
  undefined *local_48;
  int local_44;
  int *local_40;
  undefined *local_3c;
  int local_38;
  int *local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  
  iVar1 = FUN_01aad2e8(param_1,param_2 + 8);
  iVar5 = DAT_01d51af4;
  if (iVar1 != 0) {
    DataMemoryBarrier(0xb);
    iVar10 = param_2[8];
    FUN_01aad7c0(&local_68,iVar10);
    local_d8 = 10;
    local_dc = &DAT_005314e5;
    local_e0 = 5 - iVar10;
    iVar2 = param_2[4];
    iVar1 = 0;
    if (param_2[2] != 2) {
      iVar1 = param_2[3];
    }
    iVar8 = param_2[9];
    iVar9 = param_2[10];
    iVar6 = param_2[7];
    iVar14 = 0;
    if (param_2[5] != 2) {
      iVar14 = param_2[6];
    }
    local_ac = 1;
    local_c0 = local_64;
    local_c4 = local_68;
    local_c8 = 5;
    iVar11 = param_2[1];
    iVar13 = *param_2;
    local_cc = &DAT_01d2e8d4;
    puVar12 = (undefined4 *)&UNK_01d2ee94;
    if (iVar5 == 2) {
      puVar12 = &DAT_01d50f7c;
    }
    uVar3 = iVar5 == 2 & DAT_01d50f7c;
    puVar7 = DAT_01d50f84;
    if (uVar3 == 1) {
      iVar4 = puVar12[1] + (*(int *)(DAT_01d50f84 + 8) - 1U & 0xfffffff8) + 8;
    }
    else {
      iVar4 = puVar12[1];
      if (iVar5 != 2) {
        puVar7 = &DAT_01d2e6fc;
      }
    }
    local_e8 = iVar13;
    local_e4 = iVar11;
    local_d4 = iVar8;
    local_d0 = iVar9;
    local_bc = iVar1;
    local_b8 = iVar2;
    local_b4 = iVar14;
    local_b0 = iVar6;
    iVar4 = (**(code **)(puVar7 + 0x14))(iVar4,&local_e8);
    if (iVar4 != 0) {
      FUN_01aad7c0(&local_68,iVar10);
      local_30 = &DAT_01d2ea5c;
      local_34 = (int *)0x0;
      if (iVar13 != 0) {
        local_34 = local_94;
      }
      local_38 = (int)local_60 + 0x50;
      local_40 = &local_a0;
      if (iVar14 == 0) {
        local_40 = (int *)0x0;
      }
      local_44 = (int)local_60 + 0x3c;
      local_4c = &local_a8;
      if (iVar1 == 0) {
        local_4c = (int *)0x0;
      }
      local_3c = &DAT_01d2f070;
      local_48 = &DAT_01d2f070;
      local_54 = &DAT_01d2f070;
      local_58 = &local_2c;
      local_50 = (int)local_60 + 0x28;
      iVar10 = (int)local_60 + 0x14;
      local_68 = (int)local_60;
      local_6c = local_5c + 0x1c;
      local_7c = local_5c;
      local_94[1] = 1;
      local_94[2] = 0;
      local_70 = 5;
      local_74 = &local_68;
      local_64 = param_2 + 0xb;
      local_80 = &local_74;
      local_60 = &DAT_01d2ea4c;
      puVar7 = DAT_01d50f84;
      if (uVar3 == 0) {
        iVar4 = puVar12[1];
        if (iVar5 != 2) {
          puVar7 = &DAT_01d2e6fc;
        }
      }
      else {
        iVar4 = puVar12[1] + (*(int *)(DAT_01d50f84 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_a8 = iVar1;
      local_a4 = iVar2;
      local_a0 = iVar14;
      local_9c = iVar6;
      local_98 = iVar13;
      local_94[0] = iVar11;
      local_5c = iVar10;
      local_2c = iVar8;
      local_28 = iVar9;
      iVar5 = (**(code **)(puVar7 + 0x28))(iVar4,local_94 + 1);
      if (iVar5 != 0) {
        (**(code **)(puVar7 + 0x2c))(iVar4,local_94 + 1);
      }
    }
  }
  return;
}

