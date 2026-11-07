// FUN_00c42960 @ 00c42960 size=3056 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c42960(int *param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
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
  int iVar15;
  int iVar16;
  ushort *puVar17;
  undefined4 uVar18;
  int *piVar19;
  ushort *puVar20;
  int iVar21;
  undefined1 *puVar22;
  uint uVar23;
  int *piVar24;
  uint uVar25;
  undefined4 *puVar26;
  int *piVar27;
  int local_110;
  int local_10c;
  int local_108;
  int local_100;
  uint local_f8;
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
  
  local_f4 = *param_2;
  if (local_f4 != 0) {
    iVar15 = param_3[1];
    uVar25 = param_3[2];
    iVar16 = param_2[1];
    do {
      iVar11 = local_f4 + 0x10c;
      piVar24 = (int *)(uint)*(ushort *)(local_f4 + 0x192);
      piVar19 = (int *)0xffffffff;
      iVar21 = (int)piVar24 * 0xc;
      do {
        if (iVar21 == 0) goto LAB_00c42a24;
        uVar13 = *(uint *)(iVar11 + 8);
        uVar23 = uVar13;
        if (uVar25 < uVar13) {
          uVar23 = uVar25;
        }
        iVar3 = FUN_016dd50a(iVar15,*(undefined4 *)(iVar11 + 4),uVar23);
        if (iVar3 == 0) {
          iVar3 = uVar25 - uVar13;
        }
        iVar21 = iVar21 + -0xc;
        piVar19 = (int *)((int)piVar19 + 1);
        iVar11 = iVar11 + 0xc;
      } while ((char)((0 < iVar3) - (iVar3 < 0)) == '\x01');
      piVar24 = piVar19;
      if (0 < iVar3 == iVar3 < 0) {
        param_2 = piVar19;
        if (*param_3 != 0) {
          thunk_FUN_016d3fb4(iVar15);
        }
        goto LAB_00c42a7c;
      }
LAB_00c42a24:
      if (iVar16 == 0) goto LAB_00c42b04;
      iVar16 = iVar16 + -1;
      local_f4 = *(int *)(local_f4 + (int)piVar24 * 4 + 0x198);
    } while( true );
  }
  iVar15 = *param_3;
  local_f4 = param_3[1];
  if (iVar15 != -0x80000000) {
    iVar16 = param_3[2];
    piVar24 = (int *)thunk_FUN_016d4a50(0x198);
    if (piVar24 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x198);
    }
    *(undefined2 *)((int)piVar24 + 0x192) = 1;
    piVar24[0x45] = iVar16;
    *param_2 = (int)piVar24;
    param_2[1] = 0;
    piVar24[0x42] = 0;
    piVar24[0x43] = iVar15;
    piVar24[0x44] = local_f4;
    iVar15 = param_4[1];
    iVar16 = param_4[2];
    iVar21 = param_4[3];
    iVar11 = param_4[4];
    iVar3 = param_4[5];
    *piVar24 = *param_4;
    piVar24[1] = iVar15;
    piVar24[2] = iVar16;
    piVar24[3] = iVar21;
    piVar24[4] = iVar11;
    piVar24[5] = iVar3;
    goto LAB_00c42ae8;
  }
LAB_00c42a7c:
  piVar24 = (int *)(local_f4 + (int)param_2 * 0x18);
  iVar15 = piVar24[1];
  iVar16 = piVar24[2];
  iVar21 = piVar24[3];
  iVar11 = piVar24[4];
  iVar3 = piVar24[5];
  *param_1 = *piVar24;
  param_1[1] = iVar15;
  param_1[2] = iVar16;
  param_1[3] = iVar21;
  param_1[4] = iVar11;
  param_1[5] = iVar3;
  iVar15 = param_4[1];
  iVar16 = param_4[2];
  iVar21 = param_4[3];
  iVar11 = param_4[4];
  iVar3 = param_4[5];
  *piVar24 = *param_4;
  piVar24[1] = iVar15;
  piVar24[2] = iVar16;
  piVar24[3] = iVar21;
  piVar24[4] = iVar11;
  piVar24[5] = iVar3;
  return;
