// FUN_01641e84 @ 01641e84 size=2164 calls_out=11 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01641e84(uint *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint extraout_r2;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint unaff_r11;
  uint *puVar13;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  uint extraout_r12_03;
  uint extraout_r12_04;
  uint extraout_r12_05;
  uint extraout_r12_06;
  uint extraout_r12_07;
  uint extraout_r12_08;
  uint extraout_r12_09;
  uint extraout_r12_10;
  uint extraout_r12_11;
  uint extraout_r12_12;
  uint extraout_r12_13;
  uint extraout_r12_14;
  uint extraout_r12_15;
  uint extraout_r12_16;
  uint extraout_r12_17;
  uint extraout_r12_18;
  uint extraout_r12_19;
  uint extraout_r12_20;
  uint extraout_r12_21;
  uint extraout_r12_22;
  undefined1 uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_90;
  uint local_8c;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (*(int *)(param_2 + 0x20) == 3) {
    FUN_016dffb2(*(undefined4 *)(param_2 + 0x24));
  }
  *(undefined4 *)(param_2 + 0x20) = 2;
  if (*(int *)(param_2 + 0x28) == 3) {
    FUN_016dffb2(*(undefined4 *)(param_2 + 0x2c));
  }
  *(undefined4 *)(param_2 + 0x28) = 2;
  uVar15 = 0x1641ee0;
  uVar14 = 0xe0;
  FUN_015fcb20(&local_50,param_2,0,1);
  uVar10 = local_38;
  uVar8 = local_3c;
  uVar11 = local_40;
  uVar5 = local_44;
  uVar3 = local_48;
  uVar4 = local_4c;
  uVar1 = local_50;
  if (local_50 == 2) {
    local_114 = local_4c;
    local_120 = 3;
    uVar12 = local_48;
    local_4c = extraout_r12;
    goto LAB_016425e0;
  }
  local_114 = 2;
  local_f8 = local_38;
  local_fc = local_3c;
  local_104 = local_44;
  local_100 = 0xffffffff;
  local_118 = 2;
  if (local_40 == 0xffffffff) {
    local_120 = 2;
    local_11c = local_4c;
    local_64 = local_44;
    uVar11 = extraout_r12;
LAB_01641fbc:
    uVar12 = local_48;
    local_fc = 0xffffffff;
    uVar7 = local_114;
    local_7c = local_11c;
    local_90 = local_120;
    local_8c = local_114;
    local_84 = local_11c;
    if (uVar8 != 0xffffffff) {
      uVar15 = FUN_016d2d0c(uVar8,3);
      if ((uVar15 == 0xffffffff) || (iVar6 = FUN_016d2d0c(uVar8,4,uVar15 | 0x800), iVar6 == -1)) {
        puVar13 = (uint *)FUN_016d2bc8();
        uVar11 = *puVar13;
        uVar14 = 0x5c;
        FUN_016dffb2(uVar8);
        uVar8 = 0;
        uVar7 = extraout_r12_03;
      }
      else {
        uVar15 = 0x164201c;
        uVar14 = 0x1c;
        FUN_01641448(&local_50,uVar8);
        local_118 = local_50;
        uVar11 = local_48;
        uVar8 = local_4c;
        uVar7 = extraout_r12_02;
        if (local_50 != 2) {
          uVar7 = local_48;
          local_7c = local_4c;
          local_64 = local_44;
          uVar11 = extraout_r12_02;
          goto LAB_0164209c;
        }
      }
      local_4c = uVar7;
      local_114 = uVar8;
      uVar12 = uVar11;
      if (local_120 != 2) {
        FUN_00a86e98(&local_90);
        if (local_84 != 0xffffffff) {
          FUN_016dffb2();
        }
        uVar14 = 0x8c;
        FUN_00f02ff8(&local_90);
        local_4c = extraout_r12_04;
      }
      goto LAB_01642590;
    }
LAB_0164209c:
    uVar8 = 0xffffffff;
    local_80 = local_118;
    local_f8 = 0xffffffff;
    local_78 = uVar7;
    local_74 = local_64;
    if (uVar10 != 0xffffffff) {
      uVar15 = FUN_016d2d0c(uVar10,3);
      if ((uVar15 == 0xffffffff) || (iVar6 = FUN_016d2d0c(uVar10,4,uVar15 | 0x800), iVar6 == -1)) {
        puVar13 = (uint *)FUN_016d2bc8();
        uVar12 = *puVar13;
        uVar14 = 0x30;
        FUN_016dffb2(uVar10);
        local_114 = 0;
        local_4c = extraout_r12_06;
      }
      else {
        uVar15 = 0;
        uVar14 = 0;
        FUN_01641448(&local_50,uVar10);
        if (local_50 != 2) {
          uVar8 = local_48;
          local_64 = local_44;
          local_124 = local_50;
          uVar11 = extraout_r12_05;
          goto LAB_01642190;
        }
        local_114 = local_4c;
        uVar12 = local_48;
        local_4c = extraout_r12_05;
      }
      bVar2 = true;
      if (local_118 != 2) {
        FUN_00a86e98(&local_80);
        if (local_74 != 0xffffffff) {
          FUN_016dffb2();
        }
        bVar2 = true;
        uVar14 = 0x80;
        FUN_00f02ff8(&local_80);
        local_4c = extraout_r12_07;
      }
LAB_0164255c:
      if (local_120 != 2) {
        FUN_00a86e98(&local_90);
        if (local_84 != 0xffffffff) {
          FUN_016dffb2();
        }
        uVar14 = 0x88;
        FUN_00f02ff8(&local_90);
        local_4c = extraout_r12_18;
      }
      if (bVar2) goto LAB_01642590;
      goto LAB_016425d0;
    }
    local_124 = 2;
    local_4c = local_118;
LAB_01642190:
    puVar13 = &local_7c;
    uVar10 = 4;
    local_40 = 0xffffffff;
    local_3c = 0xffffffff;
    local_38 = 0xffffffff;
    local_70 = local_124;
    local_6c = local_4c;
    local_68 = uVar8;
    local_50 = uVar1;
    local_48 = uVar3;
    local_44 = uVar5;
    if (DAT_018dd937 != '\0') {
LAB_016421ec:
      local_4c = uVar4;
      local_128 = local_38;
      uVar5 = local_50;
      uVar4 = local_4c;
      local_f0 = local_48;
      uVar1 = local_134;
      uVar3 = local_4c;
      local_ec = local_44;
      local_e8 = local_40;
      local_130 = local_3c;
joined_r0x01642214:
      local_134 = uVar5;
      local_4c = uVar11;
      local_12c = uVar10 - 4;
      local_5c = uVar4;
      local_58 = local_f0;
      if (local_12c == 0) {
        uVar14 = 0x50;
        local_4c = uVar3;
        FUN_016383ec(&local_50,0x11,&DAT_018ac9e8);
        if (local_50 != 1) {
          local_d0 = local_7c;
          local_cc = local_78;
          local_c8 = local_74;
          local_e0 = local_6c;
          local_dc = local_68;
          local_d8 = local_64;
          local_13c = 3;
          local_138 = uVar4;
          goto LAB_01642354;
        }
        uVar12 = local_48;
        local_114 = local_4c;
        local_f8 = local_128;
        local_104 = local_ec;
        local_100 = local_e8;
        local_fc = local_130;
        if (local_124 == 2) {
          local_4c = extraout_r12_08;
        }
        else {
          FUN_00a86e98(&local_70);
          if (local_64 != 0xffffffff) {
            FUN_016dffb2();
          }
          uVar14 = 0x2c;
          FUN_00f02ff8(&local_70);
          local_4c = extraout_r12_11;
        }
      }
      else {
        uVar14 = (undefined1)uVar15;
        if (local_ec != 0xffffffff) {
          uVar14 = 0x9c;
          FUN_016dffb2(local_ec);
          local_4c = extraout_r12_12;
        }
        if (local_e8 != 0xffffffff) {
          uVar14 = 0xb0;
          FUN_016dffb2(local_e8);
          local_4c = extraout_r12_13;
        }
        if (local_130 != 0xffffffff) {
          uVar14 = 0xc0;
          FUN_016dffb2(local_130);
          local_4c = extraout_r12_14;
        }
        if (local_128 != 0xffffffff) {
          uVar14 = 0xd4;
          FUN_016dffb2();
          local_4c = extraout_r12_15;
        }
        local_114 = uVar10 | (int)puVar13 << 8;
        uVar12 = (uint)puVar13 >> 0x18 | uVar1 << 8;
        if (local_124 != 2) {
          FUN_00a86e98(&local_70);
          if (local_64 != 0xffffffff) {
            FUN_016dffb2();
          }
          uVar14 = 0x1c;
          FUN_00f02ff8(&local_70);
          local_4c = extraout_r12_16;
        }
      }
      bVar2 = local_12c == 0;
      local_134 = uVar1;
      if (local_118 != 2) {
        FUN_00a86e98(&local_80);
        if (local_74 != 0xffffffff) {
          FUN_016dffb2();
        }
        uVar14 = 0x5c;
        FUN_00f02ff8(&local_80);
        local_4c = extraout_r12_17;
      }
      goto LAB_0164255c;
    }
    local_4c = uVar4;
    local_12c = FUN_016d6968(0x1b2,uVar3,0x800);
    if (local_12c == 0xffffffff) {
      uVar15 = 0x16423f0;
      piVar9 = (int *)FUN_016d2bc8();
      uVar11 = extraout_r12_10;
      uVar4 = local_4c;
      if (*piVar9 == 0x26) {
        DAT_018dd937 = '\x01';
      }
      goto LAB_016421ec;
    }
    uVar16 = FUN_0164ec90(&DAT_018aca10);
    FUN_0165768c(&local_30,local_12c,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),&DAT_018aca10);
    if (local_30 == 2) {
      uVar15 = 0x16422e0;
      FUN_016dffb2(local_12c);
      puVar13 = (uint *)(local_2c >> 8 | local_28 << 0x18);
      uVar10 = local_2c & 0xff;
      local_134 = local_28 >> 8;
      uVar11 = extraout_r12_09;
      uVar4 = local_4c;
      goto LAB_016421ec;
    }
    if (local_50 == 3) {
      puVar13 = (uint *)(local_4c >> 8 | local_48 << 0x18);
      uVar1 = local_48 >> 8;
      uVar10 = local_4c & 0xff;
      uVar11 = local_38;
      uVar15 = local_3c;
      local_128 = local_28;
      uVar5 = local_44;
      uVar4 = local_40;
      local_f0 = local_3c;
      uVar3 = local_4c;
      local_ec = local_38;
      local_e8 = local_30;
      local_130 = local_2c;
      goto joined_r0x01642214;
    }
    local_138 = local_48;
    local_13c = local_50;
    local_e0 = local_6c;
    local_dc = local_68;
    local_d8 = local_64;
    local_e8 = local_3c;
    local_ec = local_40;
    local_134 = local_4c;
    local_d0 = local_7c;
    local_cc = local_78;
    local_c8 = local_74;
    local_f0 = local_44;
    local_128 = local_30;
    local_130 = local_38;
    local_4c = local_2c;
    local_48 = local_28;
