// FUN_007a9e2c @ 007a9e2c size=2068 calls_out=12 calls_in=1
// strings: manual_speed | manual_speed | manual_indefinite | manual_indefinite

/* WARNING: Type propagation algorithm not settling */

void FUN_007a9e2c(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined3 uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  char ****ppppcVar6;
  char **ppcVar7;
  char **ppcVar8;
  char **extraout_r1;
  char **extraout_r1_00;
  char **extraout_r1_01;
  char **extraout_r1_02;
  char **extraout_r1_03;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  int *piVar17;
  char ***pppcVar18;
  char ***pppcVar19;
  char *pcVar20;
  char ***pppcVar21;
  undefined4 *puVar22;
  char ***pppcVar23;
  int iVar24;
  undefined *puVar25;
  char ***local_c0;
  char ***local_bc;
  uint local_b8;
  char ***local_b4;
  byte local_b0;
  undefined2 uStack_af;
  undefined1 uStack_ad;
  char **ppcStack_ac;
  undefined1 uStack_a8;
  undefined2 local_a7;
  undefined1 local_a5;
  char **local_a4;
  uint local_a0;
  char ***local_9c;
  uint local_98;
  char ***local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  char ***local_78;
  char *local_74;
  char ****local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  char *local_3c;
  undefined4 local_38;
  char **local_34;
  undefined4 *local_30;
  char ****local_2c;
  undefined1 *local_28;
  
  FUN_0074c4ec(&local_c0,param_2,&DAT_005675d0,4);
  iVar14 = local_88;
  pppcVar19 = local_94;
  ppcVar7 = local_a4;
  uVar5 = local_a5;
  uVar4 = local_a7;
  pppcVar18 = local_bc;
  if (local_b8 == 2) goto LAB_007aa1f0;
  uVar2 = CONCAT12(uStack_ad,uStack_af);
  uVar11 = CONCAT13(ppcStack_ac._0_1_,uVar2);
  puVar25 = (undefined *)((uint)ppcStack_ac >> 8);
  if ((local_b8 & 1) == 0) {
    puVar25 = &UNK_0089ec35;
    uVar11 = 0x7f969014;
    uVar16 = 0xe104f480;
    if (local_90 == 0) {
      pppcVar23 = (char ***)&DAT_0000000f;
      pcVar13 = (char *)0x3b77ca7c;
    }
    else {
      pppcVar21 = local_94;
      do {
        if (pppcVar21[2] != (char **)0x0) {
          ppcVar8 = pppcVar21[1] + 2;
          iVar24 = (int)pppcVar21[2] * 0x18;
          do {
            pcVar9 = ppcVar8[2];
            pppcVar23 = (char ***)*ppcVar8;
            pcVar10 = ppcVar8[1];
            pcVar13 = ppcVar8[3];
            if ((pppcVar23 != (char ***)0x4f4800f || pcVar9 != (char *)0x89ec357f) ||
                (pcVar10 != (char *)0x969014e1 || pcVar13 != (char *)0x3b77ca7c)) {
              uVar16 = (uint)pppcVar23 >> 8 | (int)pcVar10 << 0x18;
              uVar11 = (uint)pcVar10 >> 8 | (int)pcVar9 << 0x18;
              puVar25 = (undefined *)((uint)pcVar9 >> 8);
              goto LAB_007aa018;
            }
            ppcVar8 = ppcVar8 + 6;
            iVar24 = iVar24 + -0x18;
          } while (iVar24 != 0);
        }
        pppcVar21 = pppcVar21 + 3;
      } while (pppcVar21 != local_94 + local_90 * 3);
      pcVar13 = (char *)0x3b77ca7c;
      pppcVar23 = (char ***)&DAT_0000000f;
      uVar16 = 0xe104f480;
      puVar25 = &UNK_0089ec35;
      uVar11 = 0x7f969014;
    }
  }
  else {
    uVar16 = (uint)local_b0 << 0x18 | (uint)local_b4 >> 8;
    pcVar13 = (char *)CONCAT31(CONCAT12(local_a5,local_a7),uStack_a8);
    pppcVar23 = local_b4;
  }
LAB_007aa018:
  ppcVar8 = (char **)(((uint)pppcVar23 & 0xff | uVar16 << 8) ^ 0x4f4800f |
                     ((int)puVar25 << 8 | uVar11 >> 0x18) ^ 0x89ec357f);
  if (ppcVar8 != (char **)0x0 ||
      ((uVar11 << 8 | uVar16 >> 0x18) != 0x969014e1 || pcVar13 != (char *)0x3b77ca7c)) {
    ppcVar8 = ppcStack_ac;
    uStack_a8 = (undefined1)local_a0;
    local_a7 = (undefined2)(local_a0 >> 8);
    local_a5 = (undefined1)(local_a0 >> 0x18);
    local_a4 = (char **)local_9c;
    local_a0 = local_98;
    uStack_af = uVar4;
    uStack_ad = uVar5;
    local_b8 = CONCAT31(uVar2,local_b0);
    ppcStack_ac = ppcVar7;
    local_88 = local_80;
    local_94 = (char ***)local_8c;
    local_98 = local_90;
    local_9c = pppcVar19;
    local_bc = local_b4;
    local_8c = local_84;
    local_90 = iVar14;
    local_b4 = (char ***)ppcVar8;
    FUN_00a7dac0(&local_78,param_2,local_c0,pppcVar18,&local_c0);
    if (local_78 != (char ***)0x2) {
      FUN_006af8cc(&local_78);
    }
    local_30 = (undefined4 *)0x4;
    local_34 = (char **)&DAT_005675d0;
    uVar3 = (uint)local_b4 >> 8;
    local_b4._0_1_ = (undefined1)(uVar11 >> 0x18);
    local_b4 = (char ***)CONCAT31((int3)uVar3,local_b4._0_1_);
    local_b8._0_1_ = (undefined1)(uVar16 >> 0x18);
    ppcStack_ac = (char **)0x4f4800f;
    local_6c = "";
    uStack_a8 = 0xe1;
    local_a7 = 0x9014;
    local_a5 = 0x96;
    local_78 = &local_34;
    local_a4 = (char **)0x89ec357f;
    local_a0 = 0x3b77ca7c;
    local_bc = (char ***)CONCAT31(local_bc._1_3_,(char)pppcVar23);
    local_c0 = (char ***)0x0;
    local_b0 = (byte)pcVar13;
    uStack_af = (undefined2)((uint)pcVar13 >> 8);
    uStack_ad = (undefined1)((uint)pcVar13 >> 0x18);
    local_74 = (char *)&DAT_0157d360;
    local_70 = &local_c0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005767ed,&local_78,&DAT_01880884);
  }
  if (local_b8 == 2) goto LAB_007aa1f0;
  if (local_a4 != (char **)0x0) {
    thunk_FUN_016d3fb4(local_a0);
    ppcVar8 = extraout_r1;
  }
  iVar14 = 0;
  while (iVar14 != local_84) {
    piVar17 = (int *)(local_88 + iVar14 * 0xc);
    puVar22 = (undefined4 *)(piVar17[1] + 4);
    for (iVar24 = piVar17[2]; iVar24 != 0; iVar24 = iVar24 + -1) {
      if (puVar22[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar22);
        ppcVar8 = extraout_r1_00;
      }
      puVar22 = puVar22 + 3;
    }
    iVar14 = iVar14 + 1;
    if (*piVar17 != 0) {
      thunk_FUN_016d3fb4(piVar17[1]);
      ppcVar8 = extraout_r1_01;
    }
  }
  if (local_8c != 0) {
    thunk_FUN_016d3fb4(local_88);
    ppcVar8 = extraout_r1_02;
  }
  cVar15 = '\x02';
  local_b8 = local_98;
  local_a0 = 0;
  iVar14 = local_90 * 0xc;
  local_bc = local_94;
  local_c0 = local_94;
  pppcVar18 = local_94;
  local_b4 = local_94 + local_90 * 3;
  while( true ) {
    uStack_ad = 0;
    uStack_af = 0;
    local_b0 = 0;
    if (local_94 == (char ***)0x0) break;
    pppcVar19 = pppcVar18;
    if (iVar14 != 0) {
      pppcVar19 = pppcVar18 + 3;
      ppcVar8 = *pppcVar18;
      local_bc = pppcVar19;
    }
    if (iVar14 == 0 || ppcVar8 == (char **)0x80000000) break;
    ppcVar7 = pppcVar18[1];
    uStack_a8 = SUB41(ppcVar8,0);
    local_a7 = (undefined2)((uint)ppcVar8 >> 8);
    local_a5 = (undefined1)((uint)ppcVar8 >> 0x18);
    local_b0 = (byte)ppcVar7;
    uStack_af = (undefined2)((uint)ppcVar7 >> 8);
    uStack_ad = (undefined1)((uint)ppcVar7 >> 0x18);
    local_a4 = ppcVar7 + (int)pppcVar18[2] * 6;
    ppcStack_ac = ppcVar7;
    if (pppcVar18[2] != (char **)0x0) {
      ppcStack_ac = ppcVar7 + 6;
      pppcVar18 = (char ***)*ppcVar7;
      if (pppcVar18 != (char ***)0x0) {
        pcVar20 = ppcVar7[1];
        pcVar13 = ppcVar7[5];
        pcVar9 = ppcVar7[2];
        pcVar10 = ppcVar7[3];
        pcVar12 = ppcVar7[4];
        (**(code **)(pcVar20 + 0xc))
                  (&local_78,(int)pppcVar18 + (*(int *)(pcVar20 + 8) - 1U & 0xfffffff8) + 8);
        if ((local_78 != (char ***)0x4f4800f || local_70 != (char ****)0x89ec357f) ||
            (local_74 != (char *)0x969014e1 || local_6c != (char *)0x3b77ca7c)) {
          local_78 = pppcVar18;
          local_74 = pcVar20;
          local_70 = (char ****)pcVar9;
          local_6c = pcVar10;
          local_68 = pcVar12;
          local_64 = pcVar13;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0035e2fc,99,&local_78,&DAT_01858978,&DAT_018a7188);
        }
        goto LAB_007aa360;
      }
    }
    FUN_00a864b0(&local_b0);
    iVar14 = iVar14 + -0xc;
    ppcVar8 = extraout_r1_03;
    pppcVar18 = pppcVar19;
  }
  goto LAB_007aa1d8;
