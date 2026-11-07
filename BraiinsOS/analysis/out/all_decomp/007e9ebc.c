// FUN_007e9ebc @ 007e9ebc size=5372 calls_out=35 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Removing unreachable block (ram,0x007eaa44) */
/* WARNING: Removing unreachable block (ram,0x007eb434) */
/* WARNING: Removing unreachable block (ram,0x007ea75c) */
/* WARNING: Removing unreachable block (ram,0x007ea4f8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007e9ebc(int *param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int ***********pppppppppppiVar11;
  int *piVar12;
  undefined4 extraout_r1;
  int *******pppppppiVar13;
  undefined *puVar14;
  int ***********pppppppppppiVar15;
  int ***********pppppppppppiVar16;
  int ***********pppppppppppiVar17;
  int **********ppppppppppiVar18;
  int ***********pppppppppppiVar19;
  uint uVar20;
  int ***********pppppppppppiVar21;
  int ***********pppppppppppiVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int **********ppppppppppiVar25;
  int ***********pppppppppppiVar26;
  int ***********pppppppppppiVar27;
  int **********ppppppppppiVar28;
  bool bVar29;
  int *******local_308;
  int ***********local_2dc;
  int ***********local_2d8;
  int *local_2d4;
  undefined4 local_2d0;
  undefined1 auStack_2c8 [56];
  int local_290;
  undefined4 local_288;
  undefined4 local_284;
  int **********local_280 [2];
  undefined1 auStack_278 [24];
  int local_260;
  int local_25c;
  undefined1 *local_230;
  undefined4 local_22c;
  int ***********local_228;
  int *piStack_224;
  undefined4 uStack_220;
  int ***********local_218;
  int *local_214;
  undefined4 local_210;
  int ***********local_208;
  int ***********local_204;
  int ***********local_200;
  int ***********local_1e0;
  int ***********local_1dc;
  int ***********local_1d8;
  int local_1d4;
  int ***********local_1d0;
  int local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 *local_198;
  undefined4 local_194;
  int ************local_190;
  int ************local_18c;
  undefined4 *local_188;
  int **********local_180;
  int *************local_17c;
  int ***********local_178;
  int ***********local_174;
  int ***********local_170;
  int ***********local_168;
  int *local_164;
  undefined4 uStack_160;
  int ************local_158;
  int local_154;
  int ***********local_128;
  int ***********pppppppppppiStack_124;
  int ***********local_120;
  int ***********local_114;
  int ***********local_110;
  undefined *local_10c;
  int ************local_108;
  int ************local_104;
  undefined4 *local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int ***********local_c8;
  int ***********local_c4;
  int ***********local_c0;
  int ***********local_bc;
  int *************local_b8;
  int local_b4;
  int ************local_88;
  int ************local_84;
  undefined4 *local_80;
  undefined1 *local_7c;
  int ***********local_60;
  int ***********local_5c;
  int ***********local_58;
  int iStack_54;
  int ***********pppppppppppiStack_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_01657e94(&local_168,*param_1,param_1[1]);
  if (local_168 == (int ***********)0x3) {
    local_1dc = (int ***********)&DAT_0157d360;
    local_1e0 = (int ***********)&DAT_018ad30c;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_1e0,&DAT_018acca0);
  }
  local_2d8 = local_168;
  local_2d4 = local_164;
  local_2d0 = uStack_160;
  FUN_016dd1aa(auStack_2c8,param_1 + 2,0x50);
  local_230 = &DAT_3b9aca00;
  FUN_015f3b0c(&local_168,1);
  local_228 = local_168;
  piStack_224 = local_164;
  uStack_220 = uStack_160;
  local_1e0 = local_280;
  local_1dc = (int ***********)&DAT_00f5c97c;
  FUN_00600d2c(&local_168,&DAT_0056d024,&local_1e0);
  local_218 = local_168;
  local_214 = local_164;
  local_210 = uStack_160;
  pppppppppppiVar26 = (int ***********)&DAT_006043a8;
  local_308 = (int *******)&DAT_018ae394;
  pppppppppppiVar19 = (int ***********)&local_1e0;
  if ((2 < DAT_018d9130) || (DAT_018d9620 == '\0')) goto LAB_007ea178;
  if (DAT_018d9620 == '\x01') {
LAB_007ea008:
    DataMemoryBarrier(0xb);
    pcVar4 = DAT_018daa74;
    if (DAT_018dd984 != 2) {
      pcVar4 = s_SetGloba_00414c05;
    }
    pppppppiVar13 = (int *******)&DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pppppppiVar13 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar4 = pcVar4 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
    }
    iVar5 = (*(code *)pppppppiVar13[5])(pcVar4,DAT_018d9618);
    if (iVar5 == 0) goto LAB_007ea178;
  }
  else if (DAT_018d9620 != '\x02') {
    cVar3 = FUN_0169ac90(&DAT_018d9618);
    if (cVar3 == '\0') goto LAB_007ea178;
    if (cVar3 != '\x02') goto LAB_007ea008;
  }
  if (*(int *)(DAT_018d9618 + 0x20) == 0) {
    puVar14 = &DAT_0185e318;
LAB_007ebcf0:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,puVar14);
  }
  local_1dc = *(int ************)(DAT_018d9618 + 0x20);
  local_1d8 = *(int ************)(DAT_018d9618 + 0x24);
  local_1d4 = *(int *)(DAT_018d9618 + 0x28);
  local_5c = (int ***********)&local_88;
  local_84 = (int ************)&local_108;
  local_c0 = (int ***********)(DAT_018d9618 + 0x1c);
  local_1e0 = (int ***********)*local_c0;
  local_108 = &local_218;
  local_c8 = (int ***********)&local_60;
  local_158 = &local_c8;
  local_1d0 = (int ***********)0x0;
  local_58 = (int ***********)&DAT_018abb78;
  local_88 = (int ************)&DAT_00574b39;
  local_104 = (int ************)&DAT_006043a8;
  local_c4 = (int ***********)&DAT_00000001;
  local_164 = (int *)0x0;
  local_168 = (int ***********)&DAT_00000001;
  DataMemoryBarrier(0xb);
  pcVar4 = s_SetGloba_00414c05;
  pppppppppppiVar19 = (int ***********)&DAT_018ae394;
  if (DAT_018dd984 == 2) {
    pcVar4 = DAT_018daa74;
    pppppppppppiVar19 = (int ***********)DAT_018daa78;
    if (DAT_018daa70 != 0) {
      pcVar4 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
    }
  }
  local_154 = DAT_018d9618;
  local_60 = (int ***********)&local_1e0;
  iVar5 = (*(code *)pppppppppppiVar19[10])(pcVar4,&local_168);
  if (iVar5 != 0) {
    (*(code *)pppppppppppiVar19[0xb])(pcVar4,&local_168);
  }
LAB_007ea178:
  FUN_01401f1c(local_214,local_210);
  uVar6 = FUN_016d6968(0xe0);
  iVar5 = FUN_016d695a(0,uVar6,0xfffffffa);
  if (iVar5 != 0) {
    puVar7 = (undefined4 *)FUN_016d2bc8();
    local_164 = (int *)*puVar7;
    local_168 = (int ***********)0x1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00342990,0x1e,&local_168,&DAT_0185e3d4,&DAT_0185e2c8);
  }
  FUN_015f3b0c(&local_168,0);
  FUN_015f3b0c(&local_168,0);
  FUN_015f3b0c(&local_168,0);
  FUN_015f3b0c(&local_168,0);
  FUN_015f3b0c(&local_168,0);
  FUN_015f3b0c(&local_1e0,0);
  puVar7 = (undefined4 *)((uint)&local_208 | 4);
  puVar8 = (undefined4 *)((uint)&local_1e0 | 4);
  local_2dc = (int ***********)&DAT_3b9aca00;
LAB_007ea2ac:
  do {
    while( true ) {
      pppppppppppiVar22 = (int ***********)&DAT_3b9aca00;
      if (local_2dc != (int ***********)&DAT_3b9aca00) {
        FUN_015f3b0c(&local_1e0,1);
        local_c0 = local_2dc;
        local_60 = local_1e0;
        local_5c = local_1dc;
        local_58 = local_1d8;
        local_c8 = pppppppppppiVar19;
        local_c4 = pppppppppppiVar26;
        FUN_015f3c24(&local_1e0,&local_c8,&local_60);
        pppppppppppiVar22 = local_2dc;
        if (((uint)local_1e0 & 1) == 0) {
          if (&UNK_004c4b3f < local_1d0) {
            pppppppppppiVar22 = (int ***********)&DAT_3b9aca00;
          }
          if (local_1d8 != (int ***********)0x0 || local_1d4 != 0) {
            pppppppppppiVar22 = (int ***********)&DAT_3b9aca00;
          }
        }
      }
      DataMemoryBarrier(0xb);
      if (*(char *)(local_290 + 0x38) != '\0') goto LAB_007eb704;
      FUN_008acc70(&local_1e0,local_284);
      puVar2 = local_230;
      if (local_1e0 != (int ***********)&DAT_00000004) {
        uVar6 = puVar8[1];
        uVar23 = puVar8[2];
        *puVar7 = *puVar8;
        puVar7[1] = uVar6;
        puVar7[2] = uVar23;
        uVar6 = puVar8[4];
        uVar23 = puVar8[5];
        uVar24 = puVar8[6];
        puVar7[3] = puVar8[3];
        puVar7[4] = uVar6;
        puVar7[5] = uVar23;
        puVar7[6] = uVar24;
        local_208 = local_1e0;
                    /* WARNING: Could not recover jumptable at 0x007ea560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_007ea564 + *(int *)(&DAT_007ea564 + (int)local_1e0 * 4)))();
        return;
      }
      if ((char)local_1dc != '\0') goto LAB_007eb704;
      if (local_230 != &DAT_3b9aca00) break;
      if (pppppppppppiVar22 != (int ***********)&DAT_3b9aca00) {
        local_230 = &DAT_3b9aca00;
        local_208 = pppppppppppiVar19;
        local_204 = pppppppppppiVar26;
        local_200 = pppppppppppiVar22;
        goto LAB_007ea434;
      }
LAB_007ea6fc:
      pppppppppppiVar15 = (int ***********)0x0;
      iVar5 = 0;
      pppppppppppiVar22 = (int ***********)&DAT_000f4240;
LAB_007ea718:
      do {
        local_1e0 = (int ***********)0x7fffffff;
        if (pppppppppppiVar15 < (int ***********)0x7fffffff) {
          local_1e0 = pppppppppppiVar15;
        }
        if (iVar5 != 0) {
          local_1e0 = (int ***********)0x7fffffff;
        }
        bVar29 = pppppppppppiVar15 < local_1e0;
        pppppppppppiVar15 = (int ***********)((int)pppppppppppiVar15 - (int)local_1e0);
        iVar5 = iVar5 - (uint)bVar29;
        local_1dc = pppppppppppiVar22;
        iVar9 = FUN_016e041a(&local_1e0,&local_1e0);
        if (iVar9 == -1) {
          puVar10 = (undefined4 *)FUN_016d2bc8();
          local_60 = (int ***********)*puVar10;
          if (local_60 != (int ***********)&DAT_00000004) goto LAB_007ebc78;
          bVar29 = CARRY4((uint)pppppppppppiVar15,(uint)local_1e0);
          pppppppppppiVar15 = (int ***********)((int)pppppppppppiVar15 + (int)local_1e0);
          iVar5 = iVar5 + ((int)local_1e0 >> 0x1f) + (uint)bVar29;
          local_60 = (int ***********)&DAT_00000004;
          pppppppppppiVar22 = local_1dc;
          if (0 < (int)local_1dc) goto LAB_007ea718;
        }
        else {
          pppppppppppiVar22 = (int ***********)0x0;
        }
      } while (pppppppppppiVar15 != (int ***********)0x0 || iVar5 != 0);
    }
    if ((DAT_018dd940 == '\0') &&
       (iVar5 = (**(code **)(local_25c + 0x50))
                          (local_260 + (*(int *)(local_25c + 8) - 1U & 0xfffffff8) + 8), iVar5 == 0)
       ) {
      FUN_008ac610(&local_1e0,local_288);
      pppppppppppiVar26 = local_1dc;
      pppppppppppiVar19 = local_1e0;
      if (local_1e0 != (int ***********)&DAT_80000000) {
        pppppppppppiVar15 = local_1dc + 1;
        for (pppppppppppiVar22 = local_1d8; pppppppppppiVar22 != (int ***********)0x0;
            pppppppppppiVar22 = (int ***********)((int)pppppppppppiVar22 + -1)) {
          if (pppppppppppiVar15[-1] != (int **********)0x0) {
            thunk_FUN_016d3fb4(*pppppppppppiVar15);
          }
          pppppppppppiVar15 = pppppppppppiVar15 + 3;
        }
        if (pppppppppppiVar19 != (int ***********)0x0) {
          thunk_FUN_016d3fb4(pppppppppppiVar26);
        }
        FUN_008e7734(&local_1d4);
      }
      uVar6 = local_22c;
      local_230 = &DAT_3b9aca00;
      FUN_016dd1aa(&local_1e0,auStack_278,0x48);
      local_194 = uVar6;
      local_198 = puVar2;
      FUN_008e7268(&local_1e0);
      FUN_015f3b0c(&local_60,1);
      if (local_58 < (int ***********)0x3b8b87c0) {
        local_2dc = local_58 + 250000;
        pppppppppppiVar19 = local_60;
        pppppppppppiVar26 = local_5c;
      }
      else {
        pppppppppppiVar26 =
             (int ***********)((int)local_5c + (uint)((int ***********)0xfffffffe < local_60));
        if ((int)(((uint)local_5c ^ (uint)pppppppppppiVar26) & ~(uint)local_5c) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
        }
        local_2dc = local_58 + -0xee2e1f0;
        pppppppppppiVar19 = (int ***********)((int)local_60 + 1);
      }
      FUN_008e7734(&local_1e0);
      pppppppppppiVar15 = (int ***********)0x0;
      iVar5 = 0;
      pppppppppppiVar22 = (int ***********)&DAT_000f4240;
LAB_007eb3f0:
      do {
        local_1e0 = (int ***********)0x7fffffff;
        if (pppppppppppiVar15 < (int ***********)0x7fffffff) {
          local_1e0 = pppppppppppiVar15;
        }
        if (iVar5 != 0) {
          local_1e0 = (int ***********)0x7fffffff;
        }
        bVar29 = pppppppppppiVar15 < local_1e0;
        pppppppppppiVar15 = (int ***********)((int)pppppppppppiVar15 - (int)local_1e0);
        iVar5 = iVar5 - (uint)bVar29;
        local_1dc = pppppppppppiVar22;
        iVar9 = FUN_016e041a(&local_1e0,&local_1e0);
        if (iVar9 == -1) {
          puVar10 = (undefined4 *)FUN_016d2bc8();
          local_60 = (int ***********)*puVar10;
          if (local_60 != (int ***********)&DAT_00000004) {
LAB_007ebc78:
                    /* WARNING: Subroutine does not return */
            FUN_015f3600(&local_60,&DAT_005688c0,0,&DAT_018aadd0);
          }
          bVar29 = CARRY4((uint)pppppppppppiVar15,(uint)local_1e0);
          pppppppppppiVar15 = (int ***********)((int)pppppppppppiVar15 + (int)local_1e0);
          iVar5 = iVar5 + ((int)local_1e0 >> 0x1f) + (uint)bVar29;
          local_60 = (int ***********)&DAT_00000004;
          pppppppppppiVar22 = local_1dc;
          if (0 < (int)local_1dc) goto LAB_007eb3f0;
        }
        else {
          pppppppppppiVar22 = (int ***********)0x0;
        }
      } while (pppppppppppiVar15 != (int ***********)0x0 || iVar5 != 0);
      goto LAB_007ea2ac;
    }
    uVar6 = local_22c;
    if (pppppppppppiVar22 == (int ***********)&DAT_3b9aca00) goto LAB_007ea6fc;
    local_230 = &DAT_3b9aca00;
    local_208 = pppppppppppiVar19;
    local_204 = pppppppppppiVar26;
    local_200 = pppppppppppiVar22;
    if (puVar2 != &DAT_3b9aca00) {
      FUN_016dd1aa(&local_1e0,auStack_278,0x48);
      local_194 = uVar6;
      local_198 = puVar2;
      FUN_00714b60(&local_1e0,extraout_r1,local_1c0,0);
      FUN_008e7734(&local_1e0);
    }
