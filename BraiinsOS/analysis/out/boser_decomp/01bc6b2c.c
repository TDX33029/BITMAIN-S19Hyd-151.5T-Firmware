// FUN_01bc6b2c @ 01bc6b2c size=3304 calls_out=14 calls_in=4
// strings: 

void FUN_01bc6b2c(int param_1,int *param_2,int *param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar6;
  uint uVar7;
  int *extraout_r1_01;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  undefined8 uVar27;
  int local_d0;
  int *local_cc;
  uint local_c8;
  uint local_bc;
  uint local_b0;
  uint local_a0;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int iStack_6c;
  int local_68;
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
  
  iVar18 = *(int *)(param_1 + 4);
  local_2c = DAT_01d53560;
  iVar9 = param_1 + 0x70;
  uVar10 = param_4 + param_5;
  iVar11 = *(int *)(param_1 + 0xc);
  uVar12 = *(uint *)(param_1 + 200);
  uVar13 = uVar12;
  if (5 < uVar12) {
    uVar13 = 6;
  }
  if (uVar13 < 3) {
    uVar13 = 3;
  }
  pcVar14 = (code *)(&PTR_FUN_01d3b1e0)[(uVar13 - 3) + param_6 * 4];
  uVar13 = 0xfff;
  if (*(uint *)(param_1 + 0xcc) < 0xfff) {
    uVar13 = *(uint *)(param_1 + 0xcc);
  }
  if (uVar12 != 3) {
    uVar12 = 4;
  }
  local_98 = *(undefined4 *)(param_1 + 0x1c);
  piVar15 = *(int **)(param_1 + 0x84);
  piVar16 = *(int **)(param_1 + 0x80);
  FUN_01bed93e(&local_64,0,0x1c);
  puVar5 = *(undefined4 **)(param_1 + 0xd4);
  if (puVar5 == (undefined4 *)0x0) {
    FUN_01bed93e(&local_90,0,0x14);
  }
  else {
    local_90 = *puVar5;
    uStack_8c = puVar5[1];
    uStack_88 = puVar5[2];
    uStack_84 = puVar5[3];
    local_80 = puVar5[4];
  }
  local_74 = 0;
  local_7c = 0;
  local_78 = 0;
  FUN_01bc0948(&local_90,0,param_5);
  FUN_01bc5bbc(param_1 + 0x70,param_4,param_5,2);
  local_a0 = param_4;
  if (param_4 == iVar18 + iVar11) {
    local_a0 = param_4 + 1;
  }
  piVar6 = extraout_r1;
  local_b0 = param_4;
  do {
    while( true ) {
      while( true ) {
        if (uVar10 - 8 <= local_a0) {
          if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01be31f4(uVar10 - local_b0,piVar6,local_2c ^ DAT_01d53560,0);
          }
          return;
        }
        iVar18 = local_a0 - local_b0;
        local_94 = (*pcVar14)(piVar16,param_1,&local_98,local_a0,uVar10,param_3,iVar18 == 0,uVar12);
        FUN_01bc5884(&local_90,piVar16,&local_94,local_a0 - param_4,uVar10 - local_a0);
        iVar11 = local_94;
        if (local_94 != 0) break;
        local_a0 = local_a0 + 1;
        piVar6 = extraout_r1_00;
      }
      uVar24 = 0;
      piVar15[2] = 0;
      piVar15[3] = iVar18;
      iVar1 = FUN_01bc5660(iVar18,iVar9,2);
      *piVar15 = iVar1;
      piVar15[4] = *param_3;
      piVar15[5] = param_3[1];
      piVar15[6] = param_3[2];
      iVar11 = iVar11 + 0x1fffffff;
      uVar20 = piVar16[iVar11 * 2 + 1];
      if (uVar20 <= uVar13) break;
      iVar11 = piVar16[iVar11 * 2];
LAB_01bc7324:
      uVar26 = uVar24 + 2;
      FUN_01bc576c(&local_48,piVar15 + uVar24 * 7 + 4,iVar11,piVar15[uVar24 * 7 + 3] == 0);
      iVar18 = 0;
      *param_3 = local_48;
      param_3[1] = iStack_44;
      param_3[2] = local_40;
LAB_01bc7370:
      piVar6 = piVar15 + uVar26 * 7;
      *piVar6 = local_64;
      piVar6[1] = iVar11;
      piVar6[2] = uVar20;
      piVar6[3] = iVar18;
      piVar6[4] = local_54;
      piVar6[5] = (int)piStack_50;
      piVar6[6] = local_4c;
      piVar6 = piVar15 + uVar26 * 7;
      uVar23 = uVar26;
      while( true ) {
        piVar17 = piVar15 + uVar24 * 7;
        local_48 = *piVar17;
        iStack_44 = piVar17[1];
        local_40 = piVar17[2];
        iStack_3c = piVar17[3];
        local_38 = piVar17[4];
        iStack_34 = piVar17[5];
        iStack_30 = piVar17[6];
        iVar1 = piVar17[2];
        piVar6[3] = iStack_3c;
        if (iVar1 == 0) break;
        uVar23 = uVar23 - 1;
        piVar6[-7] = local_48;
        piVar6[-6] = iStack_44;
        piVar6[-5] = local_40;
        piVar6[-4] = iStack_3c;
        uVar24 = uVar24 - (iVar1 + iStack_3c);
        piVar6[-3] = local_38;
        piVar6[-2] = iStack_34;
        piVar6[-1] = iStack_30;
        piVar6 = piVar6 + -7;
      }
      piVar6 = piVar15 + uVar23 * 7;
      local_60 = iVar11;
      local_5c = uVar20;
      local_58 = iVar18;
      for (; uVar23 <= uVar26; uVar23 = uVar23 + 1) {
        uVar20 = piVar6[3];
        iVar11 = piVar6[2];
        local_a0 = local_b0 + uVar20;
        if (iVar11 != 0) {
          iVar18 = piVar6[1];
          FUN_01bc5a50(iVar9,uVar20,local_b0,iVar18,iVar11);
          if (uVar10 - 0x20 < local_a0) {
            FUN_01bc06f8(param_2[3],local_b0,local_a0,uVar10 - 0x20);
          }
          else {
            FUN_01bc0618(param_2[3],local_b0);
            if (0x10 < uVar20) {
              iVar1 = param_2[3];
              FUN_01bc0618(iVar1 + 0x10,local_b0 + 0x10);
              if (0x10 < (int)(uVar20 - 0x10)) {
                uVar21 = iVar1 + 0x20;
                uVar24 = local_b0;
                do {
                  FUN_01bc0618(uVar21,uVar24 + 0x20);
                  iVar25 = uVar21 + 0x10;
                  uVar21 = uVar21 + 0x20;
                  FUN_01bc0618(iVar25,uVar24 + 0x30);
                  uVar24 = uVar24 + 0x20;
                } while (uVar21 < iVar1 + uVar20);
              }
            }
          }
          param_2[3] = param_2[3] + uVar20;
          piVar17 = (int *)param_2[1];
          if (0xffff < uVar20) {
            param_2[9] = 1;
            param_2[10] = (int)piVar17 - *param_2 >> 3;
          }
          *(short *)(piVar17 + 1) = (short)uVar20;
          *piVar17 = iVar18;
          if (0xffff < iVar11 - 3U) {
            param_2[9] = 2;
            param_2[10] = (int)piVar17 - *param_2 >> 3;
          }
          *(short *)((int)piVar17 + 6) = (short)(iVar11 - 3U);
          param_2[1] = (int)(piVar17 + 2);
          local_b0 = local_b0 + uVar20 + iVar11;
          local_a0 = local_b0;
        }
        piVar6 = piVar6 + 7;
      }
      FUN_01bc55b4(iVar9,2);
      piVar6 = extraout_r1_01;
    }
    local_c8 = 1;
    piVar6 = piVar15;
    do {
      piVar6[7] = 0x40000000;
      piVar6[10] = local_c8 + iVar18;
      piVar6[9] = 0;
      local_c8 = local_c8 + 1;
      piVar6 = piVar6 + 7;
    } while (uVar12 != local_c8);
    uVar20 = uVar12;
    piVar6 = piVar16;
    do {
      uVar24 = piVar6[1];
      iVar25 = *piVar6;
      iVar1 = LZCOUNT(iVar25);
      iVar18 = 0x1f - iVar1;
      piVar17 = piVar15 + uVar20 * 7;
      for (; uVar20 <= uVar24; uVar20 = uVar20 + 1) {
        if (*(int *)(param_1 + 0xa8) == 1) {
          iVar19 = FUN_01bc556c(uVar20 - 3);
          iVar19 = iVar19 + (0x2f - iVar1) * 0x100;
        }
        else {
          iVar22 = *(int *)(param_1 + 0xa4);
          uVar2 = FUN_01bc556c(*(undefined4 *)(*(int *)(param_1 + 0x7c) + iVar18 * 4));
          iVar19 = FUN_01bc5734(uVar20 - 3,uVar2);
          uVar27 = FUN_01bc556c(*(undefined4 *)(*(int *)(param_1 + 0x78) + iVar19 * 4));
          iVar19 = (short)(ushort)(byte)(&DAT_0056398c)[iVar19] * 0x100 +
                   (((iVar22 + *(int *)(param_1 + 0xa0) + 0x33 + iVar18 * 0x100) -
                    (int)((ulonglong)uVar27 >> 0x20)) - (int)uVar27);
        }
        iVar3 = *piVar15;
        piVar17[2] = uVar20;
        piVar17[1] = iVar25;
        piVar17[3] = 0;
        iVar22 = FUN_01bc5660(0,iVar9,2);
        *piVar17 = iVar19 + iVar22 + iVar3;
        piVar17 = piVar17 + 7;
      }
      piVar6 = piVar6 + 2;
    } while (piVar6 != piVar16 + iVar11 * 2 + 2);
    uVar26 = uVar20 - 1;
    piVar15[uVar20 * 7] = 0x40000000;
    piVar6 = piVar15 + 0xb;
    uVar20 = local_a0;
    for (uVar24 = 1; local_bc = uVar20 + 1, uVar24 <= uVar26; uVar24 = uVar24 + 1) {
      iVar22 = piVar6[-8];
      iVar19 = piVar6[-0xb];
      iVar11 = FUN_01bc59a4(uVar20,iVar9,2);
      iVar18 = FUN_01bc5660(iVar22 + 1,iVar9,2);
      iVar1 = FUN_01bc5660(iVar22,iVar9,2);
      iVar25 = piVar6[-4];
      iVar1 = (iVar19 + iVar11 + iVar18) - iVar1;
      if (iVar1 <= iVar25) {
        iVar11 = piVar6[-1];
        local_48 = piVar6[-4];
        iStack_44 = piVar6[-3];
        local_40 = piVar6[-2];
        iStack_3c = piVar6[-1];
        iVar18 = piVar6[-3];
        iVar19 = piVar6[-2];
        local_38 = *piVar6;
        iStack_34 = piVar6[1];
        iStack_30 = piVar6[2];
        piVar6[-4] = piVar6[-0xb];
        piVar6[-3] = piVar6[-10];
        piVar6[-2] = piVar6[-9];
        piVar6[-1] = piVar6[-8];
        *piVar6 = piVar6[-7];
        piVar6[1] = piVar6[-6];
        piVar6[2] = piVar6[-5];
        piVar6[-1] = iVar22 + 1;
        piVar6[-4] = iVar1;
        if (iVar11 == 0) {
          iVar11 = FUN_01bc5660(1,iVar9,2);
          iVar3 = FUN_01bc5660(0,iVar9,2);
          if (((uint)(local_bc < uVar10) & (uint)(iVar11 - iVar3) >> 0x1f) != 0) {
            iVar4 = FUN_01bc59a4(local_bc,iVar9,2);
            iVar3 = iVar25 + (iVar11 - iVar3) + iVar4;
            iVar11 = FUN_01bc5660(iVar22 + 2,iVar9);
            iVar25 = FUN_01bc5660(iVar22 + 1,iVar9,2);
            if ((iVar3 < (iVar1 + iVar11 + iVar4) - iVar25) && (iVar3 < piVar6[3])) {
              FUN_01bc576c(&local_70,piVar15 + (uVar24 - iVar19) * 7 + 4,iVar18,
                           piVar15[(uVar24 - iVar19) * 7 + 3] == 0);
              piVar6[3] = local_48;
              piVar6[4] = iStack_44;
              piVar6[5] = local_40;
              piVar6[6] = iStack_3c;
              piVar6[7] = local_38;
              piVar6[8] = iStack_34;
              piVar6[9] = iStack_30;
              piVar6[6] = 1;
              piVar6[7] = local_70;
              piVar6[8] = iStack_6c;
              if (uVar26 < uVar24 + 1) {
                uVar26 = uVar24 + 1;
              }
              piVar6[9] = local_68;
              piVar6[3] = iVar3;
            }
          }
        }
      }
      iVar11 = piVar6[-1];
      if (iVar11 == 0) {
        FUN_01bc576c(&local_48,piVar15 + (uVar24 - piVar6[-2]) * 7 + 4,piVar6[-3],
                     piVar15[(uVar24 - piVar6[-2]) * 7 + 3] == 0);
        *piVar6 = local_48;
        piVar6[1] = iStack_44;
        piVar6[2] = local_40;
      }
      if (local_bc <= uVar10 - 8) {
        if (uVar24 == uVar26) break;
        iVar18 = FUN_01bc5660(0,iVar9,2);
        iVar1 = piVar6[-4];
        local_94 = (*pcVar14)(piVar16,param_1,&local_98,local_bc,uVar10,piVar6,iVar11 == 0,local_c8)
        ;
        FUN_01bc5884(&local_90,piVar16,&local_94,local_bc - param_4,uVar10 - local_bc);
        iVar11 = local_94;
        if (local_94 != 0) {
          iVar25 = local_94 + 0x1fffffff;
          uVar20 = piVar16[iVar25 * 2 + 1];
          if (uVar13 < uVar20) {
            iVar11 = piVar16[iVar25 * 2];
            goto LAB_01bc7324;
          }
          uVar23 = uVar24 + uVar20;
          if ((0xfff < uVar23) || (uVar10 <= local_a0 + uVar23)) {
            if (uVar20 == 0) {
              uVar26 = uVar23;
            }
            iVar11 = piVar16[iVar25 * 2];
            piVar6 = piVar16;
            if (uVar20 == 0) goto LAB_01bc7440;
            goto LAB_01bc7324;
          }
          local_d0 = 0;
          local_cc = piVar16;
          do {
            iVar25 = *local_cc;
            uVar23 = local_cc[1];
            uVar20 = uVar24 + uVar23;
            if (local_d0 == 0) {
              uVar21 = local_c8;
            }
            else {
              uVar21 = local_cc[-1] + 1;
            }
            piVar17 = piVar15 + uVar20 * 7;
            iVar22 = LZCOUNT(iVar25);
            iVar19 = 0x1f - iVar22;
            for (; uVar21 <= uVar23; uVar23 = uVar23 - 1) {
              if (*(int *)(param_1 + 0xa8) == 1) {
                iVar3 = FUN_01bc556c(uVar23 - 3);
                iVar3 = iVar3 + (0x2f - iVar22) * 0x100;
              }
              else {
                iVar3 = FUN_01bc556c(*(undefined4 *)(*(int *)(param_1 + 0x7c) + iVar19 * 4),
                                     *(undefined4 *)(param_1 + 0xa4));
                iVar4 = FUN_01bc5734(uVar23 - 3);
                uVar27 = FUN_01bc556c(*(undefined4 *)(*(int *)(param_1 + 0x78) + iVar4 * 4));
                iVar3 = (short)(ushort)(byte)(&DAT_0056398c)[iVar4] * 0x100 +
                        ((((int)((ulonglong)uVar27 >> 0x20) + *(int *)(param_1 + 0xa0) + 0x33 +
                          iVar19 * 0x100) - iVar3) - (int)uVar27);
              }
              iVar3 = iVar3 + iVar18 + iVar1;
              if ((uVar26 < uVar20) || (iVar3 < *piVar17)) {
                piVar8 = piVar15 + uVar26 * 7;
                for (uVar7 = uVar26; uVar7 < uVar20; uVar7 = uVar7 + 1) {
                  piVar8[7] = 0x40000000;
                  piVar8[10] = 1;
                  piVar8 = piVar8 + 7;
                }
                piVar17[2] = uVar23;
                if (uVar20 < uVar26) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = uVar20 - uVar26;
                }
                uVar26 = uVar26 + iVar4;
                piVar17[1] = iVar25;
                *piVar17 = iVar3;
                piVar17[3] = 0;
              }
              uVar20 = uVar20 - 1;
              piVar17 = piVar17 + -7;
            }
            local_d0 = local_d0 + 1;
            local_cc = local_cc + 2;
          } while (iVar11 != local_d0);
          piVar15[uVar26 * 7 + 7] = 0x40000000;
        }
      }
      piVar6 = piVar6 + 7;
      uVar20 = local_bc;
    }
    piVar17 = piVar15 + uVar26 * 7;
    uVar20 = piVar17[2];
    local_64 = *piVar17;
    local_60 = piVar17[1];
    local_5c = piVar17[2];
    local_58 = piVar17[3];
    local_54 = piVar17[4];
    piStack_50 = (int *)piVar17[5];
    local_4c = piVar17[6];
    piVar6 = piStack_50;
    if (uVar20 != 0) {
      iVar11 = piVar17[1];
      uVar24 = uVar26 - uVar20;
      iVar18 = piVar17[3];
      if (iVar18 == 0) goto LAB_01bc7324;
      uVar24 = uVar24 - iVar18;
      uVar26 = uVar24 + 2;
      *param_3 = local_54;
      param_3[1] = (int)piStack_50;
      param_3[2] = local_4c;
      piVar15[uVar26 * 7 + 2] = 0;
      piVar15[uVar26 * 7 + 3] = iVar18;
      piVar15[uVar26 * 7 + -7] = local_64;
      piVar15[uVar26 * 7 + -6] = iVar11;
      piVar15[uVar26 * 7 + -5] = uVar20;
      piVar15[uVar26 * 7 + -4] = iVar18;
      piVar15[uVar26 * 7 + -3] = local_54;
      piVar15[uVar26 * 7 + -2] = (int)piStack_50;
      piVar15[uVar26 * 7 + -1] = local_4c;
      goto LAB_01bc7370;
    }
LAB_01bc7440:
    local_a0 = local_a0 + uVar26;
  } while( true );
}

