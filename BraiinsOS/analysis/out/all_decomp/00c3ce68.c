// FUN_00c3ce68 @ 00c3ce68 size=2068 calls_out=7 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c3ce68(int *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  undefined4 uVar22;
  int local_cc;
  int local_c8;
  int local_c0;
  uint local_b4;
  int *local_94;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int iStack_70;
  int local_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  local_cc = thunk_FUN_016d4a50(0x140);
  if (local_cc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x140);
  }
  iVar2 = *param_2;
  piVar7 = (int *)param_2[1];
  piVar21 = piVar7 + param_2[2] * 8;
  piVar14 = (int *)((uint)&local_68 | 4);
  local_b4 = 0;
  *(undefined2 *)(local_cc + 0x13a) = 0;
  *(undefined4 *)(local_cc + 0x108) = 0;
  local_c8 = 0;
  local_94 = piVar7;
  local_78 = -0x7fffffff;
  iVar12 = local_cc;
LAB_00c3cf00:
  do {
    if (local_78 == -0x7fffffff) {
      if (local_94 == piVar21) goto LAB_00c3d2d8;
      iVar20 = *local_94;
      iVar3 = local_94[2];
      iVar9 = local_94[4];
      iVar4 = local_94[1];
      iVar5 = local_94[3];
      piVar8 = local_94 + 5;
      local_94 = local_94 + 8;
    }
    else {
      piVar8 = &local_74;
      iVar4 = local_84;
      iVar3 = local_80;
      iVar5 = local_7c;
      iVar9 = local_78;
      iVar20 = local_88;
    }
    local_40 = iVar4;
    local_3c = iVar3;
    local_38 = iVar5;
    if (iVar9 == -0x80000000) {
LAB_00c3d2d8:
      uVar13 = 0;
      while (uVar13 != (uint)((int)piVar21 - (int)local_94) >> 5) {
        iVar12 = uVar13 * 8;
        iVar4 = local_94[uVar13 * 8 + 5];
        puVar10 = (undefined4 *)(iVar4 + 0x10);
        for (iVar3 = local_94[uVar13 * 8 + 6]; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar10[-4] != 0) {
            thunk_FUN_016d3fb4(puVar10[-3]);
          }
          if (puVar10[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar10);
          }
          puVar10 = puVar10 + 6;
        }
        uVar13 = uVar13 + 1;
        if (local_94[iVar12 + 4] != 0) {
          thunk_FUN_016d3fb4(iVar4);
        }
      }
      if (iVar2 != 0) {
        thunk_FUN_016d3fb4(piVar7);
      }
      if (local_b4 != 0) {
        uVar13 = local_b4;
        iVar12 = local_cc;
        do {
          if (*(ushort *)(iVar12 + 0x13a) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_004194a6,0x19,&DAT_018af418);
          }
          iVar2 = *(ushort *)(iVar12 + 0x13a) - 1;
          iVar4 = iVar12 + iVar2 * 4;
          iVar3 = *(int *)(iVar4 + 0x144);
          uVar11 = (uint)*(ushort *)(iVar3 + 0x13a);
          if (uVar11 < 5) {
            iVar5 = *(int *)(iVar4 + 0x140);
            uVar17 = (uint)*(ushort *)(iVar5 + 0x13a);
            uVar6 = -uVar11 + 5;
            if (uVar17 < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194e7,0x27,&DAT_018af458);
            }
            iVar19 = uVar17 - uVar6;
            *(ushort *)(iVar5 + 0x13a) = (ushort)iVar19;
            iVar20 = iVar3 + 0x10c;
            *(ushort *)(iVar3 + 0x13a) = 5;
            FUN_016dd52c(iVar20 + uVar6 * 4,iVar20,uVar11 * 4);
            FUN_016dd52c(iVar3 + uVar6 * 0x18,iVar3,uVar11 * 0x18);
            iVar9 = iVar19 + 1;
            iVar18 = uVar17 - iVar9;
            if (iVar18 != -uVar11 + 4) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            FUN_016dd1aa(iVar20,iVar5 + 0x10c + iVar9 * 4,iVar18 * 4);
            FUN_016dd1aa(iVar3,iVar5 + iVar9 * 0x18,iVar18 * 0x18);
            piVar21 = (int *)(iVar5 + iVar19 * 0x18);
            local_58 = *piVar21;
            local_54 = piVar21[1];
            local_50 = piVar21[2];
            local_4c = piVar21[3];
            local_48 = piVar21[4];
            local_44 = piVar21[5];
            uVar22 = *(undefined4 *)(iVar4 + 0x10c);
            *(undefined4 *)(iVar4 + 0x10c) = *(undefined4 *)(iVar5 + 0x10c + iVar19 * 4);
            piVar21 = (int *)(iVar12 + iVar2 * 0x18);
            local_40 = *piVar21;
            local_3c = piVar21[1];
            local_38 = piVar21[2];
            local_34 = piVar21[3];
            iStack_30 = piVar21[4];
            iStack_2c = piVar21[5];
            *piVar21 = local_58;
            piVar21[1] = local_54;
            piVar21[2] = local_50;
            piVar21[3] = local_4c;
            piVar21[4] = local_48;
            piVar21[5] = local_44;
            *(undefined4 *)(iVar20 + iVar18 * 4) = uVar22;
            piVar21 = (int *)(iVar3 + iVar18 * 0x18);
            *piVar21 = local_40;
            piVar21[1] = local_3c;
            piVar21[2] = local_38;
            piVar21[3] = local_34;
            piVar21[4] = iStack_30;
            piVar21[5] = iStack_2c;
            if (uVar13 != 1) {
              iVar12 = iVar3 + 0x140;
              FUN_016dd52c(iVar12 + uVar6 * 4,iVar12,uVar11 * 4 + 4);
              FUN_016dd1aa(iVar12,iVar5 + iVar9 * 4 + 0x140,uVar6 * 4);
              iVar12 = *(int *)(iVar3 + 0x140);
              *(undefined2 *)(iVar12 + 0x138) = 0;
              *(int *)(iVar12 + 0x108) = iVar3;
              iVar12 = *(int *)(iVar3 + 0x144);
              *(undefined2 *)(iVar12 + 0x138) = 1;
              *(int *)(iVar12 + 0x108) = iVar3;
              iVar12 = *(int *)(iVar3 + 0x148);
              *(undefined2 *)(iVar12 + 0x138) = 2;
              *(int *)(iVar12 + 0x108) = iVar3;
              iVar12 = *(int *)(iVar3 + 0x14c);
              *(undefined2 *)(iVar12 + 0x138) = 3;
              *(int *)(iVar12 + 0x108) = iVar3;
              iVar12 = *(int *)(iVar3 + 0x150);
              *(undefined2 *)(iVar12 + 0x138) = 4;
              *(int *)(iVar12 + 0x108) = iVar3;
              iVar12 = *(int *)(iVar3 + 0x154);
              *(undefined2 *)(iVar12 + 0x138) = 5;
              *(int *)(iVar12 + 0x108) = iVar3;
            }
          }
          uVar13 = uVar13 - 1;
          iVar12 = iVar3;
        } while (uVar13 != 0);
      }
      *param_1 = local_cc;
      param_1[1] = local_b4;
      param_1[2] = local_c8;
      return;
    }
    iVar19 = *piVar8;
    iVar15 = piVar8[1];
    iVar18 = piVar8[2];
    if (local_94 == piVar21) {
      iVar16 = -0x80000000;
      local_78 = -0x80000000;
    }
    else {
      local_40 = local_94[5];
      local_3c = local_94[6];
      local_38 = local_94[7];
      local_84 = local_94[1];
      local_7c = local_94[3];
      local_78 = local_94[4];
      local_88 = *local_94;
      local_80 = local_94[2];
      local_94 = local_94 + 8;
      local_74 = local_40;
      iStack_70 = local_3c;
      local_6c = local_38;
      if (local_78 == -0x80000000) {
        iVar16 = -0x80000000;
      }
      else {
        iVar16 = local_78;
        if (iVar20 == local_88) {
          puVar10 = (undefined4 *)(iVar19 + 0x10);
          local_58 = iVar4;
          local_54 = iVar3;
          local_50 = iVar5;
          for (; iVar15 != 0; iVar15 = iVar15 + -1) {
            if (puVar10[-4] != 0) {
              thunk_FUN_016d3fb4(puVar10[-3]);
            }
            if (puVar10[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar10);
            }
            puVar10 = puVar10 + 6;
          }
          if (iVar9 != 0) {
            thunk_FUN_016d3fb4(iVar19);
          }
          goto LAB_00c3cf00;
        }
      }
    }
    uVar1 = *(ushort *)(iVar12 + 0x13a);
    uVar13 = (uint)uVar1;
    local_58 = *piVar14;
    local_54 = piVar14[1];
    local_68 = iVar4;
    iStack_64 = iVar3;
    iStack_60 = iVar5;
    local_50 = iVar9;
    local_4c = iVar19;
    local_48 = iVar15;
    local_44 = iVar18;
    if (uVar13 < 0xb) {
      local_40 = *piVar14;
      local_3c = piVar14[1];
      *(ushort *)(iVar12 + 0x13a) = uVar1 + 1;
      *(int *)(iVar12 + uVar13 * 4 + 0x10c) = iVar20;
      piVar8 = (int *)(iVar12 + uVar13 * 0x18);
      *piVar8 = local_40;
      piVar8[1] = local_3c;
      piVar8[2] = iVar9;
      piVar8[3] = iVar19;
      piVar8[4] = iVar15;
      piVar8[5] = iVar18;
      iVar16 = local_78;
    }
    else {
      uVar13 = 0;
      do {
        iVar12 = *(int *)(iVar12 + 0x108);
        if (iVar12 == 0) {
          iVar12 = thunk_FUN_016d4a50(0x170);
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x170);
          }
          *(undefined2 *)(iVar12 + 0x13a) = 0;
          uVar13 = local_b4 + 1;
          *(int *)(iVar12 + 0x140) = local_cc;
          *(undefined4 *)(iVar12 + 0x108) = 0;
          if (0xfffffffe < local_b4) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af438);
          }
          *(undefined2 *)(local_cc + 0x138) = 0;
          *(int *)(local_cc + 0x108) = iVar12;
          local_c0 = iVar12;
          local_b4 = uVar13;
          goto LAB_00c3d1a0;
        }
        uVar13 = uVar13 + 1;
      } while (10 < *(ushort *)(iVar12 + 0x13a));
      local_c0 = local_cc;
