// FUN_014a5f14 @ 014a5f14 size=1252 calls_out=11 calls_in=2
// strings: 

int FUN_014a5f14(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 **ppuVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint *puVar16;
  int *piVar17;
  int iVar18;
  int local_18c;
  uint local_178;
  int local_174;
  uint *local_170;
  undefined1 *local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_154;
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
  uint *local_110;
  undefined1 *puStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint **local_e0;
  undefined1 *local_dc;
  undefined **local_d8;
  int *local_c8;
  undefined4 local_b8;
  uint local_b4;
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
  int local_78;
  int local_74;
  uint local_58;
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
  int local_2c;
  undefined1 uStack_25;
  
  puVar9 = (undefined4 *)((uint)&local_e0 | 0x10);
  do {
    do {
      local_178 = DAT_018d9200;
      local_174 = DAT_018d9204;
      uVar12 = DAT_018d9200 + 1;
      iVar14 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar12;
    DAT_018d9204 = iVar14;
  } while (bVar2 && bVar3);
  local_16c = &uStack_25;
  local_170 = &local_178;
  local_168 = *param_1;
  uStack_164 = param_1[1];
  uStack_160 = param_1[2];
  uStack_15c = param_1[3];
  local_158 = param_1[4];
  local_154 = param_1[5];
  uStack_150 = param_1[6];
  uStack_14c = param_1[7];
  uStack_148 = param_1[8];
  uStack_144 = param_1[9];
  iVar18 = 0x14a5fa0;
  iVar14 = thunk_FUN_016de0ee();
  puVar16 = (uint *)(iVar14 + 0x40);
  if (*(char *)(iVar14 + 0x78) != '\x01') {
    if (*(char *)(iVar14 + 0x78) == '\x02') {
      FUN_014a65dc(&local_170);
      uVar5 = 1;
      goto LAB_014a5fc4;
    }
    iVar18 = 0x14a6000;
    FUN_015e8e6c(puVar16,FUN_0148592c);
    *(undefined1 *)(iVar14 + 0x78) = 1;
  }
  local_140 = local_170;
  puStack_13c = local_16c;
  uStack_138 = local_168;
  uStack_134 = uStack_164;
  uStack_130 = uStack_160;
  uStack_12c = uStack_15c;
  local_128 = local_158;
  uStack_124 = local_154;
  uStack_120 = uStack_150;
  uStack_11c = uStack_14c;
  uStack_118 = uStack_148;
  uStack_114 = uStack_144;
  if (0x7ffffffe < *puVar16) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_014a63dc;
  }
  *puVar16 = *puVar16 + 1;
  local_110 = local_170;
  puStack_10c = local_16c;
  uStack_108 = local_168;
  uStack_104 = uStack_164;
  uStack_100 = uStack_160;
  uStack_fc = uStack_15c;
  local_f8 = local_158;
  uStack_f4 = local_154;
  uStack_f0 = uStack_150;
  uStack_ec = uStack_14c;
  uStack_e8 = uStack_148;
  uStack_e4 = uStack_144;
  if (*(uint *)(iVar14 + 0x44) == 2) {
    FUN_014a65dc(&local_110);
    uVar5 = 0;
    *puVar16 = *puVar16 - 1;
LAB_014a5fc4:
    local_110 = (uint *)CONCAT31(local_110._1_3_,uVar5);
    local_e0 = &local_110;
    local_dc = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_e0,param_2);
  }
  ppuVar6 = (undefined4 **)*local_170;
  uVar12 = local_170[1];
  if ((*(uint *)(iVar14 + 0x44) & 1) == 0) {
    piVar17 = *(int **)(iVar14 + 0x48);
    do {
      iVar4 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_014a63dc;
    piVar7 = (int *)piVar17[0x8e];
    if (piVar7 == (int *)0x0) {
      local_78 = 0;
    }
    else {
      do {
        iVar18 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar18 + 1;
      if (iVar18 < 0) goto LAB_014a63dc;
      local_78 = piVar17[0x8e];
      iVar18 = piVar17[0x8f];
    }
    uVar8 = param_1[1];
    uVar10 = param_1[2];
    uVar11 = param_1[3];
    uVar13 = param_1[4];
    puVar15 = (undefined4 *)((uint)&local_58 | 4);
    *puVar15 = *param_1;
    puVar15[1] = uVar8;
    puVar15[2] = uVar10;
    puVar15[3] = uVar11;
    puVar15[4] = uVar13;
    uVar8 = param_1[6];
    uVar10 = param_1[7];
    uVar11 = param_1[8];
    uVar13 = param_1[9];
    puVar15[5] = param_1[5];
    puVar15[6] = uVar8;
    puVar15[7] = uVar10;
    puVar15[8] = uVar11;
    puVar15[9] = uVar13;
    puVar9[4] = ppuVar6;
    local_e0 = (undefined4 **)0xcc;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[5] = uVar12;
    local_d8 = &PTR_LAB_018a4824;
    local_dc = (undefined1 *)0x0;
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
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_2c = 0;
    local_c8 = piVar17;
    local_74 = iVar18;
    iVar4 = FUN_016d51b0(&local_2c,0x20,0x80);
    iVar18 = local_2c;
    if ((iVar4 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x80);
    }
    FUN_016dd1aa(local_2c,&local_e0,0x80);
    iVar4 = FUN_014ae51c(piVar17 + 0x40,iVar18,iVar18);
    local_e0 = ppuVar6;
    local_dc = (undefined1 *)uVar12;
    if (piVar17[0x8c] != 0) {
      (**(code **)(piVar17[0x8d] + 0x14))
                (piVar17[0x8c] + (*(int *)(piVar17[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_e0);
    }
    if (iVar4 != 0) {
      FUN_01659ec0(*(undefined4 *)(iVar14 + 0x48),iVar4);
    }
  }
  else {
    piVar17 = *(int **)(iVar14 + 0x48);
    do {
      iVar14 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar14 + 1;
    if (iVar14 < 0) {
LAB_014a63dc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x14a63dc);
      (*pcVar1)();
    }
    piVar7 = (int *)piVar17[0x5c];
    if (piVar7 == (int *)0x0) {
      local_78 = 0;
    }
    else {
      do {
        iVar14 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar14 + 1;
      if (iVar14 < 0) goto LAB_014a63dc;
      local_78 = piVar17[0x5c];
      local_18c = piVar17[0x5d];
    }
    uVar8 = param_1[1];
    uVar10 = param_1[2];
    uVar11 = param_1[3];
    uVar13 = param_1[4];
    puVar15 = (undefined4 *)((uint)&local_58 | 4);
    *puVar15 = *param_1;
    puVar15[1] = uVar8;
    puVar15[2] = uVar10;
    puVar15[3] = uVar11;
    puVar15[4] = uVar13;
    uVar8 = param_1[6];
    uVar10 = param_1[7];
    uVar11 = param_1[8];
    uVar13 = param_1[9];
    puVar15[5] = param_1[5];
    puVar15[6] = uVar8;
    puVar15[7] = uVar10;
    puVar15[8] = uVar11;
    puVar15[9] = uVar13;
    puVar9[4] = ppuVar6;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[5] = uVar12;
    local_d8 = &PTR_LAB_018a47d4;
    local_e0 = (undefined4 **)0xcc;
    local_dc = (undefined1 *)0x0;
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
    local_74 = local_18c;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_2c = 0;
    local_c8 = piVar17;
    iVar14 = FUN_016d51b0(&local_2c,0x20,0x80);
    iVar18 = local_2c;
    if ((iVar14 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x80);
    }
    FUN_016dd1aa(local_2c,&local_e0,0x80);
    iVar14 = FUN_014ae51c(piVar17 + 0x14,iVar18,iVar18);
    if (piVar17[0x5a] != 0) {
      local_e0 = ppuVar6;
      local_dc = (undefined1 *)uVar12;
      (**(code **)(piVar17[0x5b] + 0x14))
                (piVar17[0x5a] + (*(int *)(piVar17[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_e0);
    }
    if (iVar14 != 0) {
      local_58 = local_58 & 0xffffff00;
      local_d8 = (undefined **)&local_58;
      local_e0 = (uint **)(piVar17 + 2);
      local_dc = (undefined1 *)iVar14;
      FUN_0164511c(&local_e0);
    }
  }
  *puVar16 = *puVar16 - 1;
  return iVar18;
}