LAB_01642354:
    local_b8 = local_e8;
    uVar14 = *(undefined1 *)(param_2 + 0x7c);
    local_bc = local_ec;
    local_c0 = local_f0;
    if (local_118 != 2) {
      local_b0 = local_d0;
      local_ac = local_cc;
      local_a8 = local_c8;
    }
    local_f8 = local_48;
    if (local_124 == 2) {
      local_124 = 2;
    }
    else {
      local_a0 = local_e0;
      local_9c = local_dc;
      local_98 = local_d8;
    }
  }
  else {
    uVar15 = FUN_016d2d0c(local_40,3);
    if ((uVar15 == 0xffffffff) || (iVar6 = FUN_016d2d0c(uVar11,4,uVar15 | 0x800), iVar6 == -1)) {
      puVar13 = (uint *)FUN_016d2bc8();
      uVar12 = *puVar13;
      uVar14 = 0xa4;
      FUN_016dffb2(uVar11);
      local_114 = 0;
      local_4c = extraout_r12_01;
    }
    else {
      uVar15 = 0x1641f78;
      uVar14 = 0x78;
      FUN_01641448(&local_50,uVar11);
      local_114 = local_4c;
      if (local_50 != 2) {
        local_11c = local_44;
        local_64 = extraout_r2;
        local_120 = local_50;
        uVar11 = extraout_r12_00;
        goto LAB_01641fbc;
      }
      uVar12 = local_48;
      local_4c = extraout_r12_00;
    }
LAB_01642590:
    if (local_104 != 0xffffffff) {
      uVar14 = 0xa0;
      FUN_016dffb2();
      local_4c = extraout_r12_19;
    }
    if (local_100 != 0xffffffff) {
      uVar14 = 0xb0;
      FUN_016dffb2(local_100);
      local_4c = extraout_r12_20;
    }
    if (local_fc != 0xffffffff) {
      uVar14 = 0xc0;
      FUN_016dffb2(local_fc);
      local_4c = extraout_r12_21;
    }
    if (local_f8 != 0xffffffff) {
      uVar14 = 0xd0;
      FUN_016dffb2(local_f8);
      local_4c = extraout_r12_22;
    }
LAB_016425d0:
    local_120 = 3;
    local_130 = local_104;
  }
  unaff_r11 = local_f8;
LAB_016425e0:
  *param_1 = local_120;
  param_1[7] = local_a8;
  param_1[9] = local_a0;
  param_1[8] = local_124;
  param_1[1] = local_114;
  param_1[0xb] = local_98;
  param_1[0xc] = local_13c;
  param_1[10] = local_9c;
  param_1[0xd] = local_134;
  *(undefined1 *)(param_1 + 0x85) = 0;
  param_1[0xf] = local_c0;
  param_1[0x10] = local_bc;
  param_1[0x11] = local_b8;
  param_1[0x12] = local_130;
  param_1[3] = local_11c;
  param_1[0x13] = local_128;
  param_1[4] = local_118;
  param_1[5] = local_b0;
  param_1[6] = local_ac;
  param_1[2] = uVar12;
  param_1[0xe] = local_138;
  *(undefined1 *)(param_1 + 0x17) = uVar14;
  param_1[0x14] = local_4c;
  param_1[0x15] = unaff_r11;
  param_1[0x16] = local_12c;
  return;
}

