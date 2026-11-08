// FUN_01147750 @ 01147750 size=3128 calls_out=9 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x01148304) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01147750(int *param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  undefined4 *puVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  ushort *puVar25;
  int iVar26;
  ushort *puVar27;
  int *piVar28;
  uint uVar29;
  int local_120;
  int local_11c;
  int local_10c;
  int local_f8;
  int local_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar4 = *param_2;
  if (iVar4 != 0) {
    iVar11 = param_3[1];
    uVar15 = param_2[1];
    uVar18 = param_3[2];
    local_f4 = iVar4;
    uVar16 = uVar15;
    do {
      uVar1 = *(ushort *)(local_f4 + 0x192);
      piVar20 = (int *)(uint)uVar1;
      iVar23 = local_f4 + 0x10c;
      piVar22 = (int *)0xffffffff;
      iVar26 = (int)piVar20 * 0xc;
      iVar24 = iVar23;
      do {
        if (iVar26 == 0) {
          piVar22 = piVar20;
          goto LAB_01147824;
        }
        uVar13 = *(uint *)(iVar24 + 8);
        uVar29 = uVar13;
        if (uVar18 < uVar13) {
          uVar29 = uVar18;
        }
        iVar3 = FUN_016dd50a(iVar11,*(undefined4 *)(iVar24 + 4),uVar29);
        if (iVar3 == 0) {
          iVar3 = uVar18 - uVar13;
        }
        iVar26 = iVar26 + -0xc;
        piVar22 = (int *)((int)piVar22 + 1);
        iVar24 = iVar24 + 0xc;
      } while ((char)((0 < iVar3) - (iVar3 < 0)) == '\x01');
      if (0 < iVar3 == iVar3 < 0) {
        iVar26 = local_f4;
        param_2 = piVar22;
        if (*param_3 != 0) {
          thunk_FUN_016d3fb4(iVar11);
        }
        goto LAB_0114787c;
      }
LAB_01147824:
      if (uVar16 == 0) goto LAB_011478fc;
      uVar16 = uVar16 - 1;
      local_f4 = *(int *)(local_f4 + (int)piVar22 * 4 + 0x198);
    } while( true );
  }
  iVar4 = *param_3;
  iVar26 = param_3[1];
  if (iVar4 != -0x80000000) {
    iVar11 = param_3[2];
    piVar22 = (int *)thunk_FUN_016d4a50(0x198);
    if (piVar22 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x198);
    }
    *(undefined2 *)((int)piVar22 + 0x192) = 1;
    *param_2 = (int)piVar22;
    param_2[1] = 0;
    piVar22[0x42] = 0;
    piVar22[0x43] = iVar4;
    piVar22[0x44] = iVar26;
    piVar22[0x45] = iVar11;
    iVar4 = param_4[1];
    iVar11 = param_4[2];
    iVar26 = param_4[3];
    iVar24 = param_4[4];
    iVar23 = param_4[5];
    *piVar22 = *param_4;
    piVar22[1] = iVar4;
    piVar22[2] = iVar11;
    piVar22[3] = iVar26;
    piVar22[4] = iVar24;
    piVar22[5] = iVar23;
    goto LAB_011478e0;
  }
LAB_0114787c:
  piVar22 = (int *)(iVar26 + (int)param_2 * 0x18);
  iVar4 = piVar22[1];
  iVar11 = piVar22[2];
  iVar26 = piVar22[3];
  iVar24 = piVar22[4];
  iVar23 = piVar22[5];
  *param_1 = *piVar22;
  param_1[1] = iVar4;
  param_1[2] = iVar11;
  param_1[3] = iVar26;
  param_1[4] = iVar24;
  param_1[5] = iVar23;
  iVar4 = param_4[1];
  iVar11 = param_4[2];
  iVar26 = param_4[3];
  iVar24 = param_4[4];
  iVar23 = param_4[5];
  *piVar22 = *param_4;
  piVar22[1] = iVar4;
  piVar22[2] = iVar11;
  piVar22[3] = iVar26;
  piVar22[4] = iVar24;
  piVar22[5] = iVar23;
  return;
