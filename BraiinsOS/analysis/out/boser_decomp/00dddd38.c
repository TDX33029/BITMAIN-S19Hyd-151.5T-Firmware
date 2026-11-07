// FUN_00dddd38 @ 00dddd38 size=968 calls_out=3 calls_in=7
// strings: 

void FUN_00dddd38(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint local_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint local_e4;
  byte local_e0;
  uint local_df;
  undefined2 local_db;
  undefined1 local_d9;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint local_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 5)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22478);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22478);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 4)) {
    case 0:
      uVar4 = param_2[2];
      goto LAB_00dddea8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22468);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22468);
    case 3:
      uVar4 = param_2[3];
      goto LAB_00dddeac;
    }
  }
  puVar2 = (uint *)*param_2;
  param_2[1] = puVar2;
  uVar5 = *puVar2;
  uVar3 = puVar2[1];
  *puVar2 = 3;
  puVar2[1] = 0;
  if (uVar5 == 3 && uVar3 == 0) {
LAB_00dde03c:
    do {
      *(undefined1 *)(param_2 + 4) = 0;
      uVar4 = param_2[1];
      param_2[2] = uVar4;
LAB_00dddea8:
      param_2[3] = uVar4;
LAB_00dddeac:
      puVar6 = param_2 + 4;
      FUN_00fd8db8(&local_e8,uVar4,param_3);
      if (local_e8 == 5 && local_e4 == 0) {
        *(undefined1 *)puVar6 = 3;
LAB_00dde05c:
        *param_1 = 4;
        param_1[1] = 0;
        uVar1 = 3;
        goto LAB_00ddde9c;
      }
      uVar5 = (uint)local_e0;
      local_60 = local_d8;
      uStack_5c = uStack_d4;
      uStack_58 = uStack_d0;
      uStack_54 = uStack_cc;
      local_50 = local_c8;
      uStack_4c = uStack_c4;
      uStack_48 = uStack_c0;
      uStack_44 = uStack_bc;
      uStack_40 = uStack_b8;
      local_3c = local_b4;
      uStack_38 = uStack_b0;
      uStack_34 = uStack_ac;
      uStack_30 = uStack_a8;
      uStack_2c = uStack_a4;
      local_80 = local_a0;
      uStack_7c = uStack_9c;
      uStack_78 = uStack_98;
      uStack_74 = uStack_94;
      local_70 = local_90;
      uStack_6c = uStack_8c;
      uStack_68 = uStack_88;
      uStack_64 = uStack_84;
      if ((local_e8 & 7) == 3) {
        *(undefined1 *)puVar6 = 1;
        goto LAB_00dde03c;
      }
      if (local_e8 == 4) {
        *(undefined1 *)puVar6 = 1;
        break;
      }
      *(undefined1 *)puVar6 = 1;
      if (local_e8 == 4 && local_e4 == 0) goto LAB_00dde05c;
      if (local_e8 != 3 || local_e4 != 0) {
        uVar7 = (uint)CONCAT12(local_d9,local_db);
        local_120 = local_d8;
        uStack_11c = uStack_d4;
        uStack_118 = uStack_d0;
        uStack_114 = uStack_cc;
        local_110 = local_c8;
        uStack_10c = uStack_c4;
        uStack_108 = uStack_c0;
        uStack_104 = uStack_bc;
        uStack_100 = uStack_b8;
        local_fc = local_b4;
        uStack_f8 = uStack_b0;
        uStack_f4 = uStack_ac;
        uStack_f0 = uStack_a8;
        uStack_ec = uStack_a4;
        local_140 = local_a0;
        uStack_13c = uStack_9c;
        uStack_138 = uStack_98;
        uStack_134 = uStack_94;
        local_130 = local_90;
        uStack_12c = uStack_8c;
        uStack_128 = uStack_88;
        uStack_124 = uStack_84;
        goto LAB_00ddde3c;
      }
    } while ((local_e0 & 1) != 0);
    puVar2 = (uint *)param_2[1];
    local_e8 = 3;
    local_e4 = 0;
    uVar5 = *puVar2;
    uVar3 = puVar2[1];
    *puVar2 = 3;
    puVar2[1] = 0;
    if (uVar5 == 3 && uVar3 == 0) {
      uVar5 = 3;
      local_df = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = uVar3 >> 8;
      local_120 = puVar2[2];
      uStack_11c = puVar2[3];
      uStack_118 = puVar2[4];
      uStack_114 = puVar2[5];
      local_110 = puVar2[6];
      uStack_10c = puVar2[7];
      uStack_108 = puVar2[8];
      uStack_104 = puVar2[9];
      uStack_100 = puVar2[10];
      local_fc = puVar2[0xb];
      uStack_f8 = puVar2[0xc];
      uStack_f4 = puVar2[0xd];
      uStack_f0 = puVar2[0xe];
      uStack_ec = puVar2[0xf];
      local_df = uVar5 >> 8 | uVar3 << 0x18;
    }
  }
  else {
    local_120 = puVar2[2];
    uStack_11c = puVar2[3];
    uStack_118 = puVar2[4];
    uStack_114 = puVar2[5];
    local_110 = puVar2[6];
    uStack_10c = puVar2[7];
    uStack_108 = puVar2[8];
    uStack_104 = puVar2[9];
    uStack_100 = puVar2[10];
    local_fc = puVar2[0xb];
    uStack_f8 = puVar2[0xc];
    uStack_f4 = puVar2[0xd];
    uStack_f0 = puVar2[0xe];
    uStack_ec = puVar2[0xf];
    uVar7 = uVar3 >> 8;
    local_df = uVar5 >> 8 | uVar3 << 0x18;
    local_e4 = 0;
    local_e8 = 3;
  }
LAB_00ddde3c:
  param_1[2] = uVar5 & 0xff | local_df << 8;
  *param_1 = local_e8;
  param_1[1] = local_e4;
  param_1[3] = uVar7 << 8 | local_df >> 0x18;
  param_1[4] = local_120;
  param_1[5] = uStack_11c;
  param_1[6] = uStack_118;
  param_1[7] = uStack_114;
  param_1[8] = local_110;
  param_1[9] = uStack_10c;
  param_1[10] = uStack_108;
  param_1[0xb] = uStack_104;
  param_1[0xc] = uStack_100;
  param_1[0xd] = local_fc;
  param_1[0xe] = uStack_f8;
  param_1[0xf] = uStack_f4;
  param_1[0x10] = uStack_f0;
  param_1[0x11] = uStack_ec;
  param_1[0x12] = local_140;
  param_1[0x13] = uStack_13c;
  param_1[0x14] = uStack_138;
  param_1[0x15] = uStack_134;
  param_1[0x16] = local_130;
  param_1[0x17] = uStack_12c;
  param_1[0x18] = uStack_128;
  param_1[0x19] = uStack_124;
  uVar1 = 1;
LAB_00ddde9c:
  *(undefined1 *)(param_2 + 5) = uVar1;
  return;
}

