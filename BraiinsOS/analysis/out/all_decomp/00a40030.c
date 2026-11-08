// FUN_00a40030 @ 00a40030 size=3100 calls_out=9 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x00a40bbc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a40030(int *param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  ushort *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  undefined1 *puVar24;
  int *piVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  ushort *puVar29;
  int *piVar30;
  int local_114;
  int local_110;
  int local_108;
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
    iVar13 = param_3[1];
    iVar17 = param_2[1];
    uVar23 = param_3[2];
    do {
      iVar26 = local_f4 + 0x10c;
      uVar1 = *(ushort *)(local_f4 + 0x192);
      piVar19 = (int *)0xffffffff;
      iVar28 = (int)(uint)uVar1 * 0xc;
      do {
        if (iVar28 == 0) {
          piVar19 = (int *)(uint)uVar1;
          goto LAB_00a400f8;
        }
        uVar15 = *(uint *)(iVar26 + 8);
        uVar27 = uVar15;
        if (uVar23 < uVar15) {
          uVar27 = uVar23;
        }
        iVar3 = FUN_016dd50a(iVar13,*(undefined4 *)(iVar26 + 4),uVar27);
        if (iVar3 == 0) {
          iVar3 = uVar23 - uVar15;
        }
        iVar28 = iVar28 + -0xc;
        piVar19 = (int *)((int)piVar19 + 1);
        iVar26 = iVar26 + 0xc;
      } while ((char)((0 < iVar3) - (iVar3 < 0)) == '\x01');
      if (0 < iVar3 == iVar3 < 0) {
        iVar17 = local_f4;
        param_2 = piVar19;
        if (*param_3 != 0) {
          thunk_FUN_016d3fb4(iVar13);
        }
        goto LAB_00a4014c;
      }
LAB_00a400f8:
      if (iVar17 == 0) goto LAB_00a401d0;
      iVar17 = iVar17 + -1;
      local_f4 = *(int *)(local_f4 + (int)piVar19 * 4 + 0x198);
    } while( true );
  }
  iVar13 = *param_3;
  iVar17 = param_3[1];
  if (iVar13 != -0x80000000) {
    iVar28 = param_3[2];
    piVar19 = (int *)thunk_FUN_016d4a50(0x198);
    if (piVar19 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x198);
    }
    *(undefined2 *)((int)piVar19 + 0x192) = 1;
    piVar19[0x45] = iVar28;
    *param_2 = (int)piVar19;
    param_2[1] = 0;
    piVar19[0x42] = 0;
    piVar19[0x43] = iVar13;
    piVar19[0x44] = iVar17;
    iVar13 = param_4[1];
    iVar17 = param_4[2];
    iVar28 = param_4[3];
    iVar26 = param_4[4];
    iVar3 = param_4[5];
    *piVar19 = *param_4;
    piVar19[1] = iVar13;
    piVar19[2] = iVar17;
    piVar19[3] = iVar28;
    piVar19[4] = iVar26;
    piVar19[5] = iVar3;
    goto LAB_00a401b4;
  }
LAB_00a4014c:
  piVar19 = (int *)(iVar17 + (int)param_2 * 0x18);
  iVar13 = piVar19[1];
  iVar17 = piVar19[2];
  iVar28 = piVar19[3];
  iVar26 = piVar19[4];
  iVar3 = piVar19[5];
  *param_1 = *piVar19;
  param_1[1] = iVar13;
  param_1[2] = iVar17;
  param_1[3] = iVar28;
  param_1[4] = iVar26;
  param_1[5] = iVar3;
  iVar13 = param_4[1];
  iVar17 = param_4[2];
  iVar28 = param_4[3];
  iVar26 = param_4[4];
  iVar3 = param_4[5];
  *piVar19 = *param_4;
  piVar19[1] = iVar13;
  piVar19[2] = iVar17;
  piVar19[3] = iVar28;
  piVar19[4] = iVar26;
  piVar19[5] = iVar3;
  return;
