// FUN_014435a8 @ 014435a8 size=388 calls_out=6 calls_in=4
// strings: 

void FUN_014435a8(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined *puVar11;
  bool bVar12;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  FUN_01443004(&local_d8);
  FUN_019dea14(&local_88,param_2);
  FUN_019de8ac(&local_68,param_2);
  uVar8 = uStack_4c;
  uVar7 = uStack_50;
  uVar6 = local_54;
  uVar5 = local_58;
  uVar4 = uStack_5c;
  uVar3 = uStack_60;
  uVar2 = uStack_64;
  uVar1 = local_68;
  local_c8 = local_88;
  uStack_c4 = uStack_84;
  uStack_c0 = uStack_80;
  uStack_bc = uStack_7c;
  local_b8 = local_78;
  uStack_b4 = uStack_74;
  uStack_b0 = uStack_70;
  uStack_ac = uStack_6c;
  local_a8 = local_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  local_98 = local_58;
  uStack_94 = local_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  uVar10 = local_88 & 0xffff;
  bVar12 = uVar10 != 2;
  if (bVar12) {
    uVar10 = local_68 & 0xffff;
  }
  if (bVar12 && uVar10 != 2) {
    local_68 = local_88;
    uStack_64 = uStack_84;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    local_58 = local_78;
    local_54 = uStack_74;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    local_48 = uVar1;
    uStack_44 = uVar2;
    local_40 = uVar3;
    uStack_3c = uVar4;
    local_38 = uVar5;
    uStack_34 = uVar6;
    uStack_30 = uVar7;
    uStack_2c = uVar8;
    if (local_d8 == 0) {
      puVar9 = (uint *)thunk_FUN_01be5118(0x40);
      if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x40);
      }
      puVar11 = &DAT_01cf8988;
      *puVar9 = local_68;
      puVar9[1] = uStack_64;
      puVar9[2] = uStack_60;
      puVar9[3] = uStack_5c;
      puVar9[4] = local_58;
      puVar9[5] = local_54;
      puVar9[6] = uStack_50;
      puVar9[7] = uStack_4c;
      puVar9[8] = local_48;
      puVar9[9] = uStack_44;
      puVar9[10] = local_40;
      puVar9[0xb] = uStack_3c;
      puVar9[0xc] = local_38;
      puVar9[0xd] = uStack_34;
      puVar9[0xe] = uStack_30;
      puVar9[0xf] = uStack_2c;
    }
    else {
      puVar9 = (uint *)thunk_FUN_01be5118(0x48);
      if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x48);
      }
      puVar11 = &DAT_01cf8974;
      *puVar9 = local_68;
      puVar9[1] = uStack_64;
      puVar9[2] = uStack_60;
      puVar9[3] = uStack_5c;
      puVar9[4] = local_58;
      puVar9[5] = local_54;
      puVar9[6] = uStack_50;
      puVar9[7] = uStack_4c;
      puVar9[8] = local_48;
      puVar9[9] = uStack_44;
      puVar9[10] = local_40;
      puVar9[0xb] = uStack_3c;
      puVar9[0xc] = local_38;
      puVar9[0xd] = uStack_34;
      puVar9[0xe] = uStack_30;
      puVar9[0xf] = uStack_2c;
      puVar9[0x10] = local_d8;
      puVar9[0x11] = local_d4;
    }
    *param_1 = (uint)puVar9;
    param_1[1] = (uint)puVar11;
    param_1[2] = local_d0;
    param_1[3] = local_cc;
  }
  else {
    *param_1 = local_d8;
    param_1[1] = local_d4;
    param_1[2] = local_d0;
    param_1[3] = local_cc;
  }
  FUN_014437c8(&local_c8);
  return;
}