LAB_007ea434:
    FUN_008ac610(&local_1e0,local_288);
    if (local_1e0 != (int ***********)&DAT_80000000) {
      local_60 = local_1e0;
      local_5c = local_1dc;
      local_58 = local_1d8;
      iStack_54 = local_1d4;
      pppppppppppiStack_50 = local_1d0;
      local_4c = local_1cc;
      uStack_48 = uStack_1c8;
      uStack_44 = uStack_1c4;
      uStack_40 = local_1c0;
      uStack_3c = uStack_1bc;
      local_38 = local_1b8;
      uStack_34 = uStack_1b4;
      uStack_30 = uStack_1b0;
      uStack_2c = uStack_1ac;
      uStack_28 = uStack_1a8;
      FUN_015f3b0c(&local_1e0,1);
      pppppppppppiVar21 = local_1d8;
      pppppppppppiVar16 = local_1dc;
      pppppppppppiVar15 = local_1e0;
      local_174 = local_1dc;
      local_178 = local_1e0;
      local_170 = local_1d8;
      local_c4 = local_1dc;
      local_c8 = local_1e0;
      local_c0 = local_1d8;
      FUN_015f3c24(&local_1e0,&local_208,&local_c8);
      if (((uint)local_1e0 & 1) == 0) {
        bVar29 = local_1d8 == (int ***********)0x0 && local_1d4 == 0;
        if (local_1d8 == (int ***********)0x0 && local_1d4 == 0) {
          bVar29 = local_1d0 == (int ***********)0x0;
        }
        pppppppppppiVar15 = local_1d0;
        pppppppppppiVar16 = local_1d8;
        iVar5 = local_1d4;
        if (!bVar29) {
LAB_007eaa00:
          do {
            local_1e0 = (int ***********)0x7fffffff;
            if (pppppppppppiVar16 < (int ***********)0x7fffffff) {
              local_1e0 = pppppppppppiVar16;
            }
            if (iVar5 != 0) {
              local_1e0 = (int ***********)0x7fffffff;
            }
            bVar29 = pppppppppppiVar16 < local_1e0;
            pppppppppppiVar16 = (int ***********)((int)pppppppppppiVar16 - (int)local_1e0);
            iVar5 = iVar5 - (uint)bVar29;
            local_1dc = pppppppppppiVar15;
            iVar9 = FUN_016e041a(&local_1e0,&local_1e0);
            pppppppppppiVar15 = (int ***********)0x0;
            if (iVar9 == -1) {
              puVar10 = (undefined4 *)FUN_016d2bc8();
              local_c8 = (int ***********)*puVar10;
              if (local_c8 != (int ***********)&DAT_00000004) {
                    /* WARNING: Subroutine does not return */
                FUN_015f3600(&local_c8,&DAT_005688c0,0,&DAT_018aadd0);
              }
              bVar29 = CARRY4((uint)pppppppppppiVar16,(uint)local_1e0);
              pppppppppppiVar16 = (int ***********)((int)pppppppppppiVar16 + (int)local_1e0);
              iVar5 = iVar5 + ((int)local_1e0 >> 0x1f) + (uint)bVar29;
              local_c8 = (int ***********)&DAT_00000004;
              pppppppppppiVar15 = local_1dc;
              if (0 < (int)local_1dc) goto LAB_007eaa00;
            }
          } while (pppppppppppiVar16 != (int ***********)0x0 || iVar5 != 0);
        }
      }
      else {
        DataMemoryBarrier(0xb);
        if (DAT_018d8068 == 0) {
          local_c8 = pppppppppppiVar19;
          local_c4 = pppppppppppiVar26;
          local_c0 = pppppppppppiVar22;
          FUN_015f3c24(&local_1e0,&local_178,&local_c8);
          if (((uint)local_1e0 & 1) != 0) {
            if ((DAT_018d9130 < 5) &&
               (((DAT_018d962c - 1 < 2 ||
                 ((DAT_018d962c != 0 && (cVar3 = FUN_0169ac90(&DAT_018d9624), cVar3 != '\0')))) &&
                (iVar5 = FUN_016949d8(DAT_018d9624), iVar5 != 0)))) {
              if (*(int *)(DAT_018d9624 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185e358);
              }
              local_100 = (undefined4 *)(DAT_018d9624 + 0x1c);
              local_1e0 = (int ***********)*local_100;
              local_1dc = *(int ************)(DAT_018d9624 + 0x20);
              local_1d8 = *(int ************)(DAT_018d9624 + 0x24);
              local_1d4 = *(int *)(DAT_018d9624 + 0x28);
              local_c4 = (int ***********)&local_114;
              local_c8 = (int ***********)&local_1e0;
              local_1d0 = (int ***********)0x0;
              local_114 = (int ***********)&DAT_00570155;
              local_c0 = (int ***********)&DAT_018abb78;
              local_110 = (int ***********)&local_88;
              local_84 = (int ************)&DAT_006043a8;
              local_88 = &local_218;
              local_104 = (int ************)&DAT_00000001;
              local_108 = &local_c8;
              FUN_007c5aa0(&local_108);
            }
            FUN_007c5b70(&local_60);
            goto LAB_007eb704;
          }
          FUN_009b0c18(local_280[0],&DAT_00567e0c,4,local_1d4,local_1d8,local_1d4,local_1d0);
        }
        local_208 = pppppppppppiVar15;
        local_200 = pppppppppppiVar21;
        local_204 = pppppppppppiVar16;
        pppppppppppiVar26 = pppppppppppiVar16;
        pppppppppppiVar22 = pppppppppppiVar21;
        pppppppppppiVar19 = pppppppppppiVar15;
      }
      FUN_008e73b8(&local_168,&iStack_54,pppppppppppiVar19,pppppppppppiVar26,pppppppppppiVar22);
      pppppppppppiVar26 = pppppppppppiStack_124;
      pppppppppppiVar19 = local_128;
      local_2dc = local_120;
      if (local_230 != &DAT_3b9aca00) {
        FUN_008e7734(auStack_278);
      }
      FUN_016dd1aa(auStack_278,&local_168,0x50);
      pppppppppppiVar15 = local_5c;
      pppppppppppiVar22 = local_60;
      local_1e0 = local_60;
      local_1dc = local_5c;
      local_1d8 = local_58;
      local_1d4 = iStack_54;
      local_1d0 = pppppppppppiStack_50;
      local_1cc = local_4c;
      uStack_1c8 = uStack_48;
      uStack_1c4 = uStack_44;
      local_1c0 = uStack_40;
      uStack_1bc = uStack_3c;
      local_1b8 = local_38;
      uStack_1b4 = uStack_34;
      uStack_1b0 = uStack_30;
      uStack_1ac = uStack_2c;
      uStack_1a8 = uStack_28;
      local_c0 = local_60;
      local_c4 = local_5c;
      pppppppppppiVar16 = local_5c + (int)local_58 * 3;
      local_c8 = local_5c;
      local_bc = pppppppppppiVar16;
      if (local_58 != (int ***********)0x0) {
        uVar20 = (int)local_58 * 0xc;
        pppppppppppiVar17 = local_5c + 4;
        pppppppppppiVar21 = local_5c;
LAB_007ea9b0:
        pppppppppppiVar27 = pppppppppppiVar21 + 3;
        uVar20 = uVar20 - 0xc;
        ppppppppppiVar25 = *pppppppppppiVar21;
        if (ppppppppppiVar25 != (int **********)&DAT_80000000) {
          ppppppppppiVar28 = pppppppppppiVar21[1];
          FUN_01585110(&local_88,auStack_2c8,ppppppppppiVar28,pppppppppppiVar21[2]);
          if ((char)local_88 == '\x04') break;
          uVar1 = *(undefined2 *)((uint)&local_88 | 1);
          *(undefined1 *)((undefined2 *)((uint)&local_108 | 1) + 1) =
               *(undefined1 *)((undefined2 *)((uint)&local_88 | 1) + 1);
          *(undefined2 *)((uint)&local_108 | 1) = uVar1;
          local_104 = local_84;
          local_108 = (int ************)CONCAT31(local_108._1_3_,(char)local_88);
          local_c4 = pppppppppppiVar27;
          ppppppppppiVar18 = (int **********)FUN_0080afd8(&local_108);
          if (ppppppppppiVar25 != (int **********)0x0) {
            thunk_FUN_016d3fb4(ppppppppppiVar28);
          }
          for (uVar20 = uVar20 / 0xc; uVar20 != 0; uVar20 = uVar20 - 1) {
            if (pppppppppppiVar17[-1] != (int **********)0x0) {
              thunk_FUN_016d3fb4(*pppppppppppiVar17);
            }
            pppppppppppiVar17 = pppppppppppiVar17 + 3;
          }
          goto joined_r0x007ead80;
        }
        goto LAB_007ead8c;
      }
      goto LAB_007ead94;
    }
    if ((char)local_1dc != '\0') {
      if ((4 < DAT_018d9130) || (DAT_018d9614 == '\0')) goto LAB_007eb704;
      if (DAT_018d9614 == '\x01') {
LAB_007eb544:
        DataMemoryBarrier(0xb);
        pppppppiVar13 = DAT_018daa78;
        if (DAT_018dd984 != 2) {
          pppppppiVar13 = (int *******)&DAT_018ae394;
        }
        pcVar4 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, DAT_018daa70 != 0)) {
          pcVar4 = DAT_018daa74 + ((int)pppppppiVar13[2] - 1U & 0xfffffff8) + 8;
        }
        iVar5 = (*(code *)pppppppiVar13[5])(pcVar4,DAT_018d960c);
        if (iVar5 == 0) goto LAB_007eb704;
      }
      else if (DAT_018d9614 != '\x02') {
        cVar3 = FUN_0169ac90(&DAT_018d960c);
        if (cVar3 == '\0') goto LAB_007eb704;
        if (cVar3 != '\x02') goto LAB_007eb544;
      }
      local_b4 = DAT_018d960c;
      if (*(int *)(DAT_018d960c + 0x20) != 0) {
        local_104 = *(int *************)(DAT_018d960c + 0x20);
        local_100 = *(undefined4 **)(DAT_018d960c + 0x24);
        local_fc = *(undefined4 *)(DAT_018d960c + 0x28);
        local_114 = (int ***********)&local_108;
        local_110 = &local_180;
        local_188 = (undefined4 *)(DAT_018d960c + 0x1c);
        local_108 = (int ************)*local_188;
        local_f8 = 0;
        local_180 = (int **********)&DAT_0057b757;
        local_10c = &DAT_018abb78;
        local_17c = &local_88;
        local_7c = &LAB_0100dcc4;
        local_80 = (undefined4 *)&DAT_0041319b;
        local_84 = (int ************)&DAT_006043a8;
        local_88 = &local_218;
        local_190 = &local_114;
        local_b8 = &local_190;
        local_18c = (int ************)&DAT_00000001;
        local_c4 = (int ***********)0x0;
        local_c8 = (int ***********)&DAT_00000001;
        DataMemoryBarrier(0xb);
        if (DAT_018dd984 == 2) {
          local_308 = DAT_018daa78;
        }
        pcVar4 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, DAT_018daa70 != 0)) {
          pcVar4 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
        }
        iVar5 = (*(code *)local_308[10])(pcVar4,&local_c8);
        if (iVar5 != 0) {
          (*(code *)local_308[0xb])(pcVar4,&local_c8);
        }
