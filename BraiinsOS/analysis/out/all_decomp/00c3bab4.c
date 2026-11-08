// FUN_00c3bab4 @ 00c3bab4 size=2452 calls_out=7 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c3bab4(int *param_1,int *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 **ppuVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined1 *puVar17;
  int *piVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  undefined1 *puVar24;
  int iVar25;
  uint uVar26;
  int *piVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  int iVar33;
  undefined4 uVar34;
  int local_15c;
  int local_148;
  uint local_140;
  int local_13c;
  int *local_124;
  int local_118;
  undefined1 *local_114;
  undefined1 *puStack_110;
  undefined1 *puStack_10c;
  undefined1 *local_108;
  undefined1 *local_104;
  undefined1 *puStack_100;
  undefined1 *local_fc;
  undefined1 *puStack_f8;
  undefined1 *local_f4;
  undefined1 *local_f0;
  undefined1 *local_ec;
  undefined1 *puStack_e8;
  undefined1 *local_e4;
  int *local_e0;
  int *local_dc;
  int local_d8;
  int *local_d4;
  undefined1 *local_d0;
  undefined1 *puStack_cc;
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  undefined1 *local_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined1 *local_90;
  undefined1 *puStack_8c;
  undefined1 *local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined1 *puStack_64;
  undefined1 *local_60;
  undefined1 *puStack_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int local_38;
  undefined1 *local_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  
  local_13c = thunk_FUN_016d4a50(0x248);
  if (local_13c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x248);
  }
  iVar12 = param_2[2];
  local_d8 = *param_2;
  local_e0 = (int *)param_2[1];
  *(undefined2 *)(local_13c + 0x242) = 0;
  local_d4 = local_e0 + iVar12 * 0xe;
  piVar5 = (int *)((uint)&local_b8 | 4);
  puVar13 = (undefined4 *)((uint)&local_118 | 4);
  *(undefined4 *)(local_13c + 0x210) = 0;
  local_108 = (undefined1 *)0x3b9aca01;
  local_148 = 0;
  local_140 = 0;
  puVar17 = (undefined1 *)0x3b9aca01;
  piVar18 = local_e0;
  local_dc = local_e0;
  local_124 = local_d4;
  iVar12 = local_13c;
