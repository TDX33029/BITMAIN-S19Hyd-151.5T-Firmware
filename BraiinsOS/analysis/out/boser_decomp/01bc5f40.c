// FUN_01bc5f40 @ 01bc5f40 size=3028 calls_out=14 calls_in=3
// strings: 

void FUN_01bc5f40(int param_1,int *param_2,int *param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *extraout_r1_01;
  int extraout_r2;
  int extraout_r2_00;
  int *extraout_r2_01;
  int *piVar7;
  int *extraout_r2_02;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int extraout_r3;
  uint uVar17;
  int extraout_r3_00;
  int *piVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  undefined8 uVar25;
  int local_c4;
  uint local_c0;
  uint local_b8;
  uint local_a4;
  uint local_98;
  uint local_94;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int *piStack_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  uint local_2c;
  
  iVar19 = *(int *)(param_1 + 4);
  local_2c = DAT_01d53560;
  iVar8 = param_1 + 0x70;
  piVar24 = *(int **)(param_1 + 0x84);
  uVar9 = param_4 + param_5;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar11 = *(uint *)(param_1 + 200);
  uVar12 = uVar11;
  if (5 < uVar11) {
    uVar12 = 6;
  }
  if (uVar12 < 3) {
    uVar12 = 3;
  }
  pcVar13 = (code *)(&PTR_FUN_01d3b1e0)[(uVar12 - 3) + param_6 * 4];
  uVar12 = 0xfff;
  if (*(uint *)(param_1 + 0xcc) < 0xfff) {
    uVar12 = *(uint *)(param_1 + 0xcc);
  }
  if (uVar11 != 3) {
    uVar11 = 4;
  }
  local_8c = *(undefined4 *)(param_1 + 0x1c);
  piVar14 = *(int **)(param_1 + 0x80);
  FUN_01bed93e(&local_64,0,0x1c);
  puVar3 = *(undefined4 **)(param_1 + 0xd4);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_01bed93e(&local_84,0,0x14);
  }
  else {
    local_84 = *puVar3;
    uStack_80 = puVar3[1];
    uStack_7c = puVar3[2];
    uStack_78 = puVar3[3];
    local_74 = puVar3[4];
  }
  local_68 = 0;
  local_70 = 0;
  local_6c = 0;
  FUN_01bc0948(&local_84,0,param_5);
  FUN_01bc5bbc(param_1 + 0x70,param_4,param_5,0);
  local_98 = param_4;
  if (param_4 == iVar19 + iVar10) {
    local_98 = param_4 + 1;
  }
  piVar4 = extraout_r1;
  local_a4 = param_4;
  do {
    while( true ) {
      while( true ) {
        if (uVar9 - 8 <= local_98) {
          if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01be31f4(uVar9 - local_a4,piVar4,local_2c ^ DAT_01d53560,0);
          }
          return;
        }
        iVar10 = local_98 - local_a4;
        local_88 = (*pcVar13)(piVar14,param_1,&local_8c,local_98,uVar9,param_3,iVar10 == 0,uVar11);
        FUN_01bc5884(&local_84,piVar14,&local_88,local_98 - param_4,uVar9 - local_98);
        if (local_88 != 0) break;
        local_98 = local_98 + 1;
        piVar4 = extraout_r1_00;
      }
      piVar24[2] = 0;
      iVar20 = local_88 + 0x1fffffff;
      piVar24[3] = iVar10;
      iVar19 = FUN_01bc5660(iVar10,iVar8,0);
      *piVar24 = iVar19;
      piVar24[4] = *param_3;
      piVar24[5] = param_3[1];
      piVar24[6] = param_3[2];
      uVar21 = piVar14[iVar20 * 2 + 1];
      if (uVar21 <= uVar12) break;
      local_94 = 0;
      iVar10 = piVar14[iVar20 * 2];
LAB_01bc6620:
      FUN_01bc576c(&local_48,piVar24 + local_94 * 7 + 4,iVar10,piVar24[local_94 * 7 + 3] == 0);
      iVar19 = 0;
      *param_3 = local_48;
      param_3[1] = iStack_44;
      param_3[2] = local_40;
      local_b8 = local_94 + 2;
LAB_01bc6674:
      piVar4 = piVar24 + local_b8 * 7;
      *piVar4 = local_64;
      piVar4[1] = iVar10;
      piVar4[2] = uVar21;
      piVar4[3] = iVar19;
      piVar4[4] = local_54;
      piVar4[5] = (int)piStack_50;
      piVar4[6] = local_4c;
      piVar4 = piVar24 + local_b8 * 7;
      uVar15 = local_b8;
      while( true ) {
        piVar18 = piVar24 + local_94 * 7;
        local_48 = *piVar18;
        iStack_44 = piVar18[1];
        local_40 = piVar18[2];
        iStack_3c = piVar18[3];
        local_38 = piVar18[4];
        iStack_34 = piVar18[5];
        iStack_30 = piVar18[6];
        iVar20 = piVar18[2];
        piVar4[3] = iStack_3c;
        if (iVar20 == 0) break;
        uVar15 = uVar15 - 1;
        piVar4[-7] = local_48;
        piVar4[-6] = iStack_44;
        piVar4[-5] = local_40;
        piVar4[-4] = iStack_3c;
        local_94 = local_94 - (iVar20 + iStack_3c);
        piVar4[-3] = local_38;
        piVar4[-2] = iStack_34;
        piVar4[-1] = iStack_30;
        piVar4 = piVar4 + -7;
      }
      piVar4 = piVar24 + uVar15 * 7;
      local_60 = iVar10;
      local_5c = uVar21;
      local_58 = iVar19;
      for (; uVar15 <= local_b8; uVar15 = uVar15 + 1) {
        uVar21 = piVar4[3];
        iVar10 = piVar4[2];
        local_98 = local_a4 + uVar21;
        if (iVar10 != 0) {
          iVar19 = piVar4[1];
          FUN_01bc5a50(iVar8,uVar21,local_a4,iVar19,iVar10);
          if (uVar9 - 0x20 < local_98) {
            FUN_01bc06f8(param_2[3],local_a4,local_98,uVar9 - 0x20);
          }
          else {
            FUN_01bc0618(param_2[3],local_a4);
            if (0x10 < uVar21) {
              iVar20 = param_2[3];
              FUN_01bc0618(iVar20 + 0x10,local_a4 + 0x10);
              if (0x10 < (int)(uVar21 - 0x10)) {
                uVar23 = iVar20 + 0x20;
                uVar17 = local_a4;
                do {
                  FUN_01bc0618(uVar23,uVar17 + 0x20);
                  iVar16 = uVar23 + 0x10;
                  uVar23 = uVar23 + 0x20;
                  FUN_01bc0618(iVar16,uVar17 + 0x30);
                  uVar17 = uVar17 + 0x20;
                } while (uVar23 < iVar20 + uVar21);
              }
            }
          }
          param_2[3] = param_2[3] + uVar21;
          piVar18 = (int *)param_2[1];
          if (0xffff < uVar21) {
            param_2[9] = 1;
            param_2[10] = (int)piVar18 - *param_2 >> 3;
          }
          *(short *)(piVar18 + 1) = (short)uVar21;
          *piVar18 = iVar19;
          if (0xffff < iVar10 - 3U) {
            param_2[9] = 2;
            param_2[10] = (int)piVar18 - *param_2 >> 3;
          }
          *(short *)((int)piVar18 + 6) = (short)(iVar10 - 3U);
          param_2[1] = (int)(piVar18 + 2);
          local_a4 = local_a4 + uVar21 + iVar10;
          local_98 = local_a4;
        }
        piVar4 = piVar4 + 7;
      }
      FUN_01bc55b4(iVar8,0);
      piVar4 = extraout_r1_01;
    }
    local_c0 = 1;
    piVar4 = piVar24;
    do {
      piVar4[7] = 0x40000000;
      piVar4[10] = iVar10 + local_c0;
      piVar4[9] = 0;
      local_c0 = local_c0 + 1;
      piVar4 = piVar4 + 7;
    } while (uVar11 != local_c0);
    uVar21 = uVar11;
    piVar4 = piVar14;
    do {
      iVar10 = *piVar4;
      uVar15 = piVar4[1];
      iVar19 = LZCOUNT(iVar10);
      piVar18 = piVar24 + uVar21 * 7;
      for (; uVar21 <= uVar15; uVar21 = uVar21 + 1) {
        if (*(int *)(param_1 + 0xa8) == 1) {
          iVar16 = FUN_01bc5598(uVar21 - 3);
          iVar16 = iVar16 + (0x2f - iVar19) * 0x100;
        }
        else {
          iVar16 = FUN_01bc5598(*(undefined4 *)(*(int *)(param_1 + 0x7c) + (0x1f - iVar19) * 4),
                                *(int *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0xa4));
          iVar16 = (extraout_r2 + (0x1f - iVar19) * 0x100) - iVar16;
          if (0x13 < iVar19 - 0xcU) {
            iVar16 = iVar16 + (0xc - iVar19) * 0x200;
          }
          iVar16 = FUN_01bc5734(uVar21 - 3,iVar19 - 0xcU,iVar16);
          uVar25 = FUN_01bc5598(*(undefined4 *)(*(int *)(param_1 + 0x78) + iVar16 * 4));
          iVar16 = (short)(ushort)(byte)(&DAT_0056398c)[(int)((ulonglong)uVar25 >> 0x20)] * 0x100 +
                   ((extraout_r3 + extraout_r2_00) - (int)uVar25);
        }
        iVar1 = *piVar24;
        piVar18[1] = iVar10;
        piVar18[2] = uVar21;
        piVar18[3] = 0;
        iVar22 = FUN_01bc5660(0,iVar8,0);
        *piVar18 = iVar16 + iVar22 + iVar1;
        piVar18 = piVar18 + 7;
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != piVar14 + iVar20 * 2 + 2);
    uVar15 = uVar21 - 1;
    piVar24[uVar21 * 7] = 0x40000000;
    piVar4 = piVar24 + 0xb;
    uVar21 = local_98;
    for (local_94 = 1; local_b8 = uVar21 + 1, local_94 <= uVar15; local_94 = local_94 + 1) {
      iVar16 = piVar4[-0xb];
      iVar20 = piVar4[-8];
      iVar22 = iVar20 + 1;
      iVar10 = FUN_01bc59a4(uVar21,iVar8,0);
      iVar19 = FUN_01bc5660(iVar22,iVar8,0);
      iVar20 = FUN_01bc5660(iVar20,iVar8,0);
      iVar20 = (iVar10 + iVar19 + iVar16) - iVar20;
      if (iVar20 <= piVar4[-4]) {
        piVar4[-4] = piVar4[-0xb];
        piVar4[-3] = piVar4[-10];
        piVar4[-2] = piVar4[-9];
        piVar4[-1] = piVar4[-8];
        *piVar4 = piVar4[-7];
        piVar4[1] = piVar4[-6];
        piVar4[2] = piVar4[-5];
        piVar4[-1] = iVar22;
        piVar4[-4] = iVar20;
      }
      iVar10 = piVar4[-1];
      if (iVar10 == 0) {
        FUN_01bc576c(&local_48,piVar24 + (local_94 - piVar4[-2]) * 7 + 4,piVar4[-3],
                     piVar24[(local_94 - piVar4[-2]) * 7 + 3] == 0);
        *piVar4 = local_48;
        piVar4[1] = iStack_44;
        piVar4[2] = local_40;
      }
      if (local_b8 <= uVar9 - 8) {
        if (local_94 == uVar15) break;
        iVar19 = piVar4[-4];
        if (iVar19 + 0x80 < piVar4[3]) {
          iVar20 = FUN_01bc5660(0,iVar8);
          local_88 = (*pcVar13)(piVar14,param_1,&local_8c,local_b8,uVar9,piVar4,iVar10 == 0,local_c0
                               );
          FUN_01bc5884(&local_84,piVar14,&local_88,local_b8 - param_4,uVar9 - local_b8);
          iVar10 = local_88;
          if (local_88 != 0) {
            iVar16 = local_88 + 0x1fffffff;
            uVar21 = piVar14[iVar16 * 2 + 1];
            if (uVar12 < uVar21) {
              iVar10 = piVar14[iVar16 * 2];
              goto LAB_01bc6620;
            }
            uVar17 = local_94 + uVar21;
            if ((0xfff < uVar17) || (uVar9 <= local_98 + uVar17)) {
              if (uVar21 == 0) {
                uVar15 = uVar17;
              }
              iVar10 = piVar14[iVar16 * 2];
              piVar4 = piVar14;
              if (uVar21 == 0) goto LAB_01bc6744;
              goto LAB_01bc6620;
            }
            local_c4 = 0;
            piVar18 = piVar14;
            do {
              iVar16 = *piVar18;
              uVar21 = piVar18[1];
              if (local_c4 == 0) {
                uVar17 = local_c0;
              }
              else {
                uVar17 = piVar18[-1] + 1;
              }
              uVar23 = local_94 + uVar21;
              iVar22 = LZCOUNT(iVar16);
              piVar5 = piVar24 + uVar23 * 7;
              for (; uVar17 <= uVar21; uVar21 = uVar21 - 1) {
                if (*(int *)(param_1 + 0xa8) == 1) {
                  iVar1 = FUN_01bc5598(uVar21 - 3,1,piVar5);
                  iVar1 = iVar1 + (0x2f - iVar22) * 0x100;
                  piVar7 = extraout_r2_01;
                }
                else {
                  uVar25 = FUN_01bc5598(*(undefined4 *)
                                         (*(int *)(param_1 + 0x7c) + (0x1f - iVar22) * 4),
                                        *(undefined4 *)(param_1 + 0xa4),piVar5);
                  iVar1 = ((int)((ulonglong)uVar25 >> 0x20) + (0x1f - iVar22) * 0x100) - (int)uVar25
                  ;
                  if (0x13 < iVar22 - 0xcU) {
                    iVar1 = iVar1 + (0xc - iVar22) * 0x200;
                  }
                  iVar1 = FUN_01bc5734(uVar21 - 3,iVar1);
                  iVar6 = FUN_01bc5598(*(undefined4 *)(*(int *)(param_1 + 0x78) + iVar1 * 4));
                  iVar1 = (short)(ushort)(byte)(&DAT_0056398c)[iVar1] * 0x100 +
                          (extraout_r3_00 - iVar6);
                  piVar7 = extraout_r2_02;
                }
                iVar1 = iVar1 + iVar20 + iVar19;
                if ((uVar23 <= uVar15) && (*piVar7 <= iVar1)) break;
                piVar5 = piVar24 + uVar15 * 7;
                for (uVar2 = uVar15; uVar2 < uVar23; uVar2 = uVar2 + 1) {
                  piVar5[7] = 0x40000000;
                  piVar5[10] = 1;
                  piVar5 = piVar5 + 7;
                }
                piVar7[2] = uVar21;
                if (uVar23 < uVar15) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = uVar23 - uVar15;
                }
                uVar15 = uVar15 + iVar6;
                piVar7[1] = iVar16;
                uVar23 = uVar23 - 1;
                piVar7[3] = 0;
                piVar5 = piVar7 + -7;
                *piVar7 = iVar1;
              }
              piVar18 = piVar18 + 2;
              local_c4 = local_c4 + 1;
            } while (iVar10 != local_c4);
            piVar24[uVar15 * 7 + 7] = 0x40000000;
          }
        }
      }
      piVar4 = piVar4 + 7;
      uVar21 = local_b8;
    }
    piVar18 = piVar24 + uVar15 * 7;
    local_64 = *piVar18;
    local_60 = piVar18[1];
    local_5c = piVar18[2];
    local_58 = piVar18[3];
    local_54 = piVar18[4];
    piStack_50 = (int *)piVar18[5];
    local_4c = piVar18[6];
    uVar21 = piVar18[2];
    piVar4 = piStack_50;
    if (uVar21 != 0) {
      iVar10 = piVar18[1];
      local_94 = uVar15 - uVar21;
      iVar19 = piVar18[3];
      if (iVar19 == 0) goto LAB_01bc6620;
      *param_3 = local_54;
      param_3[1] = (int)piStack_50;
      param_3[2] = local_4c;
      local_94 = local_94 - iVar19;
      local_b8 = local_94 + 2;
      piVar24[local_b8 * 7 + 2] = 0;
      piVar24[local_b8 * 7 + 3] = iVar19;
      piVar24[local_b8 * 7 + -7] = local_64;
      piVar24[local_b8 * 7 + -6] = iVar10;
      piVar24[local_b8 * 7 + -5] = uVar21;
      piVar24[local_b8 * 7 + -4] = iVar19;
      piVar24[local_b8 * 7 + -3] = local_54;
      piVar24[local_b8 * 7 + -2] = (int)piStack_50;
      piVar24[local_b8 * 7 + -1] = local_4c;
      goto LAB_01bc6674;
    }
LAB_01bc6744:
    local_98 = local_98 + uVar15;
  } while( true );
}

