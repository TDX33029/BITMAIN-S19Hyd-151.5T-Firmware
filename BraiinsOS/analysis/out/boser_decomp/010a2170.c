// FUN_010a2170 @ 010a2170 size=1188 calls_out=12 calls_in=2
// strings: 

uint FUN_010a2170(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *piVar18;
  int local_154;
  uint local_148;
  int local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  uint *local_128;
  undefined1 *local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  uint *puStack_108;
  undefined1 *puStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  uint *local_e8;
  undefined1 *puStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int *local_c0;
  uint local_bc;
  undefined **local_b8;
  int *local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int *local_68;
  int local_64;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined1 uStack_25;
  
  puVar5 = (undefined4 *)((uint)&local_c0 | 0x10);
  do {
    do {
      local_148 = DAT_01d50470;
      local_144 = DAT_01d50474;
      uVar13 = DAT_01d50470 + 1;
      iVar15 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar13;
    DAT_01d50474 = iVar15;
  } while (bVar2 && bVar3);
  local_140 = *param_1;
  uStack_13c = param_1[1];
  uStack_138 = param_1[2];
  uStack_134 = param_1[3];
  local_130 = param_1[4];
  uStack_12c = param_1[5];
  iVar15 = thunk_FUN_01bee35a();
  puVar9 = (uint *)(iVar15 + 0x20);
  local_124 = &uStack_25;
  local_128 = &local_148;
  if (*(char *)(iVar15 + 0x58) != '\x01') {
    if (*(char *)(iVar15 + 0x58) == '\x02') {
      FUN_00f2ab00(&local_140);
      uVar4 = 1;
      goto LAB_010a2214;
    }
    FUN_019a2bcc(puVar9,&LAB_019efb68);
    *(undefined1 *)(iVar15 + 0x58) = 1;
  }
  local_120 = local_140;
  uStack_11c = uStack_13c;
  uStack_118 = uStack_138;
  uStack_114 = uStack_134;
  local_110 = local_130;
  uStack_10c = uStack_12c;
  puStack_108 = local_128;
  puStack_104 = local_124;
  if (0x7ffffffe < *puVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar9 = *puVar9 + 1;
  local_100 = local_140;
  uStack_fc = uStack_13c;
  uStack_f8 = uStack_138;
  uStack_f4 = uStack_134;
  local_f0 = local_130;
  uStack_ec = uStack_12c;
  local_e8 = local_128;
  puStack_e4 = local_124;
  if (*(uint *)(iVar15 + 0x24) == 2) {
    FUN_00f2ab00(&local_100);
    *puVar9 = *puVar9 - 1;
    uVar4 = 0;
LAB_010a2214:
    local_c0 = (int *)CONCAT31(local_c0._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_0107998c(&local_c0,&DAT_01d1eef0);
  }
  piVar18 = (int *)*local_128;
  uVar13 = local_128[1];
  if ((*(uint *)(iVar15 + 0x24) & 1) == 0) {
    piVar17 = *(int **)(iVar15 + 0x28);
    do {
      iVar6 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_010a25fc;
    local_68 = (int *)piVar17[0x82];
    if (local_68 != (int *)0x0) {
      do {
        iVar6 = *local_68;
        bVar2 = (bool)hasExclusiveAccess(local_68);
      } while (!bVar2);
      *local_68 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_010a25fc;
      local_154 = piVar17[0x83];
    }
    uVar7 = param_1[1];
    uVar8 = param_1[2];
    uVar10 = param_1[3];
    uVar11 = param_1[4];
    uVar14 = param_1[5];
    puVar16 = (undefined4 *)((uint)&local_48 | 4);
    *puVar16 = *param_1;
    puVar16[1] = uVar7;
    puVar16[2] = uVar8;
    puVar16[3] = uVar10;
    puVar16[4] = uVar11;
    puVar16[5] = uVar14;
    local_98 = 0;
    local_94 = local_48;
    uStack_90 = uStack_44;
    uStack_8c = uStack_40;
    local_88 = local_3c;
    uStack_84 = uStack_38;
    uStack_80 = uStack_34;
    uStack_7c = uStack_30;
    puVar5[4] = piVar18;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[5] = uVar13;
    local_b8 = &PTR_LAB_01c1a184;
    local_bc = 0;
    local_c0 = (int *)0xcc;
    local_64 = local_154;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_2c = 0;
    local_a8 = piVar17;
    iVar6 = FUN_01be5878(&local_2c,0x20,0x60);
    uVar12 = local_2c;
    if ((iVar6 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_2c,&local_c0,0x60);
    iVar6 = FUN_01a88f0c(piVar17 + 0x40,uVar12,uVar12);
    local_c0 = piVar18;
    local_bc = uVar13;
    if (piVar17[0x80] != 0) {
      (**(code **)(piVar17[0x81] + 0x14))
                (piVar17[0x80] + (*(int *)(piVar17[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_c0);
    }
    if (iVar6 != 0) {
      FUN_019dc904(*(undefined4 *)(iVar15 + 0x28),iVar6);
    }
  }
  else {
    piVar17 = *(int **)(iVar15 + 0x28);
    do {
      iVar15 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar15 + 1;
    if (iVar15 < 0) {
LAB_010a25fc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10a25fc);
      (*pcVar1)();
    }
    local_68 = (int *)piVar17[0x50];
    if (local_68 != (int *)0x0) {
      do {
        iVar15 = *local_68;
        bVar2 = (bool)hasExclusiveAccess(local_68);
      } while (!bVar2);
      *local_68 = iVar15 + 1;
      if (iVar15 < 0) goto LAB_010a25fc;
      local_154 = piVar17[0x51];
    }
    uVar7 = param_1[1];
    uVar8 = param_1[2];
    uVar10 = param_1[3];
    uVar11 = param_1[4];
    uVar14 = param_1[5];
    puVar16 = (undefined4 *)((uint)&local_e0 | 4);
    *puVar16 = *param_1;
    puVar16[1] = uVar7;
    puVar16[2] = uVar8;
    puVar16[3] = uVar10;
    puVar16[4] = uVar11;
    puVar16[5] = uVar14;
    local_98 = 0;
    local_94 = local_e0;
    uStack_90 = uStack_dc;
    uStack_8c = uStack_d8;
    local_88 = local_d4;
    uStack_84 = uStack_d0;
    uStack_80 = uStack_cc;
    uStack_7c = uStack_c8;
    puVar5[4] = piVar18;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[5] = uVar13;
    local_b8 = (undefined **)&DAT_01c19fcc;
    local_bc = 0;
    local_c0 = (int *)0xcc;
    local_64 = local_154;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_2c = 0;
    local_a8 = piVar17;
    iVar15 = FUN_01be5878(&local_2c,0x20,0x60);
    uVar12 = local_2c;
    if ((iVar15 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_2c,&local_c0,0x60);
    iVar15 = FUN_01a89190(piVar17 + 0x14,uVar12,uVar12);
    if (piVar17[0x4e] != 0) {
      local_c0 = piVar18;
      local_bc = uVar13;
      (**(code **)(piVar17[0x4f] + 0x14))
                (piVar17[0x4e] + (*(int *)(piVar17[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_c0);
    }
    if (iVar15 != 0) {
      local_2c = local_2c & 0xffffff00;
      local_c0 = piVar17 + 2;
      local_bc = iVar15;
      local_b8 = (undefined **)&local_2c;
      FUN_019ee860(&local_c0);
    }
  }
  *puVar9 = *puVar9 - 1;
  return uVar12;
}

