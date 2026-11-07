// FUN_010a4f38 @ 010a4f38 size=1212 calls_out=12 calls_in=3
// strings: 

uint FUN_010a4f38(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint local_188;
  int local_184;
  uint *local_180;
  undefined1 *local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  uint *local_158;
  undefined1 *puStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint *local_130;
  undefined1 *puStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
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
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int *local_80;
  undefined4 *local_7c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined1 uStack_25;
  
  puVar16 = (undefined4 *)((uint)&local_e0 | 0x10);
  do {
    do {
      local_188 = DAT_01d50470;
      local_184 = DAT_01d50474;
      uVar12 = DAT_01d50470 + 1;
      iVar14 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar12;
    DAT_01d50474 = iVar14;
  } while (bVar2 && bVar3);
  local_178 = *param_1;
  uStack_174 = param_1[1];
  uStack_170 = param_1[2];
  local_16c = param_1[3];
  local_168 = param_1[4];
  uStack_164 = param_1[5];
  uStack_160 = param_1[6];
  uStack_15c = param_1[7];
  iVar14 = thunk_FUN_01bee35a();
  puVar8 = (uint *)(iVar14 + 0x20);
  puVar17 = &uStack_a0;
  local_17c = &uStack_25;
  local_180 = &local_188;
  if (*(char *)(iVar14 + 0x58) != '\x01') {
    if (*(char *)(iVar14 + 0x58) == '\x02') {
      FUN_010ebed4(&local_178);
      uVar4 = 1;
      goto LAB_010a4fe8;
    }
    puVar17 = (undefined4 *)0x10a5008;
    FUN_019a2bcc(puVar8,&LAB_019efb68);
    *(undefined1 *)(iVar14 + 0x58) = 1;
  }
  local_158 = local_180;
  puStack_154 = local_17c;
  uStack_150 = local_178;
  uStack_14c = uStack_174;
  uStack_148 = uStack_170;
  local_144 = local_16c;
  uStack_140 = local_168;
  uStack_13c = uStack_164;
  uStack_138 = uStack_160;
  uStack_134 = uStack_15c;
  if (0x7ffffffe < *puVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar8 = *puVar8 + 1;
  local_130 = local_180;
  puStack_12c = local_17c;
  uStack_128 = local_178;
  uStack_124 = uStack_174;
  uStack_120 = uStack_170;
  local_11c = local_16c;
  uStack_118 = local_168;
  uStack_114 = uStack_164;
  uStack_110 = uStack_160;
  uStack_10c = uStack_15c;
  if (*(uint *)(iVar14 + 0x24) == 2) {
    FUN_010ebed4(&uStack_128);
    *puVar8 = *puVar8 - 1;
    uVar4 = 0;
LAB_010a4fe8:
    local_e0 = (int *)CONCAT31(local_e0._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0107998c(&local_e0,param_2);
  }
  piVar6 = (int *)*local_180;
  uVar12 = local_180[1];
  if ((*(uint *)(iVar14 + 0x24) & 1) == 0) {
    piVar13 = *(int **)(iVar14 + 0x28);
    do {
      iVar5 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_010a53d8;
    local_80 = (int *)piVar13[0x82];
    if (local_80 != (int *)0x0) {
      do {
        iVar5 = *local_80;
        bVar2 = (bool)hasExclusiveAccess(local_80);
      } while (!bVar2);
      *local_80 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_010a53d8;
      puVar17 = (undefined4 *)piVar13[0x83];
    }
    uVar7 = param_1[1];
    uVar9 = param_1[2];
    uVar10 = param_1[3];
    puVar15 = (undefined4 *)((uint)&local_50 | 4);
    *puVar15 = *param_1;
    puVar15[1] = uVar7;
    puVar15[2] = uVar9;
    puVar15[3] = uVar10;
    uVar7 = param_1[5];
    uVar9 = param_1[6];
    uVar10 = param_1[7];
    puVar15[4] = param_1[4];
    puVar15[5] = uVar7;
    puVar15[6] = uVar9;
    puVar15[7] = uVar10;
    local_b8 = 0;
    local_b4 = local_50;
    uStack_b0 = uStack_4c;
    uStack_ac = uStack_48;
    uStack_a8 = uStack_44;
    local_a4 = local_40;
    uStack_a0 = uStack_3c;
    uStack_9c = uStack_38;
    uStack_98 = uStack_34;
    uStack_94 = uStack_30;
    puVar16[4] = piVar6;
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[5] = uVar12;
    local_d8 = &PTR_LAB_01c1a3b4;
    local_dc = 0;
    local_e0 = (int *)0xcc;
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    local_2c = 0;
    local_c8 = piVar13;
    local_7c = puVar17;
    iVar5 = FUN_01be5878(&local_2c,0x20,0x80);
    uVar11 = local_2c;
    if ((iVar5 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x80);
    }
    FUN_01bed4e2(local_2c,&local_e0,0x80);
    iVar5 = FUN_01a88f0c(piVar13 + 0x40,uVar11,uVar11);
    local_e0 = piVar6;
    local_dc = uVar12;
    if (piVar13[0x80] != 0) {
      (**(code **)(piVar13[0x81] + 0x14))
                (piVar13[0x80] + (*(int *)(piVar13[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_e0);
    }
    if (iVar5 != 0) {
      FUN_019dc904(*(undefined4 *)(iVar14 + 0x28),iVar5);
    }
  }
  else {
    piVar13 = *(int **)(iVar14 + 0x28);
    do {
      iVar14 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar14 + 1;
    if (iVar14 < 0) {
LAB_010a53d8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10a53d8);
      (*pcVar1)();
    }
    local_80 = (int *)piVar13[0x50];
    if (local_80 != (int *)0x0) {
      do {
        iVar14 = *local_80;
        bVar2 = (bool)hasExclusiveAccess(local_80);
      } while (!bVar2);
      *local_80 = iVar14 + 1;
      if (iVar14 < 0) goto LAB_010a53d8;
      puVar17 = (undefined4 *)piVar13[0x51];
    }
    uVar7 = param_1[1];
    uVar9 = param_1[2];
    uVar10 = param_1[3];
    puVar15 = (undefined4 *)((uint)&local_108 | 4);
    *puVar15 = *param_1;
    puVar15[1] = uVar7;
    puVar15[2] = uVar9;
    puVar15[3] = uVar10;
    uVar7 = param_1[5];
    uVar9 = param_1[6];
    uVar10 = param_1[7];
    puVar15[4] = param_1[4];
    puVar15[5] = uVar7;
    puVar15[6] = uVar9;
    puVar15[7] = uVar10;
    local_b8 = 0;
    local_b4 = local_108;
    uStack_b0 = uStack_104;
    uStack_ac = uStack_100;
    uStack_a8 = uStack_fc;
    local_a4 = local_f8;
    uStack_a0 = uStack_f4;
    uStack_9c = uStack_f0;
    uStack_98 = uStack_ec;
    uStack_94 = uStack_e8;
    puVar16[4] = piVar6;
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[5] = uVar12;
    local_d8 = (undefined **)&DAT_01c1a1d4;
    local_dc = 0;
    local_e0 = (int *)0xcc;
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    local_2c = 0;
    local_c8 = piVar13;
    local_7c = puVar17;
    iVar14 = FUN_01be5878(&local_2c,0x20,0x80);
    uVar11 = local_2c;
    if ((iVar14 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x80);
    }
    FUN_01bed4e2(local_2c,&local_e0,0x80);
    iVar14 = FUN_01a89190(piVar13 + 0x14,uVar11,uVar11);
    if (piVar13[0x4e] != 0) {
      local_e0 = piVar6;
      local_dc = uVar12;
      (**(code **)(piVar13[0x4f] + 0x14))
                (piVar13[0x4e] + (*(int *)(piVar13[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_e0);
    }
    if (iVar14 != 0) {
      local_2c = local_2c & 0xffffff00;
      local_e0 = piVar13 + 2;
      local_dc = iVar14;
      local_d8 = (undefined **)&local_2c;
      FUN_019ee860(&local_e0);
    }
  }
  *puVar8 = *puVar8 - 1;
  return uVar11;
}

