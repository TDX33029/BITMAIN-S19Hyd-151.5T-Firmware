// FUN_00c6703c @ 00c6703c size=1464 calls_out=8 calls_in=0
// strings: 

void FUN_00c6703c(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int *****pppppiVar2;
  int *****pppppiVar3;
  int *****pppppiVar4;
  int iVar5;
  int iVar6;
  int *****pppppiVar7;
  int ***pppiVar8;
  int ****ppppiVar9;
  int ****extraout_r1;
  int ****extraout_r1_00;
  int ****extraout_r1_01;
  int ****extraout_r1_02;
  int ****extraout_r1_03;
  int ***pppiVar10;
  int **ppiVar11;
  int *****pppppiVar12;
  int ***pppiVar13;
  int ****ppppiVar14;
  int ***pppiVar15;
  int ***pppiVar16;
  int *****pppppiVar17;
  undefined1 uVar18;
  int ****ppppiVar19;
  int ***pppiVar20;
  int iVar21;
  int *****pppppiVar22;
  int ****ppppiVar23;
  int ****ppppiVar24;
  int ****ppppiVar25;
  int ****ppppiVar26;
  int *****local_a4;
  int *****local_a0;
  int ****local_9c;
  int *****local_98;
  int ****local_94;
  int ****local_90;
  int ****local_8c;
  int ****local_88;
  undefined4 local_84;
  int *****local_80;
  int local_7c;
  int *****local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  int ***local_60;
  int ***local_5c;
  int ***local_58;
  int ***pppiStack_54;
  int ***pppiStack_50;
  int ***local_4c;
  
  pppppiVar17 = (int *****)&local_a4;
  FUN_00c4f1ac(pppppiVar17,param_2,&DAT_00568d68,4);
  iVar6 = local_6c;
  iVar5 = local_70;
  iVar21 = local_74;
  pppppiVar4 = local_78;
  ppppiVar26 = local_88;
  pppppiVar3 = local_98;
  ppppiVar19 = local_9c;
  pppppiVar2 = local_a0;
  pppppiVar7 = local_a4;
  if (local_9c != (int ****)0x2) {
    ppppiVar9 = (int ****)0x3a79fddd;
    pppppiVar22 = local_98;
    ppppiVar23 = local_8c;
    ppppiVar24 = local_90;
    ppppiVar25 = local_94;
    if (((uint)local_9c & 1) == 0) {
      pppppiVar22 = (int *****)0x1a27b7d3;
      ppppiVar25 = (int ****)0x3a79fddd;
      ppppiVar24 = (int ****)0xc097ebc0;
      ppppiVar23 = (int ****)0x43c4d542;
      if (local_74 != 0) {
        pppppiVar12 = local_78;
        do {
          if (pppppiVar12[2] != (int ****)0x0) {
            pppppiVar17 = (int *****)((int)pppppiVar12[2] * 0x18);
            ppppiVar14 = pppppiVar12[1] + 2;
            do {
              pppppiVar22 = (int *****)*ppppiVar14;
              ppppiVar25 = (int ****)ppppiVar14[1];
              ppppiVar24 = (int ****)ppppiVar14[2];
              ppppiVar23 = (int ****)ppppiVar14[3];
              if ((pppppiVar22 != (int *****)0x1a27b7d3 || ppppiVar24 != (int ****)0xc097ebc0) ||
                  (ppppiVar25 != (int ****)0x3a79fddd || ppppiVar23 != (int ****)0x43c4d542))
              goto LAB_00c671fc;
              ppppiVar14 = ppppiVar14 + 6;
              pppppiVar17 = pppppiVar17 + -6;
            } while (pppppiVar17 != (int *****)0x0);
          }
          pppppiVar22 = (int *****)0x1a27b7d3;
          pppppiVar12 = pppppiVar12 + 3;
        } while (pppppiVar12 != local_78 + local_74 * 3);
        ppppiVar25 = (int ****)0x3a79fddd;
        ppppiVar24 = (int ****)0xc097ebc0;
        ppppiVar23 = (int ****)0x43c4d542;
      }
    }
LAB_00c671fc:
    if ((pppppiVar22 != (int *****)0x1a27b7d3 || ppppiVar24 != (int ****)0xc097ebc0) ||
        (ppppiVar25 != (int ****)0x3a79fddd || ppppiVar23 != (int ****)0x43c4d542)) {
      local_9c = local_94;
      local_98 = (int *****)local_90;
      local_94 = local_8c;
      local_8c = (int ****)local_84;
      local_88 = (int ****)local_80;
      local_84 = local_7c;
      local_a0 = pppppiVar3;
      local_90 = ppppiVar26;
      local_6c = local_64;
      local_70 = local_68;
      local_74 = iVar6;
      local_78 = (int *****)iVar5;
      local_80 = pppppiVar4;
      local_a4 = (int *****)ppppiVar19;
      local_7c = iVar21;
      FUN_00c4f340(&local_60,param_2,pppppiVar7,pppppiVar2,&local_a4);
      if (local_60 != (int ***)0x2) {
        FUN_00c4f594(&local_60);
      }
      param_1[4] = ppppiVar23;
      *param_1 = 0;
      param_1[1] = pppppiVar22;
      param_1[2] = ppppiVar25;
      param_1[5] = 0x1a27b7d3;
      param_1[3] = ppppiVar24;
      param_1[6] = 0x3a79fddd;
      param_1[7] = 0xc097ebc0;
      param_1[8] = 0x43c4d542;
      return;
    }
    if (local_9c != (int ****)0x2) {
      if (local_88 != (int ****)0x0) {
        thunk_FUN_016d3fb4(local_84);
        ppppiVar9 = extraout_r1;
      }
      iVar21 = 0;
      while (iVar21 != local_68) {
        pppppiVar17 = (int *****)(local_6c + iVar21 * 0xc);
        ppppiVar19 = pppppiVar17[1] + 1;
        for (ppppiVar26 = pppppiVar17[2]; ppppiVar26 != (int ****)0x0;
            ppppiVar26 = (int ****)((int)ppppiVar26 + -1)) {
          if (ppppiVar19[-1] != (int ***)0x0) {
            thunk_FUN_016d3fb4(*ppppiVar19);
            ppppiVar9 = extraout_r1_00;
          }
          ppppiVar19 = ppppiVar19 + 3;
        }
        iVar21 = iVar21 + 1;
        if (*pppppiVar17 != (int ****)0x0) {
          thunk_FUN_016d3fb4(pppppiVar17[1]);
          ppppiVar9 = extraout_r1_01;
        }
      }
      if (local_70 != 0) {
        thunk_FUN_016d3fb4(local_6c);
        ppppiVar9 = extraout_r1_02;
      }
      local_98 = local_78 + local_74 * 3;
      iVar21 = local_74 * 0xc;
      uVar18 = 0x27;
      local_9c = (int ****)local_7c;
      local_84 = 0;
      local_94 = (int ****)0x0;
      local_a0 = local_78;
      local_a4 = local_78;
      pppppiVar7 = local_78;
      while (local_94 = (int ****)0x0, local_78 != (int *****)0x0) {
        if (iVar21 != 0) {
          pppppiVar17 = pppppiVar7 + 3;
          ppppiVar9 = *pppppiVar7;
          local_a0 = pppppiVar17;
        }
        if (iVar21 == 0 || ppppiVar9 == (int ****)0x80000000) break;
        local_94 = pppppiVar7[1];
        local_88 = local_94 + (int)pppppiVar7[2] * 6;
        local_90 = local_94;
        local_8c = ppppiVar9;
        if (pppppiVar7[2] != (int ****)0x0) {
          local_90 = local_94 + 6;
          pppiVar16 = *local_94;
          if (pppiVar16 != (int ***)0x0) {
            pppiVar20 = local_94[1];
            pppiVar8 = local_94[5];
            pppiVar10 = local_94[2];
            pppiVar13 = local_94[3];
            pppiVar15 = local_94[4];
            (*(code *)pppiVar20[3])
                      (&local_60,(int)pppiVar16 + ((int)pppiVar20[2] - 1U & 0xfffffff8) + 8);
            if ((local_60 != (int ***)0x1a27b7d3 || local_58 != (int ***)0xc097ebc0) ||
                (local_5c != (int ***)0x3a79fddd || pppiStack_54 != (int ***)0x43c4d542)) {
              local_60 = pppiVar16;
              local_5c = pppiVar20;
              local_58 = pppiVar10;
              pppiStack_54 = pppiVar13;
              pppiStack_50 = pppiVar15;
              local_4c = pppiVar8;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_0035e2fc,99,&local_60,&DAT_01874580,&DAT_018a7188);
            }
            goto LAB_00c67518;
          }
        }
        FUN_00a864b0(&local_94);
        iVar21 = iVar21 + -0xc;
        local_94 = (int ****)0x0;
        pppppiVar7 = pppppiVar17;
        ppppiVar9 = extraout_r1_03;
      }
      goto LAB_00c67460;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0x27;
  return;
  while (bVar1 = (bool)hasExclusiveAccess(pppiVar16), !bVar1) {
LAB_00c67518:
    if (*pppiVar16 != (int **)0x1) {
      ClearExclusiveLocal();
      uVar18 = *(undefined1 *)(pppiVar16 + 2);
      DataMemoryBarrier(0xb);
      do {
        ppiVar11 = *pppiVar16;
        bVar1 = (bool)hasExclusiveAccess(pppiVar16);
      } while (!bVar1);
      *pppiVar16 = (int **)((int)ppiVar11 + -1);
      if (ppiVar11 == (int **)0x1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(pppiVar16);
      }
      goto LAB_00c67460;
    }
  }
  *pppiVar16 = (int **)0x0;
  DataMemoryBarrier(0xb);
  uVar18 = *(undefined1 *)(pppiVar16 + 2);
  if (pppiVar16 != (int ***)0xffffffff) {
    pppiVar8 = pppiVar16 + 1;
    DataMemoryBarrier(0xb);
    do {
      ppiVar11 = *pppiVar8;
      bVar1 = (bool)hasExclusiveAccess(pppiVar8);
    } while (!bVar1);
    *pppiVar8 = (int **)((int)ppiVar11 + -1);
    if (ppiVar11 == (int **)0x1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(pppiVar16);
    }
  }
LAB_00c67460:
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar18;
  FUN_006afa00(&local_a4);
  return;
}