LAB_007eb704:
        if (local_218 != (int ***********)0x0) {
          thunk_FUN_016d3fb4(local_214);
        }
        if (local_230 != &DAT_3b9aca00) {
          FUN_008e7734(auStack_278);
        }
        FUN_007ee4c0(auStack_2c8);
        FUN_01639074(&local_2d8,local_2d0);
        if (local_2d8 != (int ***********)&SUB_00000002) {
          if (local_2d8 == (int ***********)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *local_2d4;
              bVar29 = (bool)hasExclusiveAccess(local_2d4);
            } while (!bVar29);
            *local_2d4 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01659344(local_2d4);
            }
          }
          else {
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *local_2d4;
              bVar29 = (bool)hasExclusiveAccess(local_2d4);
            } while (!bVar29);
            *local_2d4 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_016586fc(local_2d4);
            }
          }
        }
        if (*param_1 == 0) {
          piVar12 = (int *)param_1[1];
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar12;
            bVar29 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar29);
          *piVar12 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01659344(param_1[1]);
            return;
          }
        }
        else {
          piVar12 = (int *)param_1[1];
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar12;
            bVar29 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar29);
          *piVar12 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_016586fc(param_1[1]);
          }
        }
        return;
      }
      puVar14 = &DAT_0185e378;
      goto LAB_007ebcf0;
    }
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      FUN_009b0c18(local_280[0],&DAT_00342a98,7);
    }
    pppppppppppiVar15 = (int ***********)0x0;
    iVar5 = 0;
    pppppppppppiVar22 = (int ***********)&DAT_000f4240;