LAB_00c3bb70:
  do {
    if (puVar17 == (undefined1 *)0x3b9aca01) {
      if (piVar18 == local_124) goto LAB_00c3c064;
      local_78 = (undefined1 *)piVar18[1];
      puStack_74 = (undefined1 *)piVar18[2];
      puStack_70 = (undefined1 *)piVar18[3];
      puVar17 = (undefined1 *)piVar18[4];
      local_dc = piVar18 + 0xe;
      ppuVar6 = (undefined1 **)(piVar18 + 5);
      iVar19 = *piVar18;
      piVar18 = local_dc;
    }
    else {
      local_78 = (undefined1 *)*puVar13;
      puStack_74 = (undefined1 *)puVar13[1];
      puStack_70 = (undefined1 *)puVar13[2];
      ppuVar6 = &local_104;
      iVar19 = local_118;
    }
    puVar4 = puStack_70;
    puVar3 = puStack_74;
    puVar2 = local_78;
    if (puVar17 == &DAT_3b9aca00) {
LAB_00c3c064:
      iVar12 = 0;
      local_108 = (undefined1 *)0x3b9aca01;
      while (iVar12 != ((uint)((int)local_124 - (int)piVar18) >> 3) * -0x49249249) {
        iVar19 = iVar12 * 0xe;
        iVar8 = piVar18[iVar12 * 0xe + 0xb];
        puVar13 = (undefined4 *)(iVar8 + 0x10);
        for (iVar9 = piVar18[iVar12 * 0xe + 0xc]; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar13[-4] != 0) {
            thunk_FUN_016d3fb4(puVar13[-3]);
          }
          if (puVar13[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar13);
          }
          puVar13 = puVar13 + 6;
        }
        iVar12 = iVar12 + 1;
        if (piVar18[iVar19 + 10] != 0) {
          thunk_FUN_016d3fb4(iVar8);
        }
      }
      if (local_d8 != 0) {
        thunk_FUN_016d3fb4(local_e0);
      }
      if (local_140 != 0) {
        uVar7 = local_140;
        iVar12 = local_13c;
        do {
          if (*(ushort *)(iVar12 + 0x242) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_004194a6,0x19,&DAT_018af418);
          }
          iVar8 = *(ushort *)(iVar12 + 0x242) - 1;
          iVar19 = iVar12 + iVar8 * 4;
          iVar9 = *(int *)(iVar19 + 0x24c);
          uVar10 = (uint)*(ushort *)(iVar9 + 0x242);
          if (uVar10 < 5) {
            iVar33 = *(int *)(iVar19 + 0x248);
            uVar30 = -uVar10 + 5;
            uVar26 = (uint)*(ushort *)(iVar33 + 0x242);
            if (uVar26 < uVar30) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194e7,0x27,&DAT_018af458);
            }
            iVar25 = iVar9 + 0x214;
            iVar21 = uVar26 - uVar30;
            *(ushort *)(iVar33 + 0x242) = (ushort)iVar21;
            *(ushort *)(iVar9 + 0x242) = 5;
            FUN_016dd52c(iVar25 + uVar30 * 4,iVar25);
            FUN_016dd52c(iVar9 + uVar30 * 0x30,iVar9,uVar10 * 0x30);
            iVar11 = iVar21 + 1;
            iVar16 = uVar26 - iVar11;
            if (iVar16 != -uVar10 + 4) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            FUN_016dd1aa(iVar25,iVar33 + 0x214 + iVar11 * 4,iVar16 * 4);
            FUN_016dd1aa(iVar9,iVar33 + iVar11 * 0x30,iVar16 * 0x30);
            puVar13 = (undefined4 *)(iVar33 + iVar21 * 0x30);
            local_a8 = (undefined1 *)*puVar13;
            puStack_a4 = (undefined1 *)puVar13[1];
            puStack_a0 = (undefined1 *)puVar13[2];
            local_9c = (undefined1 *)puVar13[3];
            puStack_98 = (undefined1 *)puVar13[4];
            puStack_94 = (undefined1 *)puVar13[5];
            local_90 = (undefined1 *)puVar13[6];
            puStack_8c = (undefined1 *)puVar13[7];
            local_88 = (undefined1 *)puVar13[8];
            local_84 = (undefined1 *)puVar13[9];
            local_80 = (undefined1 *)puVar13[10];
            local_7c = (undefined1 *)puVar13[0xb];
            uVar34 = *(undefined4 *)(iVar19 + 0x214);
            *(undefined4 *)(iVar19 + 0x214) = *(undefined4 *)(iVar33 + 0x214 + iVar21 * 4);
            puVar13 = (undefined4 *)(iVar12 + iVar8 * 0x30);
            local_114 = (undefined1 *)*puVar13;
            puStack_110 = (undefined1 *)puVar13[1];
            puStack_10c = (undefined1 *)puVar13[2];
            local_108 = (undefined1 *)puVar13[3];
            local_68 = (undefined1 *)puVar13[4];
            puStack_64 = (undefined1 *)puVar13[5];
            local_60 = (undefined1 *)puVar13[6];
            puStack_5c = (undefined1 *)puVar13[7];
            local_58 = (undefined1 *)puVar13[8];
            local_54 = (undefined1 *)puVar13[9];
            local_50 = (undefined1 *)puVar13[10];
            local_4c = (undefined1 *)puVar13[0xb];
            *puVar13 = local_a8;
            puVar13[1] = puStack_a4;
            puVar13[2] = puStack_a0;
            puVar13[3] = local_9c;
            puVar13[4] = puStack_98;
            puVar13[5] = puStack_94;
            puVar13[6] = local_90;
            puVar13[7] = puStack_8c;
            puVar13[8] = local_88;
            puVar13[9] = local_84;
            puVar13[10] = local_80;
            puVar13[0xb] = local_7c;
            *(undefined4 *)(iVar25 + iVar16 * 4) = uVar34;
            puVar13 = (undefined4 *)(iVar9 + iVar16 * 0x30);
            *puVar13 = local_114;
            puVar13[1] = puStack_110;
            puVar13[2] = puStack_10c;
            puVar13[3] = local_108;
            puVar13[4] = local_68;
            puVar13[5] = puStack_64;
            puVar13[6] = local_60;
            puVar13[7] = puStack_5c;
            puVar13[8] = local_58;
            puVar13[9] = local_54;
            puVar13[10] = local_50;
            puVar13[0xb] = local_4c;
            local_78 = local_114;
            puStack_74 = puStack_110;
            puStack_70 = puStack_10c;
            local_6c = local_108;
            local_104 = local_68;
            puStack_100 = puStack_64;
            local_fc = local_60;
            puStack_f8 = puStack_5c;
            local_f4 = local_58;
            local_f0 = local_54;
            local_ec = local_50;
            puStack_e8 = local_4c;
            if (uVar7 != 1) {
              iVar12 = iVar9 + 0x248;
              FUN_016dd52c(iVar12 + uVar30 * 4,iVar12,uVar10 * 4 + 4);
              FUN_016dd1aa(iVar12,iVar33 + iVar11 * 4 + 0x248,uVar30 * 4);
              iVar12 = *(int *)(iVar9 + 0x248);
              *(undefined2 *)(iVar12 + 0x240) = 0;
              *(int *)(iVar12 + 0x210) = iVar9;
              iVar12 = *(int *)(iVar9 + 0x24c);
              *(undefined2 *)(iVar12 + 0x240) = 1;
              *(int *)(iVar12 + 0x210) = iVar9;
              iVar12 = *(int *)(iVar9 + 0x250);
              *(undefined2 *)(iVar12 + 0x240) = 2;
              *(int *)(iVar12 + 0x210) = iVar9;
              iVar12 = *(int *)(iVar9 + 0x254);
              *(undefined2 *)(iVar12 + 0x240) = 3;
              *(int *)(iVar12 + 0x210) = iVar9;
              iVar12 = *(int *)(iVar9 + 600);
              *(undefined2 *)(iVar12 + 0x240) = 4;
              *(int *)(iVar12 + 0x210) = iVar9;
              iVar12 = *(int *)(iVar9 + 0x25c);
              *(undefined2 *)(iVar12 + 0x240) = 5;
              *(int *)(iVar12 + 0x210) = iVar9;
            }
          }
          uVar7 = uVar7 - 1;
          iVar12 = iVar9;
        } while (uVar7 != 0);
      }
      param_1[1] = local_140;
      *param_1 = local_13c;
      param_1[2] = local_148;
      return;
    }
    puVar14 = ppuVar6[6];
    puVar15 = ppuVar6[8];
    local_48 = local_78;
    puStack_44 = puStack_74;
    puStack_40 = puStack_70;
    puVar31 = ppuVar6[5];
    puVar28 = ppuVar6[7];
    local_9c = *ppuVar6;
    puStack_98 = ppuVar6[1];
    puVar20 = ppuVar6[2];
    puVar22 = ppuVar6[3];
    puVar24 = ppuVar6[4];
    puVar32 = &DAT_3b9aca00;
    if (piVar18 == local_124) {
      local_104 = local_78;
      puStack_100 = puStack_74;
      local_fc = puStack_70;
      puStack_f8 = local_6c;
      local_f4 = local_68;
      local_f0 = puStack_64;
      local_ec = local_60;
      puStack_e8 = puStack_5c;
      local_e4 = local_58;
      piVar27 = piVar18;
    }
    else {
      local_118 = *piVar18;
      local_114 = (undefined1 *)piVar18[1];
      puStack_110 = (undefined1 *)piVar18[2];
      puStack_10c = (undefined1 *)piVar18[3];
      puVar29 = (undefined1 *)piVar18[4];
      piVar27 = piVar18 + 0xe;
      local_78 = (undefined1 *)piVar18[5];
      puStack_74 = (undefined1 *)piVar18[6];
      puStack_70 = (undefined1 *)piVar18[7];
      local_6c = (undefined1 *)piVar18[8];
      local_68 = (undefined1 *)piVar18[9];
      puStack_64 = (undefined1 *)piVar18[10];
      local_60 = (undefined1 *)piVar18[0xb];
      puStack_5c = (undefined1 *)piVar18[0xc];
      local_58 = (undefined1 *)piVar18[0xd];
      local_104 = local_78;
      puStack_100 = puStack_74;
      local_fc = puStack_70;
      puStack_f8 = local_6c;
      local_f4 = local_68;
      local_f0 = puStack_64;
      local_ec = local_60;
      puStack_e8 = puStack_5c;
      local_e4 = local_58;
      local_dc = piVar27;
      local_38 = local_118;
      local_34 = local_114;
      puStack_30 = puStack_110;
      puStack_2c = puStack_10c;
      if ((puVar29 != &DAT_3b9aca00) && (puVar32 = puVar29, iVar19 == local_118)) {
        puVar23 = (undefined4 *)(puVar14 + 0x10);
        local_a8 = local_9c;
        puStack_a4 = puStack_98;
        puStack_a0 = puVar20;
        local_9c = puVar22;
        puStack_98 = puVar24;
        for (; puVar28 != (undefined1 *)0x0; puVar28 = puVar28 + -1) {
          if (puVar23[-4] != 0) {
            thunk_FUN_016d3fb4(puVar23[-3]);
          }
          if (puVar23[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar23);
          }
          puVar23 = puVar23 + 6;
        }
        puVar17 = puVar29;
        piVar18 = piVar27;
        if (puVar31 != (undefined1 *)0x0) {
          thunk_FUN_016d3fb4(puVar14);
        }
        goto LAB_00c3bb70;
      }
    }
    local_b8 = puVar2;
    puStack_b4 = puVar3;
    puStack_b0 = puVar4;
    local_a8 = (undefined1 *)*piVar5;
    puStack_a4 = (undefined1 *)piVar5[1];
    uVar1 = *(ushort *)(iVar12 + 0x242);
    uVar7 = (uint)uVar1;
    local_118 = local_38;
    local_114 = local_34;
    puStack_110 = puStack_30;
    puStack_10c = puStack_2c;
    local_108 = puVar32;
    local_d0 = local_9c;
    puStack_cc = puStack_98;
    puStack_c8 = puVar20;
    puStack_c4 = puVar22;
    puStack_c0 = puVar24;
    puStack_a0 = puVar17;
    puStack_94 = puVar20;
    local_90 = puVar22;
    puStack_8c = puVar24;
    local_88 = puVar31;
    local_84 = puVar14;
    local_80 = puVar28;
    local_7c = puVar15;
    local_104 = local_78;
    puStack_100 = puStack_74;
    local_fc = puStack_70;
    puStack_f8 = local_6c;
    local_f4 = local_68;
    local_f0 = puStack_64;
    local_ec = local_60;
    puStack_e8 = puStack_5c;
    local_e4 = local_58;
    if (uVar7 < 0xb) {
      local_38 = *piVar5;
      local_34 = (undefined1 *)piVar5[1];
      *(ushort *)(iVar12 + 0x242) = uVar1 + 1;
      *(int *)(iVar12 + uVar7 * 4 + 0x214) = iVar19;
      piVar18 = (int *)(iVar12 + uVar7 * 0x30);
      *piVar18 = local_38;
      piVar18[1] = (int)local_34;
      piVar18[2] = (int)puVar17;
      piVar18[3] = (int)local_9c;
      piVar18[4] = (int)puStack_98;
      piVar18[5] = (int)puVar20;
      piVar18[6] = (int)puVar22;
      piVar18[7] = (int)puVar24;
      piVar18[8] = (int)puVar31;
      piVar18[9] = (int)puVar14;
      piVar18[10] = (int)puVar28;
      piVar18[0xb] = (int)puVar15;
      local_124 = local_d4;
      piVar27 = local_dc;
      local_78 = local_9c;
      puStack_74 = puStack_98;
      puVar17 = puVar20;
    }
    else {
      uVar7 = 0;
      do {
        iVar12 = *(int *)(iVar12 + 0x210);
        if (iVar12 == 0) {
          iVar12 = thunk_FUN_016d4a50(0x278);
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x278);
          }
          *(undefined2 *)(iVar12 + 0x242) = 0;
          uVar7 = local_140 + 1;
          *(int *)(iVar12 + 0x248) = local_13c;
          *(undefined4 *)(iVar12 + 0x210) = 0;
          if (0xfffffffe < local_140) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af438);
          }
          *(undefined2 *)(local_13c + 0x240) = 0;
          *(int *)(local_13c + 0x210) = iVar12;
          local_15c = iVar12;
          local_140 = uVar7;
          goto LAB_00c3becc;
        }
        uVar7 = uVar7 + 1;
      } while (10 < *(ushort *)(iVar12 + 0x242));
      local_15c = local_13c;
