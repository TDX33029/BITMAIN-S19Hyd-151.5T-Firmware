// FUN_013dec94 @ 013dec94 size=3588 calls_out=25 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013dec94(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *local_1f0;
  undefined4 *local_1d0;
  int *local_1cc;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  undefined4 *local_1c0;
  undefined4 *puStack_1bc;
  undefined4 *puStack_1b8;
  undefined4 *puStack_1b4;
  undefined4 *local_1b0;
  undefined4 *puStack_1ac;
  undefined4 *puStack_1a8;
  undefined4 *puStack_1a4;
  undefined4 *puStack_1a0;
  uint local_19c;
  undefined4 *local_198;
  undefined4 *local_194;
  undefined4 *local_190;
  undefined4 *local_18c;
  undefined4 *local_188;
  undefined4 *local_184;
  undefined4 *puStack_180;
  undefined4 *puStack_17c;
  undefined4 *puStack_178;
  undefined4 *local_170;
  undefined4 *local_16c;
  undefined4 *local_168;
  undefined4 *local_164;
  undefined4 *local_160;
  undefined4 *local_15c;
  undefined4 *local_158;
  undefined4 *local_154;
  undefined4 *local_150;
  undefined4 *local_14c;
  undefined4 *local_148;
  undefined4 *local_144;
  undefined4 *puStack_140;
  undefined4 *puStack_13c;
  undefined4 *puStack_138;
  undefined4 *local_134;
  undefined4 *local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 *local_f8;
  undefined4 *local_f4;
  undefined4 *local_f0;
  undefined4 *local_ec;
  undefined4 *local_e8;
  undefined4 *local_e4;
  undefined4 *local_e0;
  undefined4 *local_dc;
  undefined4 *puStack_d8;
  undefined4 *puStack_d4;
  undefined4 *puStack_d0;
  undefined4 *local_cc;
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  undefined4 *puStack_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *local_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  
  puVar5 = (uint *)(param_2 + 0x14);
  local_19c = *puVar5;
  local_1cc = param_2;
  uStack_1c8 = param_3;
  uStack_1c4 = param_4;
  if (local_19c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&local_19c,&DAT_00568f30,&DAT_003cee91,0x39,&DAT_01894d98);
  }
  param_2[0x15] = 1;
  param_2[0x16] = 1;
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((int)param_2 + 0x66);
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894f68);
  }
  iVar11 = param_2[3];
  *param_2 = -1;
  puVar7 = (undefined4 *)(param_2[2] + 4);
  param_2[3] = 0;
  local_19c = 0;
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (puVar7[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar7);
    }
    puVar7 = puVar7 + 9;
  }
  *param_2 = *param_2 + 1;
  if (param_2[4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894f58);
  }
  iVar13 = param_2[7] + 1;
  param_2[4] = -1;
  param_2[7] = 0;
  iVar11 = param_2[6];
  while (iVar13 = iVar13 + -1, iVar13 != 0) {
    FUN_013d1d80(iVar11);
    iVar11 = iVar11 + 0x70;
  }
  param_2[4] = param_2[4] + 1;
  if (param_2[8] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894f48);
  }
  iVar11 = param_2[10];
  iVar13 = param_2[0xb];
  iVar18 = 0;
  param_2[8] = -1;
  param_2[0xb] = 0;
  while (iVar18 != iVar13) {
    iVar2 = iVar18 * 0x98;
    iVar18 = iVar18 + 1;
    piVar12 = (int *)(iVar11 + iVar2);
    if (*piVar12 == 0x110009) {
      piVar12 = piVar12 + 1;
    }
    else {
      iVar8 = piVar12[0x1f] + 1;
      iVar2 = piVar12[0x1e];
      while (iVar8 = iVar8 + -1, iVar8 != 0) {
        FUN_013e7308(iVar2);
        iVar2 = iVar2 + 0x58;
      }
      if (piVar12[0x1d] != 0) {
        thunk_FUN_016d3fb4(piVar12[0x1e]);
      }
    }
    FUN_013d1ed8(piVar12);
  }
  param_2[8] = param_2[8] + 1;
  local_18c = (undefined4 *)*puVar5;
  local_188 = (undefined4 *)param_2[0x15];
  local_184 = (undefined4 *)param_2[0x16];
  local_190 = (undefined4 *)0x0;
  local_198 = (undefined4 *)0x0;
  local_194 = (undefined4 *)&DAT_00000004;
  puVar7 = (undefined4 *)&DAT_00000004;
  puStack_180 = local_18c;
  puStack_17c = local_188;
  puStack_178 = local_184;
  local_170 = local_18c;
  local_16c = local_188;
  local_168 = local_184;
  local_164 = local_18c;
  local_160 = local_188;
  local_15c = local_184;