LAB_007aa360:
  if (*pppcVar18 == (char **)0x1) goto code_r0x007aa36c;
  ClearExclusiveLocal();
  cVar15 = *(char *)(pppcVar18 + 2);
  DataMemoryBarrier(0xb);
  do {
    ppcVar7 = *pppcVar18;
    bVar1 = (bool)hasExclusiveAccess(pppcVar18);
  } while (!bVar1);
  *pppcVar18 = (char **)((int)ppcVar7 + -1);
  if (ppcVar7 == (char **)0x1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(pppcVar18);
  }
  goto LAB_007aa1d8;
code_r0x007aa36c:
  bVar1 = (bool)hasExclusiveAccess(pppcVar18);
  if (bVar1) goto code_r0x007aa36c;
  goto LAB_007aa360;
code_r0x007aa36c:
  *pppcVar18 = (char **)0x0;
  DataMemoryBarrier(0xb);
  cVar15 = *(char *)(pppcVar18 + 2);
  if (pppcVar18 != (char ***)0xffffffff) {
    pppcVar19 = pppcVar18 + 1;
    DataMemoryBarrier(0xb);
    do {
      ppcVar7 = *pppcVar19;
      bVar1 = (bool)hasExclusiveAccess(pppcVar19);
    } while (!bVar1);
    *pppcVar19 = (char **)((int)ppcVar7 + -1);
    if (ppcVar7 == (char **)0x1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(pppcVar18);
    }
  }