LAB_00c42b04:
  iVar16 = *param_3;
  if (iVar16 != -0x80000000) {
    puVar17 = (ushort *)(local_f4 + 0x192);
    uVar1 = *puVar17;
    puVar22 = (undefined1 *)(uint)uVar1;
    if (puVar22 < (undefined1 *)0xb) {
      puVar4 = (undefined1 *)((int)piVar24 + 1);
      piVar19 = (int *)(local_f4 + 0x10c + (int)piVar24 * 0xc);
      if (puVar22 < puVar4) {
        *piVar19 = iVar16;
        piVar19[1] = iVar15;
        piVar19[2] = uVar25;
        local_d0 = *param_4;
        iStack_cc = param_4[1];
        iStack_c8 = param_4[2];
        local_c4 = param_4[3];
        iStack_c0 = param_4[4];
        iStack_bc = param_4[5];
      }
      else {
        FUN_016dd52c(local_f4 + 0x10c + (int)puVar4 * 0xc,piVar19,
                     ((int)puVar22 - (int)piVar24) * 0xc);
        *piVar19 = iVar16;
        piVar19[1] = iVar15;
        piVar19[2] = uVar25;
        local_d0 = *param_4;
        iStack_cc = param_4[1];
        iStack_c8 = param_4[2];
        local_c4 = param_4[3];
        iStack_c0 = param_4[4];
        iStack_bc = param_4[5];
        FUN_016dd52c(local_f4 + (int)puVar4 * 0x18,local_f4 + (int)piVar24 * 0x18,
                     ((int)puVar22 - (int)piVar24) * 0x18);
      }
      piVar24 = (int *)(local_f4 + (int)piVar24 * 0x18);
      *piVar24 = local_d0;
      piVar24[1] = iStack_cc;
      piVar24[2] = iStack_c8;
      piVar24[3] = local_c4;
      piVar24[4] = iStack_c0;
      piVar24[5] = iStack_bc;
      *puVar17 = uVar1 + 1;
    }
    else {
      uVar23 = 4;
      if (&DAT_00000004 < piVar24) {
        if (piVar24 == (int *)&DAT_00000005) {
          bVar2 = false;
          uVar23 = 5;
        }
        else {
          if (piVar24 == (int *)&DAT_00000006) {
            uVar23 = 5;
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)((int)piVar24 + -7);
            uVar23 = 6;
          }
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
      local_108 = thunk_FUN_016d4a50(0x198);
      if (local_108 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x198);
      }
      *(undefined2 *)(local_108 + 0x192) = 0;
      *(undefined4 *)(local_108 + 0x108) = 0;
      piVar27 = (int *)(local_f4 + uVar23 * 0x18);
      piVar19 = (int *)(local_f4 + 0x10c + uVar23 * 0xc);
      local_100 = *piVar19;
      uVar13 = (uint)*puVar17 + ~uVar23;
      *(undefined2 *)(local_108 + 0x192) = (short)uVar13;
      local_10c = piVar19[2];
      local_110 = piVar19[1];
      local_d0 = *piVar27;
      iStack_cc = piVar27[1];
      iStack_c8 = piVar27[2];
      local_c4 = piVar27[3];
      iStack_c0 = piVar27[4];
      iStack_bc = piVar27[5];
      if (0xb < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar13,0xb,&DAT_018ac47c);
      }
      FUN_016dd1aa(local_108 + 0x10c,local_f4 + 0x10c + (uVar23 + 1) * 0xc,uVar13 * 0xc);
      FUN_016dd1aa(local_108,local_f4 + (uVar23 + 1) * 0x18,uVar13 * 0x18);
      *puVar17 = (ushort)uVar23;
      piVar19 = (int *)((uint)&local_98 | 4);
      *piVar19 = local_d0;
      piVar19[1] = iStack_cc;
      piVar19[2] = iStack_c8;
      piVar19[3] = local_c4;
      piVar19[4] = iStack_c0;
      piVar19[5] = iStack_bc;
      iVar21 = local_108;
      if (!bVar2) {
        iVar21 = local_f4;
      }
      piVar27 = (int *)(iVar21 + 0x10c + (int)piVar24 * 0xc);
      uVar1 = *(ushort *)(iVar21 + 0x192);
      if (piVar24 < (int *)(uint)uVar1) {
        iVar11 = (int)(uint)uVar1 - (int)piVar24;
        FUN_016dd52c(piVar27 + 3,piVar27,iVar11 * 0xc);
        *piVar27 = iVar16;
        piVar27[1] = iVar15;
        piVar27[2] = uVar25;
        local_d0 = *param_4;
        iStack_cc = param_4[1];
        iStack_c8 = param_4[2];
        local_c4 = param_4[3];
        iStack_c0 = param_4[4];
        iStack_bc = param_4[5];
        iVar15 = iVar21 + (int)piVar24 * 0x18;
        FUN_016dd52c(iVar15 + 0x18,iVar15,iVar11 * 0x18);
      }
      else {
        *piVar27 = iVar16;
        piVar27[1] = iVar15;
        piVar27[2] = uVar25;
        local_d0 = *param_4;
        iStack_cc = param_4[1];
        iStack_c8 = param_4[2];
        local_c4 = param_4[3];
        iStack_c0 = param_4[4];
        iStack_bc = param_4[5];
      }
      piVar24 = (int *)(iVar21 + (int)piVar24 * 0x18);
      *piVar24 = local_d0;
      piVar24[1] = iStack_cc;
      piVar24[2] = iStack_c8;
      piVar24[3] = local_c4;
      piVar24[4] = iStack_c0;
      piVar24[5] = iStack_bc;
      *(ushort *)(iVar21 + 0x192) = uVar1 + 1;
      local_60 = local_98;
      iStack_5c = local_94;
      iStack_58 = local_90;
      local_54 = local_8c;
      iStack_50 = local_88;
      iStack_4c = iStack_84;
      iStack_48 = local_80;
      if (local_100 != -0x80000000) {
        if (*(int *)(local_f4 + 0x108) == 0) {
          local_f8 = 0;
        }
        else {
          puVar5 = (undefined4 *)((uint)&local_f0 | 4);
          local_f8 = 0;
          iVar15 = *(int *)(local_f4 + 0x108);
          do {
            iVar16 = iVar15;
            uVar25 = (uint)*(ushort *)(local_f4 + 400);
            local_b0 = *puVar5;
            uStack_ac = puVar5[1];
            uStack_a8 = puVar5[2];
            uStack_a4 = puVar5[3];
            uStack_a0 = puVar5[4];
            uStack_9c = puVar5[5];
            puVar17 = (ushort *)(iVar16 + 0x192);
            uVar23 = (uint)*puVar17;
            local_f0 = local_60;
            iStack_ec = iStack_5c;
            iStack_e8 = iStack_58;
            local_e4 = local_54;
            iStack_e0 = iStack_50;
            iStack_dc = iStack_4c;
            iStack_d8 = iStack_48;
            if (uVar23 < 0xb) {
              uVar13 = uVar25 + 1;
              piVar24 = (int *)(iVar16 + 0x10c + uVar25 * 0xc);
              if (uVar25 < uVar23) {
                iVar15 = uVar23 - uVar25;
                FUN_016dd52c(iVar16 + 0x10c + uVar13 * 0xc,piVar24,iVar15 * 0xc);
                piVar24[1] = local_110;
                piVar24[2] = local_10c;
                puVar26 = (undefined4 *)(iVar16 + uVar25 * 0x18);
                *piVar24 = local_100;
                FUN_016dd52c(iVar16 + uVar13 * 0x18,puVar26,iVar15 * 0x18);
                uVar9 = puVar5[1];
                uVar10 = puVar5[2];
                uVar12 = puVar5[3];
                uVar14 = puVar5[4];
                uVar18 = puVar5[5];
                *puVar26 = *puVar5;
                puVar26[1] = uVar9;
                puVar26[2] = uVar10;
                puVar26[3] = uVar12;
                puVar26[4] = uVar14;
                puVar26[5] = uVar18;
                FUN_016dd52c(iVar16 + 0x198 + uVar25 * 4 + 8,iVar16 + 0x198 + uVar13 * 4,iVar15 * 4)
                ;
              }
              else {
                piVar24[1] = local_110;
                piVar24[2] = local_10c;
                puVar26 = (undefined4 *)(iVar16 + uVar25 * 0x18);
                *piVar24 = local_100;
                uVar9 = puVar5[1];
                uVar10 = puVar5[2];
                uVar12 = puVar5[3];
                uVar14 = puVar5[4];
                uVar18 = puVar5[5];
                *puVar26 = *puVar5;
                puVar26[1] = uVar9;
                puVar26[2] = uVar10;
                puVar26[3] = uVar12;
                puVar26[4] = uVar14;
                puVar26[5] = uVar18;
              }
              *puVar17 = (ushort)(uVar23 + 1);
              *(int *)(iVar16 + uVar13 * 4 + 0x198) = local_108;
              if (uVar13 < uVar23 + 2) {
                do {
                  iVar15 = *(int *)(iVar16 + 0x19c + uVar25 * 4);
                  uVar25 = uVar25 + 1;
                  *(short *)(iVar15 + 400) = (short)uVar25;
                  *(int *)(iVar15 + 0x108) = iVar16;
                } while (uVar23 + 1 != uVar25);
              }
              goto LAB_00c42ae8;
            }
            uVar13 = 4;
            if (uVar25 < 5) {
              bVar2 = false;
            }
            else if (uVar25 == 5) {
              bVar2 = false;
              uVar13 = 5;
            }
            else if (uVar25 == 6) {
              uVar25 = 0;
              uVar13 = 5;
              bVar2 = true;
            }
            else {
              uVar25 = uVar25 - 7;
              bVar2 = true;
              uVar13 = 6;
            }
            iVar21 = thunk_FUN_016d4a50(0x1c8);
            if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x1c8);
            }
            puVar20 = (ushort *)(iVar21 + 0x192);
            *puVar20 = 0;
            *(undefined4 *)(iVar21 + 0x108) = 0;
            piVar27 = (int *)(iVar16 + 0x10c + uVar13 * 0xc);
            iVar11 = *piVar27;
            iVar15 = piVar27[1];
            piVar24 = (int *)(iVar16 + uVar13 * 0x18);
            iVar3 = piVar27[2];
            uVar6 = (uint)*puVar17 + ~uVar13;
            *puVar20 = (ushort)uVar6;
            local_40 = *piVar24;
            iStack_3c = piVar24[1];
            iStack_38 = piVar24[2];
            iStack_34 = piVar24[3];
            iStack_30 = piVar24[4];
            iStack_2c = piVar24[5];
            if (0xb < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar6,0xb,&DAT_018ac47c);
            }
            FUN_016dd1aa(iVar21 + 0x10c,iVar16 + 0x10c + (uVar13 + 1) * 0xc,uVar6 * 0xc);
            FUN_016dd1aa(iVar21,iVar16 + (uVar13 + 1) * 0x18,uVar6 * 0x18);
            *puVar17 = (ushort)uVar13;
            local_88 = local_40;
            iStack_84 = iStack_3c;
            local_80 = iStack_38;
            iStack_7c = iStack_34;
            iStack_78 = iStack_30;
            iStack_74 = iStack_2c;
            uVar6 = (uint)*puVar20;
            iVar7 = uVar6 + 1;
            local_98 = iVar11;
            local_94 = iVar15;
            local_90 = iVar3;
            if (0xb < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,iVar7,0xc,&DAT_018ac48c);
            }
            if (uVar23 - uVar13 != iVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            local_f8 = local_f8 + 1;
            FUN_016dd1aa(iVar21 + 0x198,iVar16 + uVar13 * 4 + 0x19c,iVar7 * 4);
            uVar23 = 0;
            do {
              iVar15 = *(int *)(iVar21 + 0x198 + uVar23 * 4);
              *(short *)(iVar15 + 400) = (short)uVar23;
              *(int *)(iVar15 + 0x108) = iVar21;
              if (uVar6 <= uVar23) break;
              uVar23 = uVar23 + 1;
            } while (uVar23 <= uVar6);
            uVar23 = uVar25 + 1;
            iVar7 = *piVar19;
            iVar3 = piVar19[1];
            local_60 = local_8c;
            iStack_5c = local_88;
            iStack_58 = iStack_84;
            local_54 = local_80;
            iStack_50 = iStack_7c;
            iStack_4c = iStack_78;
            iStack_48 = iStack_74;
            iVar15 = iVar21;
            if (!bVar2) {
              iVar15 = iVar16;
            }
            piVar24 = (int *)(iVar15 + 0x10c + uVar25 * 0xc);
            uVar13 = (uint)*(ushort *)(iVar15 + 0x192);
            if (uVar25 < uVar13) {
              iVar8 = uVar13 - uVar25;
              FUN_016dd52c(iVar15 + 0x10c + uVar23 * 0xc,piVar24,iVar8 * 0xc);
              puVar26 = (undefined4 *)(iVar15 + uVar25 * 0x18);
              *piVar24 = local_100;
              piVar24[1] = local_110;
              piVar24[2] = local_10c;
              FUN_016dd52c(iVar15 + uVar23 * 0x18,puVar26,iVar8 * 0x18);
              uVar9 = puVar5[1];
              uVar10 = puVar5[2];
              uVar12 = puVar5[3];
              uVar14 = puVar5[4];
              uVar18 = puVar5[5];
              *puVar26 = *puVar5;
              puVar26[1] = uVar9;
              puVar26[2] = uVar10;
              puVar26[3] = uVar12;
              puVar26[4] = uVar14;
              puVar26[5] = uVar18;
              FUN_016dd52c(iVar15 + 0x198 + uVar25 * 4 + 8,iVar15 + 0x198 + uVar23 * 4,iVar8 * 4);
            }
            else {
              puVar26 = (undefined4 *)(iVar15 + uVar25 * 0x18);
              *piVar24 = local_100;
              piVar24[1] = local_110;
              piVar24[2] = local_10c;
              uVar9 = puVar5[1];
              uVar10 = puVar5[2];
              uVar12 = puVar5[3];
              uVar14 = puVar5[4];
              uVar18 = puVar5[5];
              *puVar26 = *puVar5;
              puVar26[1] = uVar9;
              puVar26[2] = uVar10;
              puVar26[3] = uVar12;
              puVar26[4] = uVar14;
              puVar26[5] = uVar18;
            }
            *(ushort *)(iVar15 + 0x192) = (ushort)(uVar13 + 1);
            *(int *)(iVar15 + uVar23 * 4 + 0x198) = local_108;
            if (uVar23 < uVar13 + 2) {
              do {
                iVar8 = uVar25 * 4;
                uVar25 = uVar25 + 1;
                iVar8 = *(int *)(iVar15 + iVar8 + 0x19c);
                *(short *)(iVar8 + 400) = (short)uVar25;
                *(int *)(iVar8 + 0x108) = iVar15;
              } while (uVar13 + 1 != uVar25);
            }
            local_d0 = local_60;
            iStack_cc = iStack_5c;
            iStack_c8 = iStack_58;
            local_c4 = local_54;
            iStack_c0 = iStack_50;
            iStack_bc = iStack_4c;
            iStack_b8 = iStack_48;
            if (iVar11 == -0x80000000) goto LAB_00c42ae8;
            iVar15 = *(int *)(iVar16 + 0x108);
            local_110 = iVar7;
            local_10c = iVar3;
            local_108 = iVar21;
            local_100 = iVar11;
            local_f4 = iVar16;
          } while (*(int *)(iVar16 + 0x108) != 0);
        }
        local_8c = local_60;
        local_88 = iStack_5c;
        iStack_84 = iStack_58;
        local_80 = local_54;
        iStack_7c = iStack_50;
        iStack_78 = iStack_4c;
        iStack_74 = iStack_48;
        iVar15 = *param_2;
        local_64 = local_f8;
        local_6c = local_f8;
        local_f0 = local_60;
        iStack_ec = iStack_5c;
        iStack_e8 = iStack_58;
        local_e4 = local_54;
        iStack_e0 = iStack_50;
        iStack_dc = iStack_4c;
        iStack_d8 = iStack_48;
        local_98 = local_100;
        local_94 = local_110;
        local_90 = local_10c;
        local_70 = local_f4;
        local_68 = local_108;
        if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ac44c);
        }
        uVar25 = param_2[1];
        puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x1c8);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x1c8);
        }
        *(undefined2 *)((int)puVar5 + 0x192) = 0;
        puVar5[0x66] = iVar15;
        puVar5[0x42] = 0;
        if (0xfffffffe < uVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af438);
        }
        *(undefined4 **)(iVar15 + 0x108) = puVar5;
        *(undefined2 *)(iVar15 + 400) = 0;
        *param_2 = (int)puVar5;
        param_2[1] = uVar25 + 1;
        puVar26 = (undefined4 *)((uint)&local_f0 | 4);
        local_60 = *puVar26;
        iStack_5c = puVar26[1];
        iStack_58 = puVar26[2];
        local_54 = puVar26[3];
        iStack_50 = puVar26[4];
        iStack_4c = puVar26[5];
        if (local_f8 != uVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
        }
        *(undefined2 *)((int)puVar5 + 0x192) = 1;
        puVar5[0x43] = local_98;
        puVar5[0x44] = local_94;
        puVar5[0x45] = local_90;
        uVar9 = puVar26[1];
        uVar10 = puVar26[2];
        uVar12 = puVar26[3];
        uVar14 = puVar26[4];
        uVar18 = puVar26[5];
        *puVar5 = *puVar26;
        puVar5[1] = uVar9;
        puVar5[2] = uVar10;
        puVar5[3] = uVar12;
        puVar5[4] = uVar14;
        puVar5[5] = uVar18;
        puVar5[0x67] = local_108;
        *(undefined2 *)(local_108 + 400) = 1;
        *(undefined4 **)(local_108 + 0x108) = puVar5;
      }
    }
LAB_00c42ae8:
    iVar15 = param_2[2];
    *(undefined1 *)param_1 = 6;
    param_2[2] = iVar15 + 1;
    return;
  }
  local_f4 = iVar15;
  goto LAB_00c42a7c;
}