LAB_013def78:
  puVar10 = local_190;
  FUN_013d2168(&local_1cc);
  if (*puVar5 == param_4) {
    local_48 = local_198;
    puStack_44 = local_194;
    puStack_40 = local_190;
    puStack_3c = local_18c;
    local_38 = local_188;
    puStack_34 = local_184;
    puStack_30 = puStack_180;
    puStack_2c = puStack_17c;
    puStack_28 = puStack_178;
    FUN_013d262c(&local_170,&local_1cc);
    puVar20 = local_168;
    puVar7 = local_16c;
    if (local_170 == (undefined4 *)&DAT_00000022) {
      local_7c = local_168;
      local_80 = local_16c;
      FUN_013d643c(&local_170,&local_1cc,&local_80);
      puVar19 = local_15c;
      puVar15 = local_160;
      puVar14 = local_164;
      puVar17 = local_168;
      puVar10 = local_16c;
      puVar16 = local_170;
      if (local_170 == (undefined4 *)&DAT_00000022) {
        local_16c = puVar20;
        local_170 = puVar7;
        if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb715c(&DAT_01894d88);
        }
        local_1f0 = (undefined4 *)param_2[1];
        puVar15 = (undefined4 *)param_2[2];
        puVar19 = (undefined4 *)param_2[3];
        param_2[1] = 0;
        param_2[2] = 4;
        param_2[3] = 0;
LAB_013dfa24:
        puVar10 = puVar15 + 1;
        for (; puVar19 != (undefined4 *)0x0; puVar19 = (undefined4 *)((int)puVar19 + -1)) {
          if (puVar10[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar10);
          }
          puVar10 = puVar10 + 9;
        }
        if (local_1f0 != (undefined4 *)0x0) {
          thunk_FUN_016d3fb4(puVar15);
        }
        *param_1 = 0x22;
        param_1[1] = puVar7;
        param_1[2] = puVar20;
        return;
      }
      local_1c0 = local_158;
      puStack_1bc = local_154;
      puStack_1b8 = local_150;
      puStack_1b4 = local_14c;
      local_1b0 = local_148;
      puStack_1ac = local_144;
      puStack_1a8 = puStack_140;
      puStack_1a4 = puStack_13c;
      puStack_1a0 = puStack_138;
      FUN_013d6144(&local_80);
    }
    else {
      local_1c0 = local_158;
      puStack_1bc = local_154;
      puStack_1b8 = local_150;
      puStack_1b4 = local_14c;
      local_1b0 = local_148;
      puStack_1ac = local_144;
      puStack_1a8 = puStack_140;
      puStack_1a4 = puStack_13c;
      puStack_1a0 = puStack_138;
      puVar14 = local_164;
      puVar15 = local_160;
      puVar16 = local_170;
      puVar17 = local_168;
      puVar19 = local_15c;
      puVar10 = local_16c;
    }
