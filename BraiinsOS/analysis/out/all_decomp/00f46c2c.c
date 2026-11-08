// FUN_00f46c2c @ 00f46c2c size=2832 calls_out=7 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f46c2c(int *param_1,undefined4 *param_2,int *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  bool bVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ushort *puVar25;
  int *piVar26;
  int *piVar27;
  uint local_110;
  int local_f4;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar21 = param_2[4];
  if (iVar21 == 0) {
    piVar15 = (int *)param_2[3];
    iVar21 = thunk_FUN_016d4a50(0x198);
    if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x198);
    }
    uVar22 = 0;
    *(undefined4 *)(iVar21 + 0x108) = 0;
    puVar25 = (ushort *)(iVar21 + 0x192);
    *puVar25 = 0;
    *piVar15 = iVar21;
    piVar15[1] = 0;
    uVar16 = (uint)*puVar25;
    if (10 < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
    }
    *puVar25 = *puVar25 + 1;
    uVar4 = param_2[1];
    uVar9 = param_2[2];
    iVar19 = iVar21 + uVar16 * 0xc;
    piVar11 = (int *)(iVar21 + uVar16 * 0x18);
    *(undefined4 *)(iVar19 + 0x10c) = *param_2;
    *(undefined4 *)(iVar19 + 0x110) = uVar4;
    *(undefined4 *)(iVar19 + 0x114) = uVar9;
    iVar19 = param_3[1];
    iVar10 = param_3[2];
    iVar3 = param_3[3];
    iVar5 = param_3[4];
    iVar6 = param_3[5];
    *piVar11 = *param_3;
    piVar11[1] = iVar19;
    piVar11[2] = iVar10;
    piVar11[3] = iVar3;
    piVar11[4] = iVar5;
    piVar11[5] = iVar6;
  }
  else {
    puVar25 = (ushort *)(iVar21 + 0x192);
    uVar1 = *puVar25;
    uVar18 = (uint)uVar1;
    uVar22 = param_2[5];
    uVar16 = param_2[6];
    piVar15 = (int *)param_2[3];
    if (uVar18 < 0xb) {
      uVar23 = uVar16 + 1;
      puVar13 = (undefined4 *)(iVar21 + 0x10c + uVar16 * 0xc);
      if (uVar18 < uVar23) {
        uVar4 = param_2[1];
        uVar9 = param_2[2];
        *puVar13 = *param_2;
        puVar13[1] = uVar4;
        puVar13[2] = uVar9;
        local_90 = *param_3;
        local_8c = param_3[1];
        local_88 = param_3[2];
        iStack_84 = param_3[3];
        local_80 = param_3[4];
        local_7c = param_3[5];
      }
      else {
        FUN_016dd52c(iVar21 + 0x10c + uVar23 * 0xc,puVar13,(uVar18 - uVar16) * 0xc);
        uVar4 = param_2[1];
        uVar9 = param_2[2];
        *puVar13 = *param_2;
        puVar13[1] = uVar4;
        puVar13[2] = uVar9;
        local_90 = *param_3;
        local_8c = param_3[1];
        local_88 = param_3[2];
        iStack_84 = param_3[3];
        local_80 = param_3[4];
        local_7c = param_3[5];
        FUN_016dd52c(iVar21 + uVar23 * 0x18,iVar21 + uVar16 * 0x18,(uVar18 - uVar16) * 0x18);
      }
      piVar11 = (int *)(iVar21 + uVar16 * 0x18);
      *piVar11 = local_90;
      piVar11[1] = local_8c;
      piVar11[2] = local_88;
      piVar11[3] = iStack_84;
      piVar11[4] = local_80;
      piVar11[5] = local_7c;
      *puVar25 = uVar1 + 1;
    }
    else {
      if (uVar16 < 5) {
        uVar23 = 4;
        bVar14 = false;
      }
      else if (uVar16 == 5) {
        bVar14 = false;
        uVar23 = 5;
      }
      else {
        if (uVar16 == 6) {
          uVar23 = 5;
          uVar16 = 0;
        }
        else {
          uVar16 = uVar16 - 7;
          uVar23 = 6;
        }
        bVar14 = true;
      }
      local_e0 = thunk_FUN_016d4a50(0x198);
      if (local_e0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x198);
      }
      *(undefined4 *)(local_e0 + 0x108) = 0;
      uVar18 = uVar18 + ~uVar23;
      piVar11 = (int *)(iVar21 + 0x10c + uVar23 * 0xc);
      local_e8 = *piVar11;
      piVar27 = (int *)(iVar21 + uVar23 * 0x18);
      *(short *)(local_e0 + 0x192) = (short)uVar18;
      local_f4 = piVar11[1];
      local_ec = piVar11[2];
      local_90 = *piVar27;
      local_8c = piVar27[1];
      local_88 = piVar27[2];
      iStack_84 = piVar27[3];
      local_80 = piVar27[4];
      local_7c = piVar27[5];
      if (0xb < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar18,0xb,&DAT_018ac47c);
      }
      FUN_016dd1aa(local_e0 + 0x10c,iVar21 + 0x10c + (uVar23 + 1) * 0xc,uVar18 * 0xc);
      FUN_016dd1aa(local_e0,iVar21 + (uVar23 + 1) * 0x18,uVar18 * 0x18);
      iVar19 = local_90;
      *puVar25 = (ushort)uVar23;
      local_e4 = local_90;
      local_40 = piVar27[1];
      iStack_3c = piVar27[2];
      iStack_38 = piVar27[3];
      iStack_34 = piVar27[4];
      iStack_30 = piVar27[5];
      iVar10 = local_e0;
      if (!bVar14) {
        iVar10 = iVar21;
      }
      puVar13 = (undefined4 *)(iVar10 + 0x10c + uVar16 * 0xc);
      uVar1 = *(ushort *)(iVar10 + 0x192);
      uVar18 = uVar22;
      if (bVar14) {
        uVar18 = 0;
      }
      if (uVar16 < uVar1) {
        iVar3 = uVar1 - uVar16;
        FUN_016dd52c(puVar13 + 3,puVar13,iVar3 * 0xc);
        uVar4 = param_2[1];
        uVar9 = param_2[2];
        *puVar13 = *param_2;
        puVar13[1] = uVar4;
        puVar13[2] = uVar9;
        local_90 = *param_3;
        local_8c = param_3[1];
        local_88 = param_3[2];
        iStack_84 = param_3[3];
        local_80 = param_3[4];
        local_7c = param_3[5];
        iVar5 = iVar10 + uVar16 * 0x18;
        FUN_016dd52c(iVar5 + 0x18,iVar5,iVar3 * 0x18);
      }
      else {
        uVar4 = param_2[1];
        uVar9 = param_2[2];
        *puVar13 = *param_2;
        puVar13[1] = uVar4;
        puVar13[2] = uVar9;
        local_90 = *param_3;
        local_8c = param_3[1];
        local_88 = param_3[2];
        iStack_84 = param_3[3];
        local_80 = param_3[4];
        local_7c = param_3[5];
      }
      piVar11 = (int *)(iVar10 + uVar16 * 0x18);
      *piVar11 = local_90;
      piVar11[1] = local_8c;
      piVar11[2] = local_88;
      piVar11[3] = iStack_84;
      piVar11[4] = local_80;
      piVar11[5] = local_7c;
      *(ushort *)(iVar10 + 0x192) = uVar1 + 1;
      local_a8 = local_40;
      iStack_a4 = iStack_3c;
      iStack_a0 = iStack_38;
      iStack_9c = iStack_34;
      iStack_98 = iStack_30;
      if (iVar19 == 9) {
        iVar21 = iVar10;
        uVar22 = uVar18;
      }
      else {
        local_d8 = local_40;
        iStack_d4 = iStack_3c;
        iStack_d0 = iStack_38;
        iStack_cc = iStack_34;
        iStack_c8 = iStack_30;
        if (*(int *)(iVar21 + 0x108) == 0) {
          uVar23 = 0;
        }
        else {
          piVar11 = (int *)((uint)&local_a8 | 4);
          iVar19 = *(int *)(iVar21 + 0x108);
          iVar3 = iVar21;
          uVar23 = 0;
          do {
            iVar21 = iVar19;
            uVar20 = (uint)*(ushort *)(iVar3 + 400);
            local_a8 = local_e4;
            *piVar11 = local_d8;
            piVar11[1] = iStack_d4;
            piVar11[2] = iStack_d0;
            piVar11[3] = iStack_cc;
            piVar11[4] = iStack_c8;
            if (uVar23 != uVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00413145,0x35,&DAT_018ac49c);
            }
            puVar25 = (ushort *)(iVar21 + 0x192);
            uVar23 = (uint)*puVar25;
            if (uVar23 < 0xb) {
              uVar22 = uVar20 + 1;
              piVar11 = (int *)(iVar21 + 0x10c + uVar20 * 0xc);
              if (uVar20 < uVar23) {
                iVar19 = uVar23 - uVar20;
                FUN_016dd52c(iVar21 + 0x10c + uVar22 * 0xc,piVar11,iVar19 * 0xc);
                *piVar11 = local_e8;
                piVar11[1] = local_f4;
                piVar11[2] = local_ec;
                piVar11 = (int *)(iVar21 + uVar20 * 0x18);
                FUN_016dd52c(iVar21 + uVar22 * 0x18,piVar11,iVar19 * 0x18);
                *piVar11 = local_a8;
                piVar11[1] = iStack_a4;
                piVar11[2] = iStack_a0;
                piVar11[3] = iStack_9c;
                piVar11[4] = iStack_98;
                piVar11[5] = iStack_94;
                FUN_016dd52c(iVar21 + 0x198 + uVar20 * 4 + 8,iVar21 + 0x198 + uVar22 * 4,iVar19 * 4)
                ;
              }
              else {
                *piVar11 = local_e8;
                piVar11[1] = local_f4;
                piVar11[2] = local_ec;
                piVar11 = (int *)(iVar21 + uVar20 * 0x18);
                *piVar11 = local_e4;
                piVar11[1] = iStack_a4;
                piVar11[2] = iStack_a0;
                piVar11[3] = iStack_9c;
                piVar11[4] = iStack_98;
                piVar11[5] = iStack_94;
              }
              *puVar25 = (ushort)(uVar23 + 1);
              *(int *)(iVar21 + uVar22 * 4 + 0x198) = local_e0;
              if (uVar22 < uVar23 + 2) {
                do {
                  iVar19 = *(int *)(iVar21 + 0x19c + uVar20 * 4);
                  uVar20 = uVar20 + 1;
                  *(short *)(iVar19 + 400) = (short)uVar20;
                  *(int *)(iVar19 + 0x108) = iVar21;
                } while (uVar23 + 1 != uVar20);
              }
              goto LAB_00f47508;
            }
            bVar14 = false;
            uVar24 = 4;
            if (4 < uVar20) {
              if (uVar20 == 5) {
                uVar24 = 5;
              }
              else if (uVar20 == 6) {
                bVar14 = true;
                uVar20 = 0;
                uVar24 = 5;
              }
              else {
                uVar20 = uVar20 - 7;
                bVar14 = true;
                uVar24 = 6;
              }
            }
            iVar5 = thunk_FUN_016d4a50(0x1c8);
            if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x1c8);
            }
            puVar2 = (ushort *)(iVar5 + 0x192);
            *puVar2 = 0;
            *(undefined4 *)(iVar5 + 0x108) = 0;
            piVar27 = (int *)(iVar21 + 0x10c + uVar24 * 0xc);
            iVar6 = *piVar27;
            piVar26 = (int *)(iVar21 + uVar24 * 0x18);
            iVar17 = piVar27[2];
            iVar12 = piVar27[1];
            uVar7 = (uint)*puVar25 + ~uVar24;
            *puVar2 = (ushort)uVar7;
            local_40 = *piVar26;
            iStack_3c = piVar26[1];
            iStack_38 = piVar26[2];
            iStack_34 = piVar26[3];
            iStack_30 = piVar26[4];
            iStack_2c = piVar26[5];
            if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar7,0xb,&DAT_018ac47c);
            }
            FUN_016dd1aa(iVar5 + 0x10c,iVar21 + 0x10c + (uVar24 + 1) * 0xc,uVar7 * 0xc);
            FUN_016dd1aa(iVar5,iVar21 + (uVar24 + 1) * 0x18,uVar7 * 0x18);
            *puVar25 = (ushort)uVar24;
            local_80 = local_40;
            local_7c = iStack_3c;
            iStack_78 = iStack_38;
            iStack_74 = iStack_34;
            iStack_70 = iStack_30;
            iStack_6c = iStack_2c;
            uVar7 = (uint)*puVar2;
            iVar19 = uVar7 + 1;
            local_90 = iVar6;
            local_8c = iVar12;
            local_88 = iVar17;
            if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,iVar19,0xc,&DAT_018ac48c);
            }
            if (uVar23 - uVar24 != iVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            uVar22 = uVar22 + 1;
            FUN_016dd1aa(iVar5 + 0x198,iVar21 + uVar24 * 4 + 0x19c,iVar19 * 4);
            iVar19 = local_80;
            uVar23 = 0;
            do {
              iVar3 = *(int *)(iVar5 + 0x198 + uVar23 * 4);
              *(short *)(iVar3 + 400) = (short)uVar23;
              *(int *)(iVar3 + 0x108) = iVar5;
              if (uVar7 <= uVar23) break;
              uVar23 = uVar23 + 1;
            } while (uVar23 <= uVar7);
            local_e4 = local_80;
            local_58 = local_7c;
            iStack_54 = iStack_78;
            iStack_50 = iStack_74;
            iStack_4c = iStack_70;
            iStack_48 = iStack_6c;
            uVar23 = uVar20 + 1;
            iVar3 = iVar5;
            if (!bVar14) {
              iVar3 = iVar21;
            }
            piVar27 = (int *)(iVar3 + 0x10c + uVar20 * 0xc);
            uVar24 = (uint)*(ushort *)(iVar3 + 0x192);
            if (uVar20 < uVar24) {
              iVar8 = uVar24 - uVar20;
              FUN_016dd52c(iVar3 + 0x10c + uVar23 * 0xc,piVar27,iVar8 * 0xc);
              *piVar27 = local_e8;
              piVar27[1] = local_f4;
              piVar27[2] = local_ec;
              piVar27 = (int *)(iVar3 + uVar20 * 0x18);
              FUN_016dd52c(iVar3 + uVar23 * 0x18,piVar27,iVar8 * 0x18);
              *piVar27 = local_a8;
              piVar27[1] = iStack_a4;
              piVar27[2] = iStack_a0;
              piVar27[3] = iStack_9c;
              piVar27[4] = iStack_98;
              piVar27[5] = iStack_94;
              FUN_016dd52c(iVar3 + 0x198 + uVar20 * 4 + 8,iVar3 + 0x198 + uVar23 * 4,iVar8 * 4);
            }
            else {
              *piVar27 = local_e8;
              piVar26 = (int *)(iVar3 + uVar20 * 0x18);
              piVar27[1] = local_f4;
              piVar27[2] = local_ec;
              *piVar26 = local_a8;
              piVar26[1] = iStack_a4;
              piVar26[2] = iStack_a0;
              piVar26[3] = iStack_9c;
              piVar26[4] = iStack_98;
              piVar26[5] = iStack_94;
            }
            *(int *)(iVar3 + uVar23 * 4 + 0x198) = local_e0;
            *(ushort *)(iVar3 + 0x192) = (ushort)(uVar24 + 1);
            if (uVar23 < uVar24 + 2) {
              do {
                iVar8 = uVar20 * 4;
                uVar20 = uVar20 + 1;
                iVar8 = *(int *)(iVar3 + iVar8 + 0x19c);
                *(short *)(iVar8 + 400) = (short)uVar20;
                *(int *)(iVar8 + 0x108) = iVar3;
              } while (uVar24 + 1 != uVar20);
            }
            if (iVar19 == 9) goto LAB_00f47508;
            local_d8 = local_58;
            iStack_d4 = iStack_54;
            iStack_d0 = iStack_50;
            iStack_cc = iStack_4c;
            iStack_c8 = iStack_48;
            iVar19 = *(int *)(iVar21 + 0x108);
            iVar3 = iVar21;
            uVar23 = uVar22;
            local_f4 = iVar12;
            local_ec = iVar17;
            local_e8 = iVar6;
            local_e0 = iVar5;
          } while (*(int *)(iVar21 + 0x108) != 0);
        }
        local_7c = local_d8;
        iStack_78 = iStack_d4;
        iStack_74 = iStack_d0;
        iStack_70 = iStack_cc;
        iStack_6c = iStack_c8;
        iVar19 = *piVar15;
        local_80 = local_e4;
        local_90 = local_e8;
        local_8c = local_f4;
        local_88 = local_ec;
        local_68 = iVar21;
        local_64 = uVar22;
        local_60 = local_e0;
        local_5c = uVar23;
        if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ac44c);
        }
        uVar22 = piVar15[1];
        piVar11 = (int *)thunk_FUN_016d4a50(0x1c8);
        if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x1c8);
        }
        *(undefined2 *)((int)piVar11 + 0x192) = 0;
        piVar11[0x66] = iVar19;
        piVar11[0x42] = 0;
        if (0xfffffffe < uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af438);
        }
        *(undefined2 *)(iVar19 + 400) = 0;
        *(int **)(iVar19 + 0x108) = piVar11;
        *piVar15 = (int)piVar11;
        piVar15[1] = uVar22 + 1;
        if (uVar23 != uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
        }
        piVar11[0x43] = local_e8;
        piVar11[0x44] = local_f4;
        *(undefined2 *)((int)piVar11 + 0x192) = 1;
        piVar11[0x45] = local_ec;
        *piVar11 = local_80;
        piVar11[1] = local_7c;
        piVar11[2] = iStack_78;
        piVar11[3] = iStack_74;
        piVar11[4] = iStack_70;
        piVar11[5] = iStack_6c;
        piVar11[0x67] = local_e0;
        *(undefined2 *)(local_e0 + 400) = 1;
        *(int **)(local_e0 + 0x108) = piVar11;
LAB_00f47508:
        iVar21 = iVar10;
        uVar22 = uVar18;
      }
    }
  }
  iVar19 = piVar15[2];
  *param_1 = iVar21;
  param_1[1] = uVar22;
  param_1[2] = uVar16;
  param_1[3] = (int)piVar15;
  piVar15[2] = iVar19 + 1;
  return;
}