LAB_011478fc:
  iVar26 = param_3[1];
  iVar11 = *param_3;
  if (iVar11 != -0x80000000) {
    iVar24 = param_3[2];
    puVar27 = (ushort *)(local_f4 + 0x192);
    if (piVar20 < &DAT_0000000b) {
      piVar19 = (int *)((int)piVar22 + 1);
      piVar28 = (int *)(iVar23 + (int)piVar22 * 0xc);
      if (piVar20 < piVar19) {
        *piVar28 = iVar11;
        piVar28[1] = iVar26;
        piVar28[2] = iVar24;
        local_d0 = *param_4;
        iStack_cc = param_4[1];
        iStack_c8 = param_4[2];
        local_c4 = param_4[3];
        iStack_c0 = param_4[4];
        iStack_bc = param_4[5];
      }
      else {
        FUN_016dd52c(iVar23 + (int)piVar19 * 0xc,piVar28,((int)piVar20 - (int)piVar22) * 0xc);
        *piVar28 = iVar11;
        piVar28[1] = iVar26;
        piVar28[2] = iVar24;
        local_d0 = *param_4;
        iStack_cc = param_4[1];
        iStack_c8 = param_4[2];
        local_c4 = param_4[3];
        iStack_c0 = param_4[4];
        iStack_bc = param_4[5];
        FUN_016dd52c(local_f4 + (int)piVar19 * 0x18,local_f4 + (int)piVar22 * 0x18,
                     ((int)piVar20 - (int)piVar22) * 0x18);
      }
      piVar22 = (int *)(local_f4 + (int)piVar22 * 0x18);
      *piVar22 = local_d0;
      piVar22[1] = iStack_cc;
      piVar22[2] = iStack_c8;
      piVar22[3] = local_c4;
      piVar22[4] = iStack_c0;
      piVar22[5] = iStack_bc;
      *puVar27 = uVar1 + 1;
    }
    else {
      bVar2 = false;
      piVar20 = (int *)&DAT_00000004;
      if ((&DAT_00000004 < piVar22) && (piVar20 = piVar22, piVar22 != (int *)&DAT_00000005)) {
        if (piVar22 == (int *)&DAT_00000006) {
          piVar20 = (int *)&DAT_00000005;
          piVar22 = (int *)0x0;
        }
        else {
          piVar22 = (int *)((int)piVar22 + -7);
          piVar20 = (int *)&DAT_00000006;
        }
        bVar2 = true;
      }
      local_f8 = thunk_FUN_016d4a50(0x198);
      if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x198);
      }
      *(undefined2 *)(local_f8 + 0x192) = 0;
      *(undefined4 *)(local_f8 + 0x108) = 0;
      piVar28 = (int *)(local_f4 + (int)piVar20 * 0x18);
      piVar19 = (int *)(iVar23 + (int)piVar20 * 0xc);
      local_10c = *piVar19;
      uVar16 = (uint)*puVar27 + ~(uint)piVar20;
      *(undefined2 *)(local_f8 + 0x192) = (short)uVar16;
      local_120 = piVar19[1];
      local_11c = piVar19[2];
      local_d0 = *piVar28;
      iStack_cc = piVar28[1];
      iStack_c8 = piVar28[2];
      local_c4 = piVar28[3];
      iStack_c0 = piVar28[4];
      iStack_bc = piVar28[5];
      if (0xb < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar16,0xb,&DAT_018ac47c);
      }
      FUN_016dd1aa(local_f8 + 0x10c,iVar23 + ((int)piVar20 + 1) * 0xc,uVar16 * 0xc);
      FUN_016dd1aa(local_f8,local_f4 + (int)((int)piVar20 + 1) * 0x18,uVar16 * 0x18);
      *puVar27 = (ushort)piVar20;
      piVar20 = (int *)((uint)&local_98 | 4);
      *piVar20 = local_d0;
      piVar20[1] = iStack_cc;
      piVar20[2] = iStack_c8;
      piVar20[3] = local_c4;
      piVar20[4] = iStack_c0;
      piVar20[5] = iStack_bc;
      iVar23 = local_f8;
      if (!bVar2) {
        iVar23 = local_f4;
      }
      piVar19 = (int *)(iVar23 + 0x10c + (int)piVar22 * 0xc);
      uVar1 = *(ushort *)(iVar23 + 0x192);
      if (piVar22 < (int *)(uint)uVar1) {
        iVar3 = (int)(uint)uVar1 - (int)piVar22;
        FUN_016dd52c(piVar19 + 3,piVar19,iVar3 * 0xc);
        *piVar19 = iVar11;
        piVar19[1] = iVar26;
        piVar19[2] = iVar24;
        local_d0 = *param_4;
        iStack_cc = param_4[1];
        iStack_c8 = param_4[2];
        local_c4 = param_4[3];
        iStack_c0 = param_4[4];
        iStack_bc = param_4[5];
        iVar11 = iVar23 + (int)piVar22 * 0x18;
        FUN_016dd52c(iVar11 + 0x18,iVar11,iVar3 * 0x18);
      }
      else {
        *piVar19 = iVar11;
        piVar19[1] = iVar26;
        piVar19[2] = iVar24;
        local_d0 = *param_4;
        iStack_cc = param_4[1];
        iStack_c8 = param_4[2];
        local_c4 = param_4[3];
        iStack_c0 = param_4[4];
        iStack_bc = param_4[5];
      }
      piVar22 = (int *)(iVar23 + (int)piVar22 * 0x18);
      *piVar22 = local_d0;
      piVar22[1] = iStack_cc;
      piVar22[2] = iStack_c8;
      piVar22[3] = local_c4;
      piVar22[4] = iStack_c0;
      piVar22[5] = iStack_bc;
      *(ushort *)(iVar23 + 0x192) = uVar1 + 1;
      local_60 = local_98;
      iStack_5c = local_94;
      iStack_58 = local_90;
      local_54 = local_8c;
      iStack_50 = local_88;
      iStack_4c = iStack_84;
      iStack_48 = local_80;
      if (local_10c != -0x80000000) {
        if (*(int *)(local_f4 + 0x108) == 0) {
          uVar16 = 0;
        }
        else {
          puVar5 = (undefined4 *)((uint)&local_f0 | 4);
          uVar16 = 0;
          iVar11 = *(int *)(local_f4 + 0x108);
          do {
            iVar26 = iVar11;
            uVar18 = (uint)*(ushort *)(local_f4 + 400);
            local_b0 = *puVar5;
            uStack_ac = puVar5[1];
            uStack_a8 = puVar5[2];
            uStack_a4 = puVar5[3];
            uStack_a0 = puVar5[4];
            uStack_9c = puVar5[5];
            puVar27 = (ushort *)(iVar26 + 0x192);
            uVar29 = (uint)*puVar27;
            local_f0 = local_60;
            iStack_ec = iStack_5c;
            iStack_e8 = iStack_58;
            local_e4 = local_54;
            iStack_e0 = iStack_50;
            iStack_dc = iStack_4c;
            iStack_d8 = iStack_48;
            if (uVar29 < 0xb) {
              uVar16 = uVar18 + 1;
              piVar22 = (int *)(iVar26 + 0x10c + uVar18 * 0xc);
              if (uVar18 < uVar29) {
                iVar4 = uVar29 - uVar18;
                FUN_016dd52c(iVar26 + 0x10c + uVar16 * 0xc,piVar22,iVar4 * 0xc);
                *piVar22 = local_10c;
                piVar22[1] = local_120;
                piVar22[2] = local_11c;
                puVar21 = (undefined4 *)(iVar26 + uVar18 * 0x18);
                FUN_016dd52c(iVar26 + uVar16 * 0x18,puVar21,iVar4 * 0x18);
                uVar9 = puVar5[1];
                uVar10 = puVar5[2];
                uVar12 = puVar5[3];
                uVar14 = puVar5[4];
                uVar17 = puVar5[5];
                *puVar21 = *puVar5;
                puVar21[1] = uVar9;
                puVar21[2] = uVar10;
                puVar21[3] = uVar12;
                puVar21[4] = uVar14;
                puVar21[5] = uVar17;
                FUN_016dd52c(iVar26 + 0x198 + uVar18 * 4 + 8,iVar26 + 0x198 + uVar16 * 4,iVar4 * 4);
              }
              else {
                *piVar22 = local_10c;
                piVar22[1] = local_120;
                piVar22[2] = local_11c;
                puVar21 = (undefined4 *)(iVar26 + uVar18 * 0x18);
                uVar9 = puVar5[1];
                uVar10 = puVar5[2];
                uVar12 = puVar5[3];
                uVar14 = puVar5[4];
                uVar17 = puVar5[5];
                *puVar21 = *puVar5;
                puVar21[1] = uVar9;
                puVar21[2] = uVar10;
                puVar21[3] = uVar12;
                puVar21[4] = uVar14;
                puVar21[5] = uVar17;
              }
              *puVar27 = (ushort)(uVar29 + 1);
              *(int *)(iVar26 + uVar16 * 4 + 0x198) = local_f8;
              if (uVar16 < uVar29 + 2) {
                do {
                  iVar4 = *(int *)(iVar26 + 0x19c + uVar18 * 4);
                  uVar18 = uVar18 + 1;
                  *(short *)(iVar4 + 400) = (short)uVar18;
                  *(int *)(iVar4 + 0x108) = iVar26;
                } while (uVar29 + 1 != uVar18);
              }
              goto LAB_011478e0;
            }
            uVar13 = 4;
            if (uVar18 < 5) {
              bVar2 = false;
            }
            else if (uVar18 == 5) {
              bVar2 = false;
              uVar13 = 5;
            }
            else if (uVar18 == 6) {
              uVar18 = 0;
              uVar13 = 5;
              bVar2 = true;
            }
            else {
              uVar18 = uVar18 - 7;
              bVar2 = true;
              uVar13 = 6;
            }
            iVar24 = thunk_FUN_016d4a50(0x1c8);
            if (iVar24 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x1c8);
            }
            puVar25 = (ushort *)(iVar24 + 0x192);
            *puVar25 = 0;
            *(undefined4 *)(iVar24 + 0x108) = 0;
            uVar6 = (uint)*puVar27 + ~uVar13;
            piVar19 = (int *)(iVar26 + 0x10c + uVar13 * 0xc);
            iVar23 = *piVar19;
            iVar11 = piVar19[1];
            piVar22 = (int *)(iVar26 + uVar13 * 0x18);
            iVar3 = piVar19[2];
            *puVar25 = (ushort)uVar6;
            local_40 = *piVar22;
            iStack_3c = piVar22[1];
            iStack_38 = piVar22[2];
            iStack_34 = piVar22[3];
            iStack_30 = piVar22[4];
            iStack_2c = piVar22[5];
            if (0xb < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar6,0xb,&DAT_018ac47c);
            }
            FUN_016dd1aa(iVar24 + 0x10c,iVar26 + 0x10c + (uVar13 + 1) * 0xc,uVar6 * 0xc);
            FUN_016dd1aa(iVar24,iVar26 + (uVar13 + 1) * 0x18,uVar6 * 0x18);
            *puVar27 = (ushort)uVar13;
            local_88 = local_40;
            iStack_84 = iStack_3c;
            local_80 = iStack_38;
            iStack_7c = iStack_34;
            iStack_78 = iStack_30;
            iStack_74 = iStack_2c;
            uVar6 = (uint)*puVar25;
            iVar7 = uVar6 + 1;
            local_98 = iVar23;
            local_94 = iVar11;
            local_90 = iVar3;
            if (0xb < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,iVar7,0xc,&DAT_018ac48c);
            }
            if (uVar29 - uVar13 != iVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            uVar16 = uVar16 + 1;
            FUN_016dd1aa(iVar24 + 0x198,iVar26 + uVar13 * 4 + 0x19c,iVar7 * 4);
            uVar29 = 0;
            do {
              iVar11 = *(int *)(iVar24 + 0x198 + uVar29 * 4);
              *(short *)(iVar11 + 400) = (short)uVar29;
              *(int *)(iVar11 + 0x108) = iVar24;
              if (uVar6 <= uVar29) break;
              uVar29 = uVar29 + 1;
            } while (uVar29 <= uVar6);
            iVar3 = *piVar20;
            iVar7 = piVar20[1];
            local_60 = local_8c;
            iStack_5c = local_88;
            iStack_58 = iStack_84;
            local_54 = local_80;
            iStack_50 = iStack_7c;
            iStack_4c = iStack_78;
            iStack_48 = iStack_74;
            iVar11 = iVar24;
            if (!bVar2) {
              iVar11 = iVar26;
            }
            piVar22 = (int *)(iVar11 + 0x10c + uVar18 * 0xc);
            uVar13 = (uint)*(ushort *)(iVar11 + 0x192);
            uVar29 = uVar18 + 1;
            if (uVar18 < uVar13) {
              iVar8 = uVar13 - uVar18;
              FUN_016dd52c(iVar11 + 0x10c + uVar29 * 0xc,piVar22,iVar8 * 0xc);
              *piVar22 = local_10c;
              piVar22[1] = local_120;
              piVar22[2] = local_11c;
              puVar21 = (undefined4 *)(iVar11 + uVar18 * 0x18);
              FUN_016dd52c(iVar11 + uVar29 * 0x18,puVar21,iVar8 * 0x18);
              uVar9 = puVar5[1];
              uVar10 = puVar5[2];
              uVar12 = puVar5[3];
              uVar14 = puVar5[4];
              uVar17 = puVar5[5];
              *puVar21 = *puVar5;
              puVar21[1] = uVar9;
              puVar21[2] = uVar10;
              puVar21[3] = uVar12;
              puVar21[4] = uVar14;
              puVar21[5] = uVar17;
              FUN_016dd52c(iVar11 + 0x198 + uVar18 * 4 + 8,iVar11 + 0x198 + uVar29 * 4,iVar8 * 4);
            }
            else {
              puVar21 = (undefined4 *)(iVar11 + uVar18 * 0x18);
              *piVar22 = local_10c;
              piVar22[1] = local_120;
              piVar22[2] = local_11c;
              uVar9 = puVar5[1];
              uVar10 = puVar5[2];
              uVar12 = puVar5[3];
              uVar14 = puVar5[4];
              uVar17 = puVar5[5];
              *puVar21 = *puVar5;
              puVar21[1] = uVar9;
              puVar21[2] = uVar10;
              puVar21[3] = uVar12;
              puVar21[4] = uVar14;
              puVar21[5] = uVar17;
            }
            *(int *)(iVar11 + uVar29 * 4 + 0x198) = local_f8;
            *(ushort *)(iVar11 + 0x192) = (ushort)(uVar13 + 1);
            if (uVar29 < uVar13 + 2) {
              do {
                iVar8 = uVar18 * 4;
                uVar18 = uVar18 + 1;
                iVar8 = *(int *)(iVar11 + iVar8 + 0x19c);
                *(short *)(iVar8 + 400) = (short)uVar18;
                *(int *)(iVar8 + 0x108) = iVar11;
              } while (uVar13 + 1 != uVar18);
            }
            local_d0 = local_60;
            iStack_cc = iStack_5c;
            iStack_c8 = iStack_58;
            local_c4 = local_54;
            iStack_c0 = iStack_50;
            iStack_bc = iStack_4c;
            iStack_b8 = iStack_48;
            if (iVar23 == -0x80000000) goto LAB_011478e0;
            iVar11 = *(int *)(iVar26 + 0x108);
            local_120 = iVar3;
            local_11c = iVar7;
            local_10c = iVar23;
            local_f8 = iVar24;
            local_f4 = iVar26;
          } while (*(int *)(iVar26 + 0x108) != 0);
        }
        local_8c = local_60;
        local_88 = iStack_5c;
        iStack_84 = iStack_58;
        local_80 = local_54;
        iStack_7c = iStack_50;
        iStack_78 = iStack_4c;
        iStack_74 = iStack_48;
        local_f0 = local_60;
        iStack_ec = iStack_5c;
        iStack_e8 = iStack_58;
        local_e4 = local_54;
        iStack_e0 = iStack_50;
        iStack_dc = iStack_4c;
        iStack_d8 = iStack_48;
        local_98 = local_10c;
        local_94 = local_120;
        local_90 = local_11c;
        local_70 = local_f4;
        local_6c = uVar16;
        local_68 = local_f8;
        local_64 = uVar16;
        puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x1c8);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x1c8);
        }
        *(undefined2 *)((int)puVar5 + 0x192) = 0;
        puVar5[0x66] = iVar4;
        puVar5[0x42] = 0;
        if (0xfffffffe < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af438);
        }
        *(undefined4 **)(iVar4 + 0x108) = puVar5;
        *(undefined2 *)(iVar4 + 400) = 0;
        puVar21 = (undefined4 *)((uint)&local_f0 | 4);
        *param_2 = (int)puVar5;
        param_2[1] = uVar15 + 1;
        local_60 = *puVar21;
        iStack_5c = puVar21[1];
        iStack_58 = puVar21[2];
        local_54 = puVar21[3];
        iStack_50 = puVar21[4];
        iStack_4c = puVar21[5];
        if (uVar16 != uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
        }
        *(undefined2 *)((int)puVar5 + 0x192) = 1;
        puVar5[0x43] = local_98;
        puVar5[0x44] = local_94;
        puVar5[0x45] = local_90;
        uVar9 = puVar21[1];
        uVar10 = puVar21[2];
        uVar12 = puVar21[3];
        uVar14 = puVar21[4];
        uVar17 = puVar21[5];
        *puVar5 = *puVar21;
        puVar5[1] = uVar9;
        puVar5[2] = uVar10;
        puVar5[3] = uVar12;
        puVar5[4] = uVar14;
        puVar5[5] = uVar17;
        puVar5[0x67] = local_f8;
        *(undefined2 *)(local_f8 + 400) = 1;
        *(undefined4 **)(local_f8 + 0x108) = puVar5;
      }
    }
LAB_011478e0:
    iVar4 = param_2[2];
    *(undefined1 *)param_1 = 6;
    param_2[2] = iVar4 + 1;
    return;
  }
  goto LAB_0114787c;
}

