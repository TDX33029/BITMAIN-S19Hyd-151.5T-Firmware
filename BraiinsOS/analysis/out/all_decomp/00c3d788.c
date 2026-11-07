// FUN_00c3d788 @ 00c3d788 size=2432 calls_out=7 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c3d788(int *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int unaff_r6;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int *piVar27;
  int *piVar28;
  int local_180;
  uint local_17c;
  int local_170;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int aiStack_138 [16];
  int *local_f8;
  int *local_f4;
  int local_f0;
  int *local_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar2 = thunk_FUN_016d4a50(0x350);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x350);
  }
  local_f0 = *param_2;
  local_f8 = (int *)param_2[1];
  iVar18 = 0;
  local_ec = local_f8 + param_2[2] * 0x14;
  *(undefined2 *)(iVar2 + 0x34a) = 0;
  iVar11 = 6;
  iVar3 = 0;
  *(undefined4 *)(iVar2 + 0x318) = 0;
  local_13c = 0;
  local_140 = 6;
  local_17c = 0;
  piVar9 = local_ec;
  piVar21 = local_f8;
  local_180 = iVar2;
  local_f4 = local_f8;
LAB_00c3d838:
  do {
    if (iVar11 == 6 && iVar18 == 0) {
      if (piVar21 == piVar9) {
LAB_00c3dd38:
        iVar2 = 0;
        local_140 = 6;
        local_13c = 0;
        local_144 = local_170;
        while (iVar2 != ((uint)((int)piVar9 - (int)piVar21) >> 4) * -0x33333333) {
          iVar11 = iVar2 * 0x14;
          iVar18 = piVar21[iVar2 * 0x14 + 0x11];
          puVar19 = (undefined4 *)(iVar18 + 0x10);
          for (iVar23 = piVar21[iVar2 * 0x14 + 0x12]; iVar23 != 0; iVar23 = iVar23 + -1) {
            if (puVar19[-4] != 0) {
              thunk_FUN_016d3fb4(puVar19[-3]);
            }
            if (puVar19[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar19);
            }
            puVar19 = puVar19 + 6;
          }
          iVar2 = iVar2 + 1;
          if (piVar21[iVar11 + 0x10] != 0) {
            thunk_FUN_016d3fb4(iVar18);
          }
        }
        if (local_f0 != 0) {
          thunk_FUN_016d3fb4(local_f8);
        }
        if (local_17c != 0) {
          uVar13 = local_17c;
          iVar2 = local_180;
          do {
            if (*(ushort *)(iVar2 + 0x34a) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194a6,0x19,&DAT_018af418);
            }
            iVar18 = *(ushort *)(iVar2 + 0x34a) - 1;
            iVar11 = iVar2 + iVar18 * 4;
            iVar23 = *(int *)(iVar11 + 0x354);
            uVar15 = (uint)*(ushort *)(iVar23 + 0x34a);
            if (uVar15 < 5) {
              iVar12 = *(int *)(iVar11 + 0x350);
              uVar26 = -uVar15 + 5;
              uVar24 = (uint)*(ushort *)(iVar12 + 0x34a);
              if (uVar24 < uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_004194e7,0x27,&DAT_018af458);
              }
              iVar16 = uVar24 - uVar26;
              *(ushort *)(iVar12 + 0x34a) = (ushort)iVar16;
              *(ushort *)(iVar23 + 0x34a) = 5;
              iVar10 = iVar23 + 0x31c;
              FUN_016dd52c(iVar10 + uVar26 * 4);
              FUN_016dd52c(iVar23 + (uVar26 | uVar26 * 8) * 8,iVar23,uVar15 * 0x48);
              iVar8 = iVar16 + 1;
              iVar20 = uVar24 - iVar8;
              if (iVar20 != -uVar15 + 4) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
              }
              FUN_016dd1aa(iVar10,iVar12 + 0x31c + iVar8 * 4,iVar20 * 4);
              FUN_016dd1aa(iVar23,iVar12 + iVar8 * 0x48,iVar20 * 0x48);
              uVar14 = *(undefined4 *)(iVar12 + 0x31c + iVar16 * 4);
              FUN_016dd1aa(&local_b8,iVar12 + iVar16 * 0x48,0x48);
              uVar17 = *(undefined4 *)(iVar11 + 0x31c);
              *(undefined4 *)(iVar11 + 0x31c) = uVar14;
              iVar2 = iVar2 + iVar18 * 0x48;
              FUN_016dd1aa(&local_144,iVar2,0x48);
              FUN_016dd1aa(iVar2,&local_b8,0x48);
              FUN_016dd1aa(&local_70,&local_144,0x48);
              *(undefined4 *)(iVar10 + iVar20 * 4) = uVar17;
              FUN_016dd1aa(iVar23 + iVar20 * 0x48,&local_70,0x48);
              if (uVar13 != 1) {
                iVar2 = iVar23 + 0x350;
                FUN_016dd52c(iVar2 + uVar26 * 4,iVar2,uVar15 * 4 + 4);
                FUN_016dd1aa(iVar2,iVar12 + iVar8 * 4 + 0x350,uVar26 * 4);
                iVar2 = *(int *)(iVar23 + 0x350);
                *(undefined2 *)(iVar2 + 0x348) = 0;
                *(int *)(iVar2 + 0x318) = iVar23;
                iVar2 = *(int *)(iVar23 + 0x354);
                *(undefined2 *)(iVar2 + 0x348) = 1;
                *(int *)(iVar2 + 0x318) = iVar23;
                iVar2 = *(int *)(iVar23 + 0x358);
                *(undefined2 *)(iVar2 + 0x348) = 2;
                *(int *)(iVar2 + 0x318) = iVar23;
                iVar2 = *(int *)(iVar23 + 0x35c);
                *(undefined2 *)(iVar2 + 0x348) = 3;
                *(int *)(iVar2 + 0x318) = iVar23;
                iVar2 = *(int *)(iVar23 + 0x360);
                *(undefined2 *)(iVar2 + 0x348) = 4;
                *(int *)(iVar2 + 0x318) = iVar23;
                iVar2 = *(int *)(iVar23 + 0x364);
                *(undefined2 *)(iVar2 + 0x348) = 5;
                *(int *)(iVar2 + 0x318) = iVar23;
              }
            }
            uVar13 = uVar13 - 1;
            iVar2 = iVar23;
          } while (uVar13 != 0);
        }
        *param_1 = local_180;
        param_1[1] = local_17c;
        param_1[2] = iVar3;
        return;
      }
      piVar4 = piVar21 + 2;
      local_f4 = piVar21 + 0x14;
      piVar28 = piVar21 + 3;
      iVar23 = *piVar21;
      iVar12 = *piVar4;
      iVar8 = *piVar28;
      piVar27 = piVar21 + 4;
      piVar22 = local_f4;
      piVar21 = local_f4;
      if (*piVar4 == 5 && *piVar28 == 0) goto LAB_00c3dd38;
    }
    else {
      iVar23 = unaff_r6;
      iVar12 = iVar11;
      iVar8 = iVar18;
      piVar27 = aiStack_138;
      piVar22 = piVar21;
      if (iVar11 == 5 && iVar18 == 0) goto LAB_00c3dd38;
    }
    iVar10 = piVar27[0xc];
    iVar16 = piVar27[0xd];
    iVar20 = piVar27[0xf];
    iVar25 = piVar27[0xe];
    FUN_016dd52c(&local_70,piVar27,0x30);
    if (piVar22 == piVar9) {
      local_140 = 5;
      local_13c = 0;
      piVar21 = piVar22;
      local_148 = unaff_r6;
    }
    else {
      local_170 = piVar22[1];
      piVar21 = piVar22 + 0x14;
      iVar11 = piVar22[2];
      iVar18 = piVar22[3];
      unaff_r6 = *piVar22;
      local_f4 = piVar21;
      FUN_016dd52c(aiStack_138,piVar22 + 4,0x40);
      if (iVar11 == 5 && iVar18 == 0) {
        local_140 = 5;
        local_13c = 0;
      }
      else {
        if (iVar23 == unaff_r6) {
          puVar19 = (undefined4 *)(iVar16 + 0x10);
          for (; iVar25 != 0; iVar25 = iVar25 + -1) {
            if (puVar19[-4] != 0) {
              thunk_FUN_016d3fb4(puVar19[-3]);
            }
            if (puVar19[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar19);
            }
            puVar19 = puVar19 + 6;
          }
          if (iVar10 != 0) {
            thunk_FUN_016d3fb4(iVar16);
          }
          goto LAB_00c3d838;
        }
        local_140 = iVar11;
        local_13c = iVar18;
      }
      local_148 = unaff_r6;
    }
    iVar18 = local_13c;
    iVar11 = local_140;
    local_e8 = local_70;
    iStack_e4 = local_6c;
    iStack_e0 = local_68;
    iStack_dc = iStack_64;
    iStack_d8 = iStack_60;
    iStack_d4 = iStack_5c;
    local_d0 = local_58;
    iStack_cc = iStack_54;
    iStack_c8 = local_50;
    iStack_c4 = iStack_4c;
    iStack_c0 = iStack_48;
    iStack_bc = iStack_44;
    local_b0 = local_70;
    iStack_ac = local_6c;
    iStack_a8 = local_68;
    iStack_a4 = iStack_64;
    iStack_a0 = iStack_60;
    iStack_9c = iStack_5c;
    local_98 = local_58;
    iStack_94 = iStack_54;
    iStack_90 = local_50;
    iStack_8c = iStack_4c;
    iStack_88 = iStack_48;
    iStack_84 = iStack_44;
    uVar1 = *(ushort *)(iVar2 + 0x34a);
    uVar13 = (uint)uVar1;
    unaff_r6 = local_148;
    local_144 = local_170;
    local_b8 = iVar12;
    local_b4 = iVar8;
    local_80 = iVar10;
    local_7c = iVar16;
    local_78 = iVar25;
    local_74 = iVar20;
    if (uVar13 < 0xb) {
      *(ushort *)(iVar2 + 0x34a) = uVar1 + 1;
      *(int *)(iVar2 + uVar13 * 4 + 0x31c) = iVar23;
      piVar9 = (int *)(iVar2 + uVar13 * 0x48);
      *piVar9 = iVar12;
      piVar9[1] = iVar8;
      piVar9[2] = local_70;
      piVar9[3] = local_6c;
      piVar9[4] = local_68;
      piVar9[5] = iStack_64;
      piVar9[6] = iStack_60;
      piVar9[7] = iStack_5c;
      piVar9[8] = local_58;
      piVar9[9] = iStack_54;
      piVar9[10] = local_50;
      piVar9[0xb] = iStack_4c;
      piVar9[0xc] = iStack_48;
      piVar9[0xd] = iStack_44;
      piVar9[0xf] = iVar16;
      piVar9[0xe] = iVar10;
      piVar9[0x10] = iVar25;
      piVar9[0x11] = iVar20;
      iVar3 = iVar3 + 1;
      piVar9 = local_ec;
      piVar21 = local_f4;
    }
    else {
      uVar13 = 0;
      do {
        iVar2 = *(int *)(iVar2 + 0x318);
        if (iVar2 == 0) {
          iVar5 = thunk_FUN_016d4a50(0x380);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x380);
          }
          *(undefined2 *)(iVar5 + 0x34a) = 0;
          uVar13 = local_17c + 1;
          *(int *)(iVar5 + 0x350) = local_180;
          *(undefined4 *)(iVar5 + 0x318) = 0;
          if (0xfffffffe < local_17c) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af438);
          }
          *(undefined2 *)(local_180 + 0x348) = 0;
          *(int *)(local_180 + 0x318) = iVar5;
          iVar2 = iVar5;
          local_17c = uVar13;
          goto LAB_00c3db84;
        }
        uVar13 = uVar13 + 1;
      } while (10 < *(ushort *)(iVar2 + 0x34a));
      iVar5 = local_180;