LAB_013dfa60:
    *param_1 = puVar16;
    param_1[1] = puVar10;
    param_1[3] = puVar14;
    param_1[4] = puVar15;
    param_1[5] = puVar19;
    param_1[2] = puVar17;
    param_1[6] = local_1c0;
    param_1[7] = puStack_1bc;
    param_1[8] = puStack_1b8;
    param_1[9] = puStack_1b4;
    param_1[10] = local_1b0;
    param_1[0xb] = puStack_1ac;
    param_1[0xc] = puStack_1a8;
    param_1[0xd] = puStack_1a4;
    param_1[0xe] = puStack_1a0;
    param_1[0xf] = local_134;
    return;
  }
  iVar11 = FUN_013d2518(&local_1cc);
  if (0x33 < iVar11 - 0x28U) {
    if (iVar11 != 0x7b) {
      if (iVar11 != 0x7c) goto switchD_013defb4_caseD_2c;
      local_48 = local_198;
      puStack_44 = local_194;
      puStack_40 = local_190;
      puStack_3c = local_18c;
      local_38 = local_188;
      puStack_34 = local_184;
      puStack_30 = puStack_180;
      puStack_2c = puStack_17c;
      puStack_28 = puStack_178;
      FUN_013d4788(&local_170,&local_1cc);
      goto LAB_013def10;
    }
    local_48 = local_198;
    puStack_44 = local_194;
    puStack_40 = local_190;
    puStack_3c = local_18c;
    local_38 = local_188;
    puStack_34 = local_184;
    puStack_30 = puStack_180;
    puStack_2c = puStack_17c;
    puStack_28 = puStack_178;
    FUN_013d56b8(&local_170,&local_1cc);
    goto LAB_013df34c;
  }
  switch(iVar11) {
  case 0x28:
    local_48 = local_198;
    puStack_44 = local_194;
    puStack_40 = local_190;
    puStack_3c = local_18c;
    local_38 = local_188;
    puStack_34 = local_184;
    puStack_30 = puStack_180;
    puStack_2c = puStack_17c;
    puStack_28 = puStack_178;
    FUN_013d3948(&local_170,&local_1cc,&local_48);
    goto LAB_013def10;
  case 0x29:
    local_48 = local_198;
    puStack_44 = local_194;
    puStack_40 = local_190;
    puStack_3c = local_18c;
    local_38 = local_188;
    puStack_34 = local_184;
    puStack_30 = puStack_180;
    puStack_2c = puStack_17c;
    puStack_28 = puStack_178;
    FUN_013d3da4(&local_170,&local_1cc,&local_48);
LAB_013def10:
    puStack_1bc = local_154;
    puStack_1b8 = local_150;
    puStack_1b4 = local_14c;
    if (local_170 == (undefined4 *)&DAT_00000022) goto LAB_013def70;
    local_1b0 = local_148;
    puStack_1ac = local_144;
    puStack_1a8 = puStack_140;
    puStack_1a4 = puStack_13c;
    puStack_1a0 = puStack_138;
    puVar14 = local_164;
    puVar15 = local_160;
    puVar16 = local_170;
    puVar17 = local_168;
    puVar19 = local_15c;
    puVar10 = local_16c;
    local_1c0 = local_158;
    goto LAB_013dfa60;
  case 0x2a:
    local_1c0 = (undefined4 *)&DAT_00000004;
    break;
  case 0x2b:
    local_1c0 = (undefined4 *)&DAT_00000005;
    break;
  default:
switchD_013defb4_caseD_2c:
    puVar7 = (undefined4 *)FUN_013d2518(&local_1cc);
    if ((int)puVar7 < 0x5c) {
      if (puVar7 == (undefined4 *)&DAT_00000024) {
        uVar9 = *puVar5;
        uVar3 = FUN_013d2518(&local_1cc);
        uVar6 = 1;
        if (0x7f < uVar3) {
          uVar6 = 2;
        }
        if ((0x7ff < uVar3) && (uVar6 = 4, uVar3 < 0x10000)) {
          uVar6 = 3;
        }
        if (CARRY4(uVar6,uVar9)) {
          puVar4 = &DAT_01894f38;
          goto LAB_013dfba4;
        }
        puVar7 = (undefined4 *)(uVar6 + uVar9);
        iVar11 = param_2[0x16];
        if (iVar11 != -1) {
          puVar10 = (undefined4 *)param_2[0x15];
          iVar13 = FUN_013d2518(&local_1cc);
          local_48 = (undefined4 *)*puVar5;
          puStack_44 = (undefined4 *)param_2[0x15];
          puStack_40 = (undefined4 *)param_2[0x16];
          FUN_013d2d20(&local_1cc);
          uVar1 = 1;
LAB_013df570:
          local_16c = (undefined4 *)0x80000003;
          puVar20 = (undefined4 *)0x80000003;
          local_150 = (undefined4 *)CONCAT31(local_150._1_3_,uVar1);
LAB_013df574:
          local_154 = (undefined4 *)(iVar11 + 1);
          if (iVar13 == 10) {
            local_154 = (undefined4 *)&DAT_00000001;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          local_158 = puVar10;
          local_168 = local_48;
          local_164 = puStack_44;
          local_160 = puStack_40;
          local_15c = puVar7;
          goto LAB_013df5a8;
        }
      }
      else {
        if (puVar7 != (undefined4 *)&DAT_0000002e) goto LAB_013df444;
        uVar9 = *puVar5;
        uVar3 = FUN_013d2518(&local_1cc);
        uVar6 = 1;
        if (0x7f < uVar3) {
          uVar6 = 2;
        }
        if ((0x7ff < uVar3) && (uVar6 = 4, uVar3 < 0x10000)) {
          uVar6 = 3;
        }
        if (CARRY4(uVar6,uVar9)) {
          puVar4 = &DAT_01894f38;
          goto LAB_013dfba4;
        }
        puVar7 = (undefined4 *)(uVar6 + uVar9);
        iVar11 = param_2[0x16];
        if (iVar11 != -1) {
          puVar10 = (undefined4 *)param_2[0x15];
          iVar13 = FUN_013d2518(&local_1cc);
          local_48 = (undefined4 *)*puVar5;
          puStack_44 = (undefined4 *)param_2[0x15];
          puStack_40 = (undefined4 *)param_2[0x16];
          FUN_013d2d20(&local_1cc);
          puVar20 = (undefined4 *)&DAT_80000004;
          local_16c = (undefined4 *)&DAT_80000004;
          goto LAB_013df574;
        }
      }
    }
    else {
      if (puVar7 == (undefined4 *)&DAT_0000005c) {
        FUN_013d2e34(&local_170,&local_1cc);
        puVar7 = local_15c;
        puStack_1bc = local_154;
        puStack_1b8 = local_150;
        puStack_1b4 = local_14c;
        local_1f0 = local_164;
        if (local_170 != (undefined4 *)&DAT_00000022) {
          local_1d0 = local_134;
          local_1b0 = local_148;
          puStack_1ac = local_144;
          puStack_1a8 = puStack_140;
          puStack_1a4 = puStack_13c;
          puStack_1a0 = puStack_138;
          puVar20 = local_168;
          puVar15 = local_160;
          puVar16 = local_170;
          puVar19 = local_15c;
          puVar7 = local_16c;
          local_1c0 = local_158;
          goto LAB_013df9c8;
        }
        puVar20 = local_16c;
        if ((undefined4 *)0x80000001 < local_16c) goto LAB_013df5a8;
        local_170 = local_16c;
        local_15c = local_158;
        local_158 = local_154;
        local_154 = local_150;
        local_150 = local_14c;
        local_16c = local_168;
        local_168 = local_164;
        local_164 = local_160;
        local_160 = puVar7;
        local_14c = local_148;
        local_148 = local_144;
        local_144 = puStack_140;
        puStack_140 = puStack_13c;
        puStack_13c = puStack_138;
        puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x38);
        if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x38);
        }
        *puVar7 = local_170;
        puVar7[1] = local_16c;
        puVar7[2] = local_168;
        puVar7[3] = local_164;
        puVar7[4] = local_160;
        puVar7[5] = local_15c;
        puVar7[6] = local_158;
        puVar7[7] = local_154;
        puVar7[8] = local_150;
        puVar7[9] = local_14c;
        puVar7[10] = local_148;
        puVar7[0xb] = local_144;
        puVar7[0xc] = puStack_140;
        puVar7[0xd] = puStack_13c;
        local_170 = (undefined4 *)&DAT_00000005;
        local_16c = puVar7;
        if (puVar10 == local_198) {
          FUN_01401514(&local_198);
        }
        local_194[(int)puVar10 * 2] = 5;
        (local_194 + (int)puVar10 * 2)[1] = puVar7;
        puVar7 = local_194;
        goto LAB_013df78c;
      }
      if (puVar7 == (undefined4 *)&DAT_0000005e) {
        uVar9 = *puVar5;
        uVar3 = FUN_013d2518(&local_1cc);
        uVar6 = 1;
        if (0x7f < uVar3) {
          uVar6 = 2;
        }
        if ((0x7ff < uVar3) && (uVar6 = 4, uVar3 < 0x10000)) {
          uVar6 = 3;
        }
        if (CARRY4(uVar6,uVar9)) {
          puVar4 = &DAT_01894f38;
          goto LAB_013dfba4;
        }
        puVar7 = (undefined4 *)(uVar6 + uVar9);
        iVar11 = param_2[0x16];
        if (iVar11 != -1) {
          puVar10 = (undefined4 *)param_2[0x15];
          iVar13 = FUN_013d2518(&local_1cc);
          local_48 = (undefined4 *)*puVar5;
          puStack_44 = (undefined4 *)param_2[0x15];
          puStack_40 = (undefined4 *)param_2[0x16];
          FUN_013d2d20(&local_1cc);
          uVar1 = 0;
          goto LAB_013df570;
        }
      }
      else {
LAB_013df444:
        uVar9 = *puVar5;
        uVar3 = FUN_013d2518(&local_1cc);
        uVar6 = 1;
        if (0x7f < uVar3) {
          uVar6 = 2;
        }
        if ((0x7ff < uVar3) && (uVar6 = 4, uVar3 < 0x10000)) {
          uVar6 = 3;
        }
        if (CARRY4(uVar6,uVar9)) {
          puVar4 = &DAT_01894f38;
          goto LAB_013dfba4;
        }
        iVar11 = param_2[0x16];
        if (iVar11 != -1) {
          puVar10 = (undefined4 *)param_2[0x15];
          iVar13 = FUN_013d2518(&local_1cc);
          local_48 = (undefined4 *)*puVar5;
          puStack_44 = (undefined4 *)param_2[0x15];
          puStack_40 = (undefined4 *)param_2[0x16];
          FUN_013d2d20(&local_1cc);
          puVar20 = (undefined4 *)0x80000002;
          if (iVar13 == 10) {
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          local_164 = local_48;
          local_160 = puStack_44;
          local_15c = puStack_40;
          local_14c = (undefined4 *)((uint)local_14c & 0xffffff00);
          local_150 = (undefined4 *)(iVar11 + 1);
          if (iVar13 == 10) {
            local_150 = (undefined4 *)&DAT_00000001;
          }
          local_16c = (undefined4 *)0x80000002;
          local_158 = (undefined4 *)(uVar6 + uVar9);
          local_154 = puVar10;
          local_168 = puVar7;
LAB_013df5a8:
                    /* WARNING: Could not recover jumptable at 0x013df5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          local_58 = local_158;
          local_54 = local_154;
          local_50 = local_150;
          local_4c = local_14c;
          (*(code *)((int)&DAT_013df5b8 + (&DAT_013df5b8)[(int)((int)puVar20 + 0x7ffffffe)]))();
          return;
        }
      }
    }
    puVar4 = &DAT_01894f28;
LAB_013dfba4:
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(puVar4);
  case 0x3f:
    local_1c0 = (undefined4 *)0x3;
    break;
  case 0x5b:
    FUN_013d4a54(&local_170,&local_1cc);
    local_48 = local_154;
    puStack_1bc = local_150;
    puStack_1b8 = local_14c;
    puStack_1b4 = local_148;
    local_1b0 = local_144;
    puStack_1ac = puStack_140;
    puStack_1a8 = puStack_13c;
    puStack_1a4 = puStack_138;
    puStack_1a0 = local_134;
    puStack_44 = puStack_1bc;
    puStack_40 = puStack_1b8;
    puStack_3c = puStack_1b4;
    local_38 = local_1b0;
    puStack_34 = puStack_1ac;
    puStack_30 = puStack_1a8;
    puStack_2c = puStack_1a4;
    puStack_28 = puStack_1a0;
    if (local_170 == (undefined4 *)0x110009) {
      local_1d0 = local_130;
      local_1f0 = local_160;
      puVar20 = local_164;
      puVar15 = local_15c;
      puVar16 = local_16c;
      puVar19 = local_158;
      puVar7 = local_168;
      local_1c0 = local_48;
LAB_013df9c8:
      puVar17 = local_194;
      iVar11 = (int)puVar10 + 1;
      puVar10 = local_194;
      while (iVar11 = iVar11 + -1, iVar11 != 0) {
        FUN_013e7690(puVar10);
        puVar10 = puVar10 + 2;
      }
      if (local_198 != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(puVar17);
      }
      puVar14 = local_1f0;
      puVar17 = puVar20;
      local_134 = local_1d0;
      puVar10 = puVar7;
      if (puVar16 == (undefined4 *)&DAT_00000022) goto LAB_013dfa24;
      goto LAB_013dfa60;
    }
    local_b4 = local_12c;
    uStack_b0 = uStack_128;
    uStack_ac = uStack_124;
    uStack_a8 = uStack_120;
    uStack_a4 = uStack_11c;
    uStack_a0 = uStack_118;
    local_9c = local_114;
    uStack_98 = uStack_110;
    uStack_94 = uStack_10c;
    uStack_90 = uStack_108;
    uStack_8c = uStack_104;
    uStack_88 = uStack_100;
    local_ec = local_164;
    local_f0 = local_168;
    local_f4 = local_16c;
    local_e0 = local_158;
    local_e4 = local_15c;
    local_e8 = local_160;
    local_f8 = local_170;
    local_dc = local_154;
    puStack_d8 = local_150;
    puStack_d4 = local_14c;
    puStack_d0 = local_148;
    local_cc = local_144;
    puStack_c8 = puStack_140;
    puStack_c4 = puStack_13c;
    puStack_c0 = puStack_138;
    puStack_bc = local_134;
    local_b8 = local_130;
    puVar20 = (undefined4 *)thunk_FUN_016d4a50(0x74);
    if (puVar20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x74);
    }
    FUN_016dd1aa(puVar20,&local_f8,0x74);
    local_170 = (undefined4 *)&DAT_00000007;
    local_16c = puVar20;
    if (puVar10 == local_198) {
      FUN_01401514(&local_198);
      puVar7 = local_194;
    }
    puVar7[(int)puVar10 * 2] = 7;
    (puVar7 + (int)puVar10 * 2)[1] = puVar20;
LAB_013df78c:
    local_190 = (undefined4 *)((int)puVar10 + 1);
    goto LAB_013def78;
  }
  puStack_3c = local_18c;
  puStack_40 = local_190;
  puStack_44 = local_194;
  local_48 = local_198;
  local_38 = local_188;
  puStack_34 = local_184;
  puStack_30 = puStack_180;
  puStack_2c = puStack_17c;
  puStack_28 = puStack_178;
  FUN_013d51d0(&local_170,&local_1cc,&local_48,&local_1c0);
LAB_013df34c:
  puStack_1bc = local_154;
  puStack_1b8 = local_150;
  puStack_1b4 = local_14c;
  if (local_170 != (undefined4 *)&DAT_00000022) {
    local_1b0 = local_148;
    puStack_1ac = local_144;
    puStack_1a8 = puStack_140;
    puStack_1a4 = puStack_13c;
    puStack_1a0 = puStack_138;
    puVar14 = local_164;
    puVar15 = local_160;
    puVar16 = local_170;
    puVar17 = local_168;
    puVar19 = local_15c;
    puVar10 = local_16c;
    local_1c0 = local_158;
    goto LAB_013dfa60;
  }
LAB_013def70:
  puVar7 = local_168;
  local_198 = local_16c;
  local_194 = local_168;
  local_190 = local_164;
  local_18c = local_160;
  local_188 = local_15c;
  local_184 = local_158;
  puStack_180 = local_154;
  puStack_17c = local_150;
  puStack_178 = local_14c;
  local_80 = local_158;
  local_7c = local_154;
  goto LAB_013def78;
}