LAB_00c3d1a0:
      iVar4 = thunk_FUN_016d4a50(0x140);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x140);
      }
      *(undefined2 *)(iVar4 + 0x13a) = 0;
      *(undefined4 *)(iVar4 + 0x108) = 0;
      uVar11 = uVar13;
      while (uVar11 = uVar11 - 1, uVar11 != 0) {
        iVar3 = thunk_FUN_016d4a50(0x170);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x170);
        }
        *(undefined2 *)(iVar3 + 0x13a) = 0;
        *(int *)(iVar3 + 0x140) = iVar4;
        *(undefined4 *)(iVar3 + 0x108) = 0;
        *(undefined2 *)(iVar4 + 0x138) = 0;
        *(int *)(iVar4 + 0x108) = iVar3;
        iVar4 = iVar3;
      }
      uVar11 = (uint)*(ushort *)(iVar12 + 0x13a);
      local_40 = *piVar14;
      local_3c = piVar14[1];
      local_38 = iVar9;
      local_34 = iVar19;
      iStack_30 = iVar15;
      iStack_2c = iVar18;
      if (10 < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
      }
      iVar3 = piVar14[1];
      iVar5 = *piVar14;
      uVar1 = (ushort)(uVar11 + 1);
      *(ushort *)(iVar12 + 0x13a) = uVar1;
      *(int *)(iVar12 + uVar11 * 4 + 0x10c) = iVar20;
      piVar8 = (int *)(iVar12 + uVar11 * 0x18);
      *piVar8 = iVar5;
      piVar8[1] = iVar3;
      piVar8[2] = iVar9;
      piVar8[3] = iVar19;
      piVar8[4] = iVar15;
      piVar8[5] = iVar18;
      *(int *)(iVar12 + (uVar11 + 1) * 4 + 0x140) = iVar4;
      *(ushort *)(iVar4 + 0x138) = uVar1;
      *(int *)(iVar4 + 0x108) = iVar12;
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        iVar12 = *(int *)(iVar12 + (uint)*(ushort *)(iVar12 + 0x13a) * 4 + 0x140);
      }
      local_cc = local_c0;
    }
    local_c8 = local_c8 + 1;
    local_78 = iVar16;
  } while( true );
}

