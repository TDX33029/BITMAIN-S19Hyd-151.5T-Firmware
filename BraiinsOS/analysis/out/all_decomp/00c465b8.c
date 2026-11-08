// FUN_00c465b8 @ 00c465b8 size=1052 calls_out=7 calls_in=2
// strings: 

void FUN_00c465b8(int *param_1,int param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  uint unaff_r10;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  uint local_60;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    iVar4 = thunk_FUN_016d4a50(0xe4);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xe4);
    }
    sVar1 = *(short *)(param_2 + 0xe2);
    uVar17 = 0;
    *(undefined2 *)(iVar4 + 0xe2) = 0;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    local_3c = 0;
    local_40 = iVar4;
    if (sVar1 != 0) {
      iVar19 = 0;
      do {
        uVar6 = 0;
        uVar9 = *(uint *)(param_2 + iVar19 + 100);
        if ((0xfffffff < uVar9) || (uVar16 = uVar9 * 0x10, 0x7ffffff8 < uVar16)) {
LAB_00c46934:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar6,unaff_r10);
        }
        puVar15 = (undefined4 *)(param_2 + uVar17 * 8);
        uVar10 = *puVar15;
        uVar18 = *(undefined4 *)(param_2 + iVar19 + 0x60);
        uVar6 = puVar15[1];
        if (uVar16 == 0) {
          unaff_r10 = 8;
          local_44 = 0;
        }
        else {
          unaff_r10 = thunk_FUN_016d4a50(uVar16);
          if (unaff_r10 == 0) {
            uVar6 = 8;
            unaff_r10 = uVar16;
            goto LAB_00c46934;
          }
          local_44 = uVar9;
        }
        FUN_016dd1aa(unaff_r10,uVar18,uVar16);
        uVar16 = (uint)*(ushort *)(iVar4 + 0xe2);
        if (10 < uVar16) {
          local_38 = uVar17;
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        *(ushort *)(iVar4 + 0xe2) = *(ushort *)(iVar4 + 0xe2) + 1;
        uVar17 = uVar17 + 1;
        uVar2 = *(ushort *)(param_2 + 0xe2);
        iVar19 = iVar19 + 0xc;
        puVar15 = (undefined4 *)(iVar4 + uVar16 * 8);
        *puVar15 = uVar10;
        puVar15[1] = uVar6;
        puVar14 = (uint *)(iVar4 + 0x5c + uVar16 * 0xc);
        *puVar14 = local_44;
        puVar14[1] = unaff_r10;
        puVar14[2] = uVar9;
      } while (uVar17 < uVar2);
    }
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = uVar17;
    return;
  }
  FUN_00c465b8(&local_40,*(undefined4 *)(param_2 + 0xe4));
  uVar17 = local_3c;
  if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  iVar4 = thunk_FUN_016d4a50(0x114);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x114);
  }
  *(int *)(iVar4 + 0xe4) = local_40;
  *(undefined2 *)(iVar4 + 0xe2) = 0;
  *(undefined4 *)(iVar4 + 0x58) = 0;
  bVar22 = 0xfffffffe < local_3c;
  local_3c = local_3c + 1;
  if (bVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(undefined2 *)(local_40 + 0xe0) = 0;
  *(int *)(local_40 + 0x58) = iVar4;
  uVar9 = (uint)*(ushort *)(param_2 + 0xe2);
  local_40 = iVar4;
  if (uVar9 != 0) {
    iVar19 = 0;
    puVar15 = (undefined4 *)(param_2 + 4);
    uVar21 = 0;
    uVar16 = local_38;
    do {
      uVar6 = 0;
      iVar5 = param_2 + 0xe8 + iVar19 * 3;
      uVar20 = *(uint *)(iVar5 + -0x84);
      if ((0xfffffff < uVar20) || (uVar11 = uVar20 * 0x10, 0x7ffffff8 < uVar11)) {
LAB_00c467e8:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar6,uVar9);
      }
      uVar18 = *(undefined4 *)(iVar5 + -0x88);
      uVar10 = puVar15[-1];
      uVar6 = *puVar15;
      if (uVar11 == 0) {
        uVar9 = 8;
        local_60 = 0;
      }
      else {
        uVar9 = thunk_FUN_016d4a50(uVar11);
        if (uVar9 == 0) {
          uVar6 = 8;
          uVar9 = uVar11;
          goto LAB_00c467e8;
        }
        local_60 = uVar20;
      }
      FUN_016dd1aa(uVar9,uVar18,uVar11);
      FUN_00c465b8(&local_30,*(undefined4 *)(param_2 + 0xe8 + iVar19),param_3 + -1);
      iVar5 = local_28;
      if (local_30 == 0) {
        iVar7 = thunk_FUN_016d4a50(0xe4);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xe4);
        }
        *(undefined2 *)(iVar7 + 0xe2) = 0;
        *(undefined4 *)(iVar7 + 0x58) = 0;
        if (uVar17 != 0) goto LAB_00c46970;
      }
      else {
        iVar7 = local_30;
        if (local_2c != uVar17) {
LAB_00c46970:
          uVar6 = 0x30;
          puVar12 = &DAT_018ac46c;
          puVar8 = &DAT_00413115;
          goto LAB_00c4699c;
        }
      }
      uVar11 = (uint)*(ushort *)(iVar4 + 0xe2);
      if (10 < uVar11) {
        uVar6 = 0x20;
        puVar8 = &DAT_00565dd0;
        puVar12 = &DAT_018af428;
LAB_00c4699c:
        local_38 = uVar16;
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar8,uVar6,puVar12);
      }
      uVar3 = (undefined2)(uVar11 + 1);
      *(undefined2 *)(iVar4 + 0xe2) = uVar3;
      puVar13 = (undefined4 *)(iVar4 + uVar11 * 8);
      *puVar13 = uVar10;
      puVar15 = puVar15 + 2;
      puVar13[1] = uVar6;
      uVar21 = uVar21 + 1;
      iVar19 = iVar19 + 4;
      puVar14 = (uint *)(iVar4 + 0x5c + uVar11 * 0xc);
      *puVar14 = local_60;
      puVar14[1] = uVar9;
      ((int *)(iVar4 + 0xe4))[uVar11 + 1] = iVar7;
      puVar14[2] = uVar20;
      *(undefined2 *)(iVar7 + 0xe0) = uVar3;
      *(int *)(iVar7 + 0x58) = iVar4;
      uVar16 = iVar5 + uVar16 + 1;
    } while (uVar21 < *(ushort *)(param_2 + 0xe2));
    local_38 = uVar16;
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}