LAB_007aa1d8:
  FUN_006afa00(&local_c0);
  if (cVar15 != '\x02') {
    FUN_006b1d78(&local_78,param_2,"manual_speed",0xc);
    ppppcVar6 = local_70;
    pcVar13 = local_74;
    local_38 = 0xc;
    local_3c = "manual_speed";
    if (local_78 == (char ***)0x2) {
      FUN_006afb98(&local_78,param_2,"manual_indefinite",0x11);
      local_38 = 0x11;
      local_3c = "manual_indefinite";
      if (local_78 == (char ***)0x2) {
        *(undefined1 *)((int)param_1 + 9) = local_74._0_1_;
        *(char *)(param_1 + 2) = cVar15;
        *param_1 = (int)pcVar13;
        param_1[1] = (int)ppppcVar6;
        return;
      }
      local_c0 = local_78;
      local_bc = (char ***)local_74;
      local_b8 = (uint)local_70;
      local_b0 = (byte)local_68;
      uStack_af = (undefined2)((uint)local_68 >> 8);
      uStack_ad = (undefined1)((uint)local_68 >> 0x18);
      ppcStack_ac = (char **)local_64;
      uStack_a8 = (undefined1)uStack_60;
      local_a7 = (undefined2)((uint)uStack_60 >> 8);
      local_a5 = (undefined1)((uint)uStack_60 >> 0x18);
      local_a4 = (char **)uStack_5c;
      local_a0 = uStack_58;
    }
    else {
      local_c0 = local_78;
      local_bc = (char ***)local_74;
      local_b8 = (uint)local_70;
      local_b0 = (byte)local_68;
      uStack_af = (undefined2)((uint)local_68 >> 8);
      uStack_ad = (undefined1)((uint)local_68 >> 0x18);
      ppcStack_ac = (char **)local_64;
      uStack_a8 = (undefined1)uStack_60;
      local_a7 = (undefined2)((uint)uStack_60 >> 8);
      local_a5 = (undefined1)((uint)uStack_60 >> 0x18);
      local_a4 = (char **)uStack_5c;
      local_a0 = uStack_58;
    }
    local_28 = &LAB_00f9c598;
    local_2c = &local_c0;
    local_34 = &local_3c;
    local_30 = &DAT_0157d360;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005767ed,&local_34,&DAT_01880884);
  }
LAB_007aa1f0:
  iVar14 = FUN_0074d96c(9,&DAT_00342948,0x36);
  *param_1 = 2;
  param_1[1] = iVar14;
  return;
}