LAB_00c3db84:
      iVar6 = thunk_FUN_016d4a50(0x350);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x350);
      }
      *(undefined2 *)(iVar6 + 0x34a) = 0;
      *(undefined4 *)(iVar6 + 0x318) = 0;
      uVar15 = uVar13;
      while (uVar15 = uVar15 - 1, uVar15 != 0) {
        iVar7 = thunk_FUN_016d4a50(0x380);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x380);
        }
        *(undefined2 *)(iVar7 + 0x34a) = 0;
        *(int *)(iVar7 + 0x350) = iVar6;
        *(undefined4 *)(iVar7 + 0x318) = 0;
        *(undefined2 *)(iVar6 + 0x348) = 0;
        *(int *)(iVar6 + 0x318) = iVar7;
        iVar6 = iVar7;
      }
      iStack_40 = iStack_c0;
      iStack_3c = iStack_bc;
      uVar15 = (uint)*(ushort *)(iVar2 + 0x34a);
      local_70 = iVar12;
      local_6c = iVar8;
      local_68 = local_e8;
      iStack_64 = iStack_e4;
      iStack_60 = iStack_e0;
      iStack_5c = iStack_dc;
      local_58 = iStack_d8;
      iStack_54 = iStack_d4;
      local_50 = local_d0;
      iStack_4c = iStack_cc;
      iStack_48 = iStack_c8;
      iStack_44 = iStack_c4;
      local_38 = iVar10;
      local_34 = iVar16;
      local_30 = iVar25;
      local_2c = iVar20;
      if (10 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
      }
      uVar1 = (ushort)(uVar15 + 1);
      *(ushort *)(iVar2 + 0x34a) = uVar1;
      *(int *)(iVar2 + uVar15 * 4 + 0x31c) = iVar23;
      piVar27 = (int *)(iVar2 + uVar15 * 0x48);
      *piVar27 = iVar12;
      piVar27[1] = iVar8;
      piVar27[2] = local_e8;
      piVar27[3] = iStack_e4;
      piVar27[4] = iStack_e0;
      piVar27[5] = iStack_dc;
      piVar27[6] = iStack_d8;
      piVar27[7] = iStack_d4;
      piVar27[8] = local_d0;
      piVar27[9] = iStack_cc;
      piVar27[10] = iStack_c8;
      piVar27[0xb] = iStack_c4;
      piVar27[0xc] = iStack_c0;
      piVar27[0xd] = iStack_bc;
      piVar27[0xe] = iVar10;
      piVar27[0xf] = iVar16;
      piVar27[0x11] = iVar20;
      piVar27[0x10] = iVar25;
      *(int *)(iVar2 + (uVar15 + 1) * 4 + 0x350) = iVar6;
      *(ushort *)(iVar6 + 0x348) = uVar1;
      *(int *)(iVar6 + 0x318) = iVar2;
      local_180 = iVar5;
      if (uVar13 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        do {
          uVar13 = uVar13 - 1;
          iVar2 = *(int *)(iVar2 + (uint)*(ushort *)(iVar2 + 0x34a) * 4 + 0x350);
        } while (uVar13 != 0);
        iVar3 = iVar3 + 1;
      }
    }
  } while( true );
}