LAB_00c3becc:
      iVar8 = thunk_FUN_016d4a50(0x248);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x248);
      }
      *(undefined2 *)(iVar8 + 0x242) = 0;
      *(undefined4 *)(iVar8 + 0x210) = 0;
      uVar10 = uVar7;
      while (uVar10 = uVar10 - 1, uVar10 != 0) {
        iVar9 = thunk_FUN_016d4a50(0x278);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x278);
        }
        *(undefined2 *)(iVar9 + 0x242) = 0;
        *(int *)(iVar9 + 0x248) = iVar8;
        *(undefined4 *)(iVar9 + 0x210) = 0;
        *(undefined2 *)(iVar8 + 0x240) = 0;
        *(int *)(iVar8 + 0x210) = iVar9;
        iVar8 = iVar9;
      }
      local_78 = (undefined1 *)*piVar5;
      puStack_74 = (undefined1 *)piVar5[1];
      uVar10 = (uint)*(ushort *)(iVar12 + 0x242);
      puStack_64 = puStack_c8;
      local_60 = puStack_c4;
      puStack_5c = puStack_c0;
      local_58 = puVar31;
      local_54 = puVar14;
      local_50 = puVar28;
      local_4c = puVar15;
      if (10 < uVar10) {
        puStack_70 = puVar17;
        local_6c = local_d0;
        local_68 = puStack_cc;
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
      }
      uVar1 = (ushort)(uVar10 + 1);
      *(ushort *)(iVar12 + 0x242) = uVar1;
      iVar9 = *piVar5;
      iVar33 = piVar5[1];
      *(int *)(iVar12 + uVar10 * 4 + 0x214) = iVar19;
      piVar18 = (int *)(iVar12 + uVar10 * 0x30);
      *piVar18 = iVar9;
      piVar18[1] = iVar33;
      piVar18[2] = (int)puVar17;
      piVar18[3] = (int)local_d0;
      piVar18[4] = (int)puStack_cc;
      piVar18[5] = (int)puStack_c8;
      piVar18[6] = (int)puStack_c4;
      piVar18[7] = (int)puStack_c0;
      piVar18[8] = (int)puVar31;
      piVar18[9] = (int)puVar14;
      piVar18[0xb] = (int)puVar15;
      piVar18[10] = (int)puVar28;
      *(int *)(iVar12 + (uVar10 + 1) * 4 + 0x248) = iVar8;
      *(ushort *)(iVar8 + 0x240) = uVar1;
      *(int *)(iVar8 + 0x210) = iVar12;
      if (uVar7 == 0) {
        local_13c = local_15c;
        puVar22 = local_d0;
        puVar24 = puStack_cc;
      }
      else {
        do {
          uVar7 = uVar7 - 1;
          iVar12 = *(int *)(iVar12 + (uint)*(ushort *)(iVar12 + 0x242) * 4 + 0x248);
        } while (uVar7 != 0);
        local_13c = local_15c;
        puVar22 = local_d0;
        puVar24 = puStack_cc;
      }
    }
    local_68 = puVar24;
    local_6c = puVar22;
    puStack_70 = puVar17;
    local_148 = local_148 + 1;
    puVar17 = puVar32;
    piVar18 = piVar27;
  } while( true );
}

