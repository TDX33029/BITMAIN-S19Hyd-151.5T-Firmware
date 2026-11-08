// FUN_01705b4c @ 01705b4c size=1264 calls_out=12 calls_in=2
// strings: 

uint FUN_01705b4c(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  int *piVar16;
  int *piVar17;
  int local_1bc;
  uint local_1a8;
  int local_1a4;
  uint *local_1a0;
  undefined1 *local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  uint *local_170;
  undefined1 *puStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint *local_140;
  undefined1 *puStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int *local_e0;
  uint local_dc;
  undefined **local_d8;
  int *local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int *local_78;
  uint *local_74;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined1 uStack_25;
  
  puVar5 = (undefined4 *)((uint)&local_e0 | 0x10);
  do {
    do {
      local_1a8 = DAT_01d50470;
      local_1a4 = DAT_01d50474;
      uVar11 = DAT_01d50470 + 1;
      iVar12 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar11;
    DAT_01d50474 = iVar12;
  } while (bVar2 && bVar3);
  local_198 = *param_1;
  uStack_194 = param_1[1];
  uStack_190 = param_1[2];
  uStack_18c = param_1[3];
  local_188 = param_1[4];
  local_184 = param_1[5];
  uStack_180 = param_1[6];
  uStack_17c = param_1[7];
  uStack_178 = param_1[8];
  uStack_174 = param_1[9];
  iVar12 = thunk_FUN_01bee35a();
  puVar15 = (uint *)(iVar12 + 0x20);
  local_19c = &uStack_25;
  local_1a0 = &local_1a8;
  if (*(char *)(iVar12 + 0x58) != '\x01') {
    if (*(char *)(iVar12 + 0x58) == '\x02') {
      FUN_01705710(&local_198);
      uVar4 = 1;
      goto LAB_01705c04;
    }
    FUN_019a2bcc(puVar15,&LAB_019efb68);
    *(undefined1 *)(iVar12 + 0x58) = 1;
  }
  local_170 = local_1a0;
  puStack_16c = local_19c;
  uStack_168 = local_198;
  uStack_164 = uStack_194;
  uStack_160 = uStack_190;
  uStack_15c = uStack_18c;
  local_158 = local_188;
  uStack_154 = local_184;
  uStack_150 = uStack_180;
  uStack_14c = uStack_17c;
  uStack_148 = uStack_178;
  uStack_144 = uStack_174;
  if (0x7ffffffe < *puVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar15 = *puVar15 + 1;
  local_140 = local_1a0;
  puStack_13c = local_19c;
  uStack_138 = local_198;
  uStack_134 = uStack_194;
  uStack_130 = uStack_190;
  uStack_12c = uStack_18c;
  local_128 = local_188;
  uStack_124 = local_184;
  uStack_120 = uStack_180;
  uStack_11c = uStack_17c;
  uStack_118 = uStack_178;
  uStack_114 = uStack_174;
  if (*(uint *)(iVar12 + 0x24) == 2) {
    FUN_01705710(&uStack_138);
    *puVar15 = *puVar15 - 1;
    uVar4 = 0;
LAB_01705c04:
    local_e0 = (int *)CONCAT31(local_e0._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_e0,param_2);
  }
  piVar17 = (int *)*local_1a0;
  uVar11 = local_1a0[1];
  if ((*(uint *)(iVar12 + 0x24) & 1) == 0) {
    piVar16 = *(int **)(iVar12 + 0x28);
    do {
      iVar6 = *piVar16;
      bVar2 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar2);
    *piVar16 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_01706020;
    local_78 = (int *)piVar16[0x82];
    local_74 = puVar15;
    if (local_78 != (int *)0x0) {
      do {
        iVar6 = *local_78;
        bVar2 = (bool)hasExclusiveAccess(local_78);
      } while (!bVar2);
      *local_78 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_01706020;
      local_74 = (uint *)piVar16[0x83];
    }
    puVar13 = (undefined4 *)((uint)&local_58 | 4);
    uVar7 = param_1[1];
    uVar8 = param_1[2];
    uVar9 = param_1[3];
    uVar10 = param_1[4];
    *puVar13 = *param_1;
    puVar13[1] = uVar7;
    puVar13[2] = uVar8;
    puVar13[3] = uVar9;
    puVar13[4] = uVar10;
    uVar7 = param_1[6];
    uVar8 = param_1[7];
    uVar9 = param_1[8];
    uVar10 = param_1[9];
    puVar13[5] = param_1[5];
    puVar13[6] = uVar7;
    puVar13[7] = uVar8;
    puVar13[8] = uVar9;
    puVar13[9] = uVar10;
    local_b8 = 0;
    local_b4 = local_58;
    uStack_b0 = uStack_54;
    uStack_ac = uStack_50;
    uStack_a8 = uStack_4c;
    uStack_a4 = uStack_48;
    local_a0 = local_44;
    uStack_9c = uStack_40;
    uStack_98 = uStack_3c;
    uStack_94 = uStack_38;
    uStack_90 = uStack_34;
    uStack_8c = uStack_30;
    puVar5[4] = piVar17;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[5] = uVar11;
    local_d8 = &PTR_FUN_01d198b8;
    local_dc = 0;
    local_e0 = (int *)0xcc;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_2c = 0;
    local_c8 = piVar16;
    iVar6 = FUN_01be5878(&local_2c,0x20,0x80);
    uVar14 = local_2c;
    if ((iVar6 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x80);
    }
    FUN_01bed4e2(local_2c,&local_e0,0x80);
    iVar6 = FUN_01765024(piVar16 + 0x40,uVar14,uVar14);
    local_e0 = piVar17;
    local_dc = uVar11;
    if (piVar16[0x80] != 0) {
      (**(code **)(piVar16[0x81] + 0x14))
                (piVar16[0x80] + (*(int *)(piVar16[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_e0);
    }
    if (iVar6 != 0) {
      FUN_019dc904(*(undefined4 *)(iVar12 + 0x28),iVar6);
    }
  }
  else {
    piVar16 = *(int **)(iVar12 + 0x28);
    do {
      iVar12 = *piVar16;
      bVar2 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar2);
    *piVar16 = iVar12 + 1;
    if (iVar12 < 0) {
LAB_01706020:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1706020);
      (*pcVar1)();
    }
    local_78 = (int *)piVar16[0x50];
    if (local_78 != (int *)0x0) {
      do {
        iVar12 = *local_78;
        bVar2 = (bool)hasExclusiveAccess(local_78);
      } while (!bVar2);
      *local_78 = iVar12 + 1;
      if (iVar12 < 0) goto LAB_01706020;
      local_1bc = piVar16[0x51];
    }
    puVar13 = (undefined4 *)((uint)&local_110 | 4);
    uVar7 = param_1[1];
    uVar8 = param_1[2];
    uVar9 = param_1[3];
    uVar10 = param_1[4];
    *puVar13 = *param_1;
    puVar13[1] = uVar7;
    puVar13[2] = uVar8;
    puVar13[3] = uVar9;
    puVar13[4] = uVar10;
    uVar7 = param_1[6];
    uVar8 = param_1[7];
    uVar9 = param_1[8];
    uVar10 = param_1[9];
    puVar13[5] = param_1[5];
    puVar13[6] = uVar7;
    puVar13[7] = uVar8;
    puVar13[8] = uVar9;
    puVar13[9] = uVar10;
    local_b8 = 0;
    local_b4 = local_110;
    uStack_b0 = uStack_10c;
    uStack_ac = uStack_108;
    uStack_a8 = uStack_104;
    uStack_a4 = uStack_100;
    local_a0 = local_fc;
    uStack_9c = uStack_f8;
    uStack_98 = uStack_f4;
    uStack_94 = uStack_f0;
    uStack_90 = uStack_ec;
    uStack_8c = uStack_e8;
    puVar5[4] = piVar17;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[5] = uVar11;
    local_dc = 0;
    local_d8 = &PTR_LAB_01d19930;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_2c = 0;
    local_e0 = (int *)0xcc;
    local_74 = (uint *)local_1bc;
    local_c8 = piVar16;
    iVar12 = FUN_01be5878(&local_2c,0x20,0x80);
    uVar14 = local_2c;
    if ((iVar12 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x80);
    }
    FUN_01bed4e2(local_2c,&local_e0,0x80);
    iVar12 = FUN_01764da0(piVar16 + 0x14,uVar14,uVar14);
    if (piVar16[0x4e] != 0) {
      local_e0 = piVar17;
      local_dc = uVar11;
      (**(code **)(piVar16[0x4f] + 0x14))
                (piVar16[0x4e] + (*(int *)(piVar16[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_e0);
    }
    if (iVar12 != 0) {
      local_2c = local_2c & 0xffffff00;
      local_e0 = piVar16 + 2;
      local_dc = iVar12;
      local_d8 = (undefined **)&local_2c;
      FUN_019ee860(&local_e0);
    }
  }
  *puVar15 = *puVar15 - 1;
  return uVar14;
}