LAB_007ea4b4:
    do {
      local_c8 = (int ***********)0x7fffffff;
      if (pppppppppppiVar15 < (int ***********)0x7fffffff) {
        local_c8 = pppppppppppiVar15;
      }
      if (iVar5 != 0) {
        local_c8 = (int ***********)0x7fffffff;
      }
      bVar29 = pppppppppppiVar15 < local_c8;
      pppppppppppiVar15 = (int ***********)((int)pppppppppppiVar15 - (int)local_c8);
      iVar5 = iVar5 - (uint)bVar29;
      local_c4 = pppppppppppiVar22;
      iVar9 = FUN_016e041a(&local_c8,&local_c8);
      if (iVar9 == -1) {
        puVar10 = (undefined4 *)FUN_016d2bc8();
        local_108 = (int ************)*puVar10;
        if (local_108 != (int ************)&DAT_00000004) {
                    /* WARNING: Subroutine does not return */
          FUN_015f3600(&local_108,&DAT_005688c0,0,&DAT_018aadd0);
        }
        bVar29 = CARRY4((uint)pppppppppppiVar15,(uint)local_c8);
        pppppppppppiVar15 = (int ***********)((int)pppppppppppiVar15 + (int)local_c8);
        iVar5 = iVar5 + ((int)local_c8 >> 0x1f) + (uint)bVar29;
        local_108 = (int ************)&DAT_00000004;
        pppppppppppiVar22 = local_c4;
        if (0 < (int)local_c4) goto LAB_007ea4b4;
      }
      else {
        pppppppppppiVar22 = (int ***********)0x0;
      }
    } while (pppppppppppiVar15 != (int ***********)0x0 || iVar5 != 0);
  } while( true );
  if (ppppppppppiVar25 != (int **********)0x0) {
    thunk_FUN_016d3fb4(ppppppppppiVar28);
  }
  pppppppppppiVar17 = pppppppppppiVar17 + 3;
  pppppppppppiVar11 = pppppppppppiVar21 + 3;
  pppppppppppiVar21 = pppppppppppiVar27;
  if (pppppppppppiVar11 == pppppppppppiVar16) goto LAB_007ead88;
  goto LAB_007ea9b0;