LAB_00a401d0:
  iVar17 = param_3[1];
  iVar13 = *param_3;
  if (iVar13 != -0x80000000) {
    puVar29 = (ushort *)(local_f4 + 0x192);
    uVar1 = *puVar29;
    puVar24 = (undefined1 *)(uint)uVar1;
    iVar28 = param_3[2];
    if (puVar24 < (undefined1 *)0xb) {
      puVar5 = (undefined1 *)((int)piVar19 + 1);
      piVar25 = (int *)(local_f4 + 0x10c + (int)piVar19 * 0xc);
      if (puVar24 < puVar5) {
        *piVar25 = iVar13;
        piVar25[1] = iVar17;
        piVar25[2] = iVar28;
        local_d0 = *param_4;
        iStack_cc = param_4[1];
        iStack_c8 = param_4[2];
        local_c4 = param_4[3];
        iStack_c0 = param_4[4];
        iStack_bc = param_4[5];
      }
      else {
        FUN_016dd52c(local_f4 + 0x10c + (int)puVar5 * 0xc,piVar25,
                     ((int)puVar24 - (int)piVar19) * 0xc);
        *piVar25 = iVar13;
        piVar25[1] = iVar17;
        piVar25[2] = iVar28;
        local_d0 = *param_4;
        iStack_cc = param_4[1];
        iStack_c8 = param_4[2];
        local_c4 = param_4[3];
        iStack_c0 = param_4[4];
        iStack_bc = param_4[5];
        FUN_016dd52c(local_f4 + (int)puVar5 * 0x18,local_f4 + (int)piVar19 * 0x18,
                     ((int)puVar24 - (int)piVar19) * 0x18);
      }
      piVar19 = (int *)(local_f4 + (int)piVar19 * 0x18);
      *piVar19 = local_d0;
      piVar19[1] = iStack_cc;
      piVar19[2] = iStack_c8;
      piVar19[3] = local_c4;
      piVar19[4] = iStack_c0;
      piVar19[5] = iStack_bc;
      *puVar29 = uVar1 + 1;
    }
    else {
      bVar2 = false;
      piVar25 = (int *)&DAT_00000004;
      if ((&DAT_00000004 < piVar19) && (piVar25 = piVar19, piVar19 != (int *)&DAT_00000005)) {
        if (piVar19 == (int *)&DAT_00000006) {
          piVar25 = (int *)&DAT_00000005;
          piVar19 = (int *)0x0;
        }
        else {
          piVar19 = (int *)((int)piVar19 + -7);
          piVar25 = (int *)&DAT_00000006;
        }
        bVar2 = true;
      }
      iVar26 = thunk_FUN_016d4a50(0x198);
      if (iVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x198);
      }
      *(undefined2 *)(iVar26 + 0x192) = 0;
      *(undefined4 *)(iVar26 + 0x108) = 0;
      piVar30 = (int *)(local_f4 + (int)piVar25 * 0x18);
      uVar23 = (uint)*puVar29 + ~(uint)piVar25;
      piVar4 = (int *)(local_f4 + 0x10c + (int)piVar25 * 0xc);
      local_108 = *piVar4;
      *(undefined2 *)(iVar26 + 0x192) = (short)uVar23;
      local_110 = piVar4[2];
      local_114 = piVar4[1];
      local_d0 = *piVar30;
      iStack_cc = piVar30[1];
      iStack_c8 = piVar30[2];
      local_c4 = piVar30[3];
      iStack_c0 = piVar30[4];
      iStack_bc = piVar30[5];
      if (0xb < uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar23,0xb,&DAT_018ac47c);
      }
      FUN_016dd1aa(iVar26 + 0x10c,local_f4 + 0x10c + ((int)piVar25 + 1) * 0xc,uVar23 * 0xc);
      FUN_016dd1aa(iVar26,local_f4 + (int)((int)piVar25 + 1) * 0x18,uVar23 * 0x18);
      *puVar29 = (ushort)piVar25;
      piVar25 = (int *)((uint)&local_98 | 4);
      *piVar25 = local_d0;
      piVar25[1] = iStack_cc;
      piVar25[2] = iStack_c8;
      piVar25[3] = local_c4;
      piVar25[4] = iStack_c0;
      piVar25[5] = iStack_bc;
      iVar3 = iVar26;
      if (!bVar2) {
        iVar3 = local_f4;
      }
      piVar4 = (int *)(iVar3 + 0x10c + (int)piVar19 * 0xc);
      uVar1 = *(ushort *)(iVar3 + 0x192);
      if (piVar19 < (int *)(uint)uVar1) {
        iVar6 = (int)(uint)uVar1 - (int)piVar19;
        FUN_016dd52c(piVar4 + 3,piVar4,iVar6 * 0xc);
        *piVar4 = iVar13;
        piVar4[1] = iVar17;
        piVar4[2] = iVar28;
        local_d0 = *param_4;
        iStack_cc = param_4[1];
        iStack_c8 = param_4[2];
        local_c4 = param_4[3];
        iStack_c0 = param_4[4];
        iStack_bc = param_4[5];
        iVar13 = iVar3 + (int)piVar19 * 0x18;
        FUN_016dd52c(iVar13 + 0x18,iVar13,iVar6 * 0x18);
      }
      else {
        *piVar4 = iVar13;
        piVar4[1] = iVar17;
        piVar4[2] = iVar28;
        local_d0 = *param_4;
        iStack_cc = param_4[1];
        iStack_c8 = param_4[2];
        local_c4 = param_4[3];
        iStack_c0 = param_4[4];
        iStack_bc = param_4[5];
      }
      piVar19 = (int *)(iVar3 + (int)piVar19 * 0x18);
      *piVar19 = local_d0;
      piVar19[1] = iStack_cc;
      piVar19[2] = iStack_c8;
      piVar19[3] = local_c4;
      piVar19[4] = iStack_c0;
      piVar19[5] = iStack_bc;
      *(ushort *)(iVar3 + 0x192) = uVar1 + 1;
      local_60 = local_98;
      iStack_5c = local_94;
      iStack_58 = local_90;
      local_54 = local_8c;
      iStack_50 = local_88;
      iStack_4c = iStack_84;
      iStack_48 = local_80;
      if (local_108 != -0x80000000) {
        uVar23 = 0;
        if (*(int *)(local_f4 + 0x108) != 0) {
          puVar10 = (undefined4 *)((uint)&local_f0 | 4);
          uVar23 = 0;
          iVar13 = *(int *)(local_f4 + 0x108);
          iVar17 = iVar26;
          do {
            iVar28 = iVar13;
            uVar27 = (uint)*(ushort *)(local_f4 + 400);
            local_b0 = *puVar10;
            uStack_ac = puVar10[1];
            uStack_a8 = puVar10[2];
            uStack_a4 = puVar10[3];
            uStack_a0 = puVar10[4];
            uStack_9c = puVar10[5];
            puVar29 = (ushort *)(iVar28 + 0x192);
            uVar15 = (uint)*puVar29;
            local_f0 = local_60;
            iStack_ec = iStack_5c;
            iStack_e8 = iStack_58;
            local_e4 = local_54;
            iStack_e0 = iStack_50;
            iStack_dc = iStack_4c;
            iStack_d8 = iStack_48;
            if (uVar15 < 0xb) {
              uVar23 = uVar27 + 1;
              piVar19 = (int *)(iVar28 + 0x10c + uVar27 * 0xc);
              if (uVar27 < uVar15) {
                iVar13 = uVar15 - uVar27;
                FUN_016dd52c(iVar28 + 0x10c + uVar23 * 0xc,piVar19,iVar13 * 0xc);
                puVar21 = (undefined4 *)(iVar28 + uVar27 * 0x18);
                *piVar19 = local_108;
                piVar19[1] = local_114;
                piVar19[2] = local_110;
                FUN_016dd52c(iVar28 + uVar23 * 0x18,puVar21,iVar13 * 0x18);
                uVar11 = puVar10[1];
                uVar12 = puVar10[2];
                uVar14 = puVar10[3];
                uVar16 = puVar10[4];
                uVar18 = puVar10[5];
                *puVar21 = *puVar10;
                puVar21[1] = uVar11;
                puVar21[2] = uVar12;
                puVar21[3] = uVar14;
                puVar21[4] = uVar16;
                puVar21[5] = uVar18;
                FUN_016dd52c(iVar28 + 0x198 + uVar27 * 4 + 8,iVar28 + 0x198 + uVar23 * 4,iVar13 * 4)
                ;
              }
              else {
                *piVar19 = local_108;
                piVar19[1] = local_114;
                piVar19[2] = local_110;
                puVar21 = (undefined4 *)(iVar28 + uVar27 * 0x18);
                uVar11 = puVar10[1];
                uVar12 = puVar10[2];
                uVar14 = puVar10[3];
                uVar16 = puVar10[4];
                uVar18 = puVar10[5];
                *puVar21 = *puVar10;
                puVar21[1] = uVar11;
                puVar21[2] = uVar12;
                puVar21[3] = uVar14;
                puVar21[4] = uVar16;
                puVar21[5] = uVar18;
              }
              *puVar29 = (ushort)(uVar15 + 1);
              *(int *)(iVar28 + uVar23 * 4 + 0x198) = iVar17;
              if (uVar23 < uVar15 + 2) {
                do {
                  iVar13 = *(int *)(iVar28 + 0x19c + uVar27 * 4);
                  uVar27 = uVar27 + 1;
                  *(short *)(iVar13 + 400) = (short)uVar27;
                  *(int *)(iVar13 + 0x108) = iVar28;
                } while (uVar15 + 1 != uVar27);
              }
              goto LAB_00a401b4;
            }
            uVar22 = 4;
            if (uVar27 < 5) {
              bVar2 = false;
            }
            else if (uVar27 == 5) {
              bVar2 = false;
              uVar22 = 5;
            }
            else if (uVar27 == 6) {
              uVar27 = 0;
              uVar22 = 5;
              bVar2 = true;
            }
            else {
              uVar27 = uVar27 - 7;
              bVar2 = true;
              uVar22 = 6;
            }
            iVar26 = thunk_FUN_016d4a50(0x1c8);
            if (iVar26 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x1c8);
            }
            puVar20 = (ushort *)(iVar26 + 0x192);
            *puVar20 = 0;
            *(undefined4 *)(iVar26 + 0x108) = 0;
            uVar7 = (uint)*puVar29 + ~uVar22;
            piVar4 = (int *)(iVar28 + 0x10c + uVar22 * 0xc);
            iVar3 = *piVar4;
            iVar13 = piVar4[1];
            piVar19 = (int *)(iVar28 + uVar22 * 0x18);
            iVar6 = piVar4[2];
            *puVar20 = (ushort)uVar7;
            local_40 = *piVar19;
            iStack_3c = piVar19[1];
            iStack_38 = piVar19[2];
            iStack_34 = piVar19[3];
            iStack_30 = piVar19[4];
            iStack_2c = piVar19[5];
            if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar7,0xb,&DAT_018ac47c);
            }
            FUN_016dd1aa(iVar26 + 0x10c,iVar28 + 0x10c + (uVar22 + 1) * 0xc,uVar7 * 0xc);
            FUN_016dd1aa(iVar26,iVar28 + (uVar22 + 1) * 0x18,uVar7 * 0x18);
            *puVar29 = (ushort)uVar22;
            local_88 = local_40;
            iStack_84 = iStack_3c;
            local_80 = iStack_38;
            iStack_7c = iStack_34;
            iStack_78 = iStack_30;
            iStack_74 = iStack_2c;
            uVar7 = (uint)*puVar20;
            iVar8 = uVar7 + 1;
            local_98 = iVar3;
            local_94 = iVar13;
            local_90 = iVar6;
            if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,iVar8,0xc,&DAT_018ac48c);
            }
            if (uVar15 - uVar22 != iVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            uVar23 = uVar23 + 1;
            FUN_016dd1aa(iVar26 + 0x198,iVar28 + uVar22 * 4 + 0x19c,iVar8 * 4);
            uVar15 = 0;
            do {
              iVar13 = *(int *)(iVar26 + 0x198 + uVar15 * 4);
              *(short *)(iVar13 + 400) = (short)uVar15;
              *(int *)(iVar13 + 0x108) = iVar26;
              if (uVar7 <= uVar15) break;
              uVar15 = uVar15 + 1;
            } while (uVar15 <= uVar7);
            iVar8 = *piVar25;
            iVar6 = piVar25[1];
            local_60 = local_8c;
            iStack_5c = local_88;
            iStack_58 = iStack_84;
            local_54 = local_80;
            iStack_50 = iStack_7c;
            iStack_4c = iStack_78;
            iStack_48 = iStack_74;
            uVar15 = uVar27 + 1;
            iVar13 = iVar26;
            if (!bVar2) {
              iVar13 = iVar28;
            }
            piVar19 = (int *)(iVar13 + 0x10c + uVar27 * 0xc);
            uVar22 = (uint)*(ushort *)(iVar13 + 0x192);
            if (uVar27 < uVar22) {
              iVar9 = uVar22 - uVar27;
              FUN_016dd52c(iVar13 + 0x10c + uVar15 * 0xc,piVar19,iVar9 * 0xc);
              *piVar19 = local_108;
              piVar19[1] = local_114;
              piVar19[2] = local_110;
              puVar21 = (undefined4 *)(iVar13 + uVar27 * 0x18);
              FUN_016dd52c(iVar13 + uVar15 * 0x18,puVar21,iVar9 * 0x18);
              uVar11 = puVar10[1];
              uVar12 = puVar10[2];
              uVar14 = puVar10[3];
              uVar16 = puVar10[4];
              uVar18 = puVar10[5];
              *puVar21 = *puVar10;
              puVar21[1] = uVar11;
              puVar21[2] = uVar12;
              puVar21[3] = uVar14;
              puVar21[4] = uVar16;
              puVar21[5] = uVar18;
              FUN_016dd52c(iVar13 + 0x198 + uVar27 * 4 + 8,iVar13 + 0x198 + uVar15 * 4,iVar9 * 4);
            }
            else {
              puVar21 = (undefined4 *)(iVar13 + uVar27 * 0x18);
              *piVar19 = local_108;
              piVar19[1] = local_114;
              piVar19[2] = local_110;
              uVar11 = puVar10[1];
              uVar12 = puVar10[2];
              uVar14 = puVar10[3];
              uVar16 = puVar10[4];
              uVar18 = puVar10[5];
              *puVar21 = *puVar10;
              puVar21[1] = uVar11;
              puVar21[2] = uVar12;
              puVar21[3] = uVar14;
              puVar21[4] = uVar16;
              puVar21[5] = uVar18;
            }
            *(int *)(iVar13 + uVar15 * 4 + 0x198) = iVar17;
            *(ushort *)(iVar13 + 0x192) = (ushort)(uVar22 + 1);
            if (uVar15 < uVar22 + 2) {
              do {
                iVar17 = uVar27 * 4;
                uVar27 = uVar27 + 1;
                iVar17 = *(int *)(iVar13 + iVar17 + 0x19c);
                *(short *)(iVar17 + 400) = (short)uVar27;
                *(int *)(iVar17 + 0x108) = iVar13;
              } while (uVar22 + 1 != uVar27);
            }
            local_d0 = local_60;
            iStack_cc = iStack_5c;
            iStack_c8 = iStack_58;
            local_c4 = local_54;
            iStack_c0 = iStack_50;
            iStack_bc = iStack_4c;
            iStack_b8 = iStack_48;
            if (iVar3 == -0x80000000) goto LAB_00a401b4;
            iVar13 = *(int *)(iVar28 + 0x108);
            iVar17 = iVar26;
            local_114 = iVar8;
            local_110 = iVar6;
            local_108 = iVar3;
            local_f4 = iVar28;
          } while (*(int *)(iVar28 + 0x108) != 0);
        }
        local_8c = local_60;
        local_88 = iStack_5c;
        iStack_84 = iStack_58;
        local_80 = local_54;
        iStack_7c = iStack_50;
        iStack_78 = iStack_4c;
        iStack_74 = iStack_48;
        iVar13 = *param_2;
        local_f0 = local_60;
        iStack_ec = iStack_5c;
        iStack_e8 = iStack_58;
        local_e4 = local_54;
        iStack_e0 = iStack_50;
        iStack_dc = iStack_4c;
        iStack_d8 = iStack_48;
        local_98 = local_108;
        local_94 = local_114;
        local_90 = local_110;
        local_70 = local_f4;
        local_6c = uVar23;
        local_68 = iVar26;
        local_64 = uVar23;
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ac44c);
        }
        uVar27 = param_2[1];
        puVar10 = (undefined4 *)thunk_FUN_016d4a50(0x1c8);
        if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x1c8);
        }
        *(undefined2 *)((int)puVar10 + 0x192) = 0;
        puVar10[0x66] = iVar13;
        puVar10[0x42] = 0;
        if (0xfffffffe < uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af438);
        }
        *(undefined4 **)(iVar13 + 0x108) = puVar10;
        *(undefined2 *)(iVar13 + 400) = 0;
        puVar21 = (undefined4 *)((uint)&local_f0 | 4);
        *param_2 = (int)puVar10;
        param_2[1] = uVar27 + 1;
        local_60 = *puVar21;
        iStack_5c = puVar21[1];
        iStack_58 = puVar21[2];
        local_54 = puVar21[3];
        iStack_50 = puVar21[4];
        iStack_4c = puVar21[5];
        if (uVar23 != uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
        }
        *(undefined2 *)((int)puVar10 + 0x192) = 1;
        puVar10[0x43] = local_98;
        puVar10[0x44] = local_94;
        puVar10[0x45] = local_90;
        uVar11 = puVar21[1];
        uVar12 = puVar21[2];
        uVar14 = puVar21[3];
        uVar16 = puVar21[4];
        uVar18 = puVar21[5];
        *puVar10 = *puVar21;
        puVar10[1] = uVar11;
        puVar10[2] = uVar12;
        puVar10[3] = uVar14;
        puVar10[4] = uVar16;
        puVar10[5] = uVar18;
        *(undefined2 *)(iVar26 + 400) = 1;
        *(undefined4 **)(iVar26 + 0x108) = puVar10;
        puVar10[0x67] = iVar26;
      }
    }
LAB_00a401b4:
    iVar13 = param_2[2];
    *(undefined1 *)param_1 = 6;
    param_2[2] = iVar13 + 1;
    return;
  }
  goto LAB_00a4014c;
}