LAB_007ead88:
  pppppppppppiVar27 = pppppppppppiVar16;
LAB_007ead8c:
  local_c4 = pppppppppppiVar27;
LAB_007ead94:
  pppppppppppiVar21 = local_c4 + 1;
  for (iVar5 = ((uint)((int)pppppppppppiVar16 - (int)local_c4) >> 2) * -0x55555555; iVar5 != 0;
      iVar5 = iVar5 + -1) {
    if (pppppppppppiVar21[-1] != (int **********)0x0) {
      thunk_FUN_016d3fb4(*pppppppppppiVar21);
    }
    pppppppppppiVar21 = pppppppppppiVar21 + 3;
  }
  ppppppppppiVar18 = (int **********)0x0;
joined_r0x007ead80:
  if (pppppppppppiVar22 != (int ***********)0x0) {
    thunk_FUN_016d3fb4(pppppppppppiVar15);
  }
  FUN_008e7734(&local_1d4);
  if (ppppppppppiVar18 == (int **********)0x0) goto LAB_007ea2ac;
  local_180 = ppppppppppiVar18;
  if ((4 < DAT_018d9130) || (DAT_018d9608 == '\0')) goto LAB_007eb074;
  if (DAT_018d9608 == '\x01') {
LAB_007eaea8:
    DataMemoryBarrier(0xb);
    pppppppiVar13 = DAT_018daa78;
    if (DAT_018dd984 != 2) {
      pppppppiVar13 = (int *******)&DAT_018ae394;
    }
    pcVar4 = s_SetGloba_00414c05;
    if ((DAT_018dd984 == 2) && (pcVar4 = DAT_018daa74, DAT_018daa70 != 0)) {
      pcVar4 = DAT_018daa74 + ((int)pppppppiVar13[2] - 1U & 0xfffffff8) + 8;
    }
    iVar5 = (*(code *)pppppppiVar13[5])(pcVar4,DAT_018d9600);
    if (iVar5 == 0) goto LAB_007eb074;
  }
  else if (DAT_018d9608 != '\x02') {
    cVar3 = FUN_0169ac90(&DAT_018d9600);
    if (cVar3 == '\0') goto LAB_007eb074;
    if (cVar3 != '\x02') goto LAB_007eaea8;
  }
  if (*(int *)(DAT_018d9600 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185e368);
  }
  local_b8 = (int *************)0x0;
  local_c4 = *(int ************)(DAT_018d9600 + 0x20);
  local_c0 = *(int ************)(DAT_018d9600 + 0x24);
  local_bc = *(int ************)(DAT_018d9600 + 0x28);
  local_108 = &local_c8;
  local_104 = (int ************)&local_190;
  local_80 = (undefined4 *)(DAT_018d9600 + 0x1c);
  local_c8 = (int ***********)*local_80;
  local_100 = (undefined4 *)&DAT_018abb78;
  local_18c = &local_114;
  local_190 = (int ************)&DAT_00342a7c;
  local_88 = (int ************)&local_108;
  local_110 = (int ***********)FUN_00604528;
  local_114 = &local_180;
  local_1d0 = (int ***********)&local_88;
  local_84 = (int ************)&DAT_00000001;
  local_1dc = (int ***********)0x0;
  local_1e0 = (int ***********)&DAT_00000001;
  DataMemoryBarrier(0xb);
  pcVar4 = s_SetGloba_00414c05;
  pppppppiVar13 = (int *******)&DAT_018ae394;
  if (DAT_018dd984 == 2) {
    pcVar4 = DAT_018daa74;
    pppppppiVar13 = DAT_018daa78;
    if (DAT_018daa70 != 0) {
      pcVar4 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
    }
  }
  local_1cc = DAT_018d9600;
  iVar5 = (*(code *)pppppppiVar13[10])(pcVar4,&local_1e0);
  if (iVar5 != 0) {
    (*(code *)pppppppiVar13[0xb])(pcVar4,&local_1e0);
  }
LAB_007eb074:
  (*(code *)**local_180)();
  goto LAB_007ea2ac;
}

