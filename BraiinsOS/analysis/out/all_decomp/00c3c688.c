// FUN_00c3c688 @ 00c3c688 size=1376 calls_out=7 calls_in=2
// strings: 

void FUN_00c3c688(int *param_1,int *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 *puVar18;
  int *piVar19;
  int *piVar20;
  undefined4 uVar21;
  int unaff_r8;
  int unaff_r9;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int *piVar26;
  int *piVar27;
  int local_40;
  uint local_2c;
  uint local_28;
  
  iVar3 = thunk_FUN_016d4a50(0x8c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x8c);
  }
  iVar9 = *param_2;
  iVar13 = 0;
  iVar10 = param_2[2];
  iVar25 = 0;
  piVar19 = (int *)param_2[1];
  *(undefined2 *)(iVar3 + 0x8a) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  piVar26 = piVar19 + iVar10 * 3;
  local_28 = 2;
  local_2c = 0;
  piVar20 = piVar19;
  local_40 = iVar3;
  do {
    if (local_28 == 2) {
      if (piVar20 == piVar26) {
LAB_00c3c938:
        if (iVar9 != 0) {
          thunk_FUN_016d3fb4(piVar19);
        }
        if (local_2c == 0) goto LAB_00c3cb28;
        iVar3 = local_40;
        uVar17 = local_2c;
        break;
      }
      iVar15 = *piVar20;
      piVar14 = piVar20 + 1;
      piVar27 = piVar20 + 2;
      piVar20 = piVar20 + 3;
      iVar11 = *piVar14;
      iVar10 = *piVar27;
    }
    else {
      iVar15 = unaff_r8;
      iVar11 = unaff_r9;
      iVar10 = iVar13;
      if ((local_28 & 1) == 0) goto LAB_00c3c938;
    }
    local_28 = 0;
    if (piVar20 != piVar26) {
      iVar13 = piVar20[2];
      local_28 = 1;
      unaff_r8 = *piVar20;
      unaff_r9 = piVar20[1];
      piVar20 = piVar20 + 3;
      if (iVar15 == unaff_r8 && iVar11 == unaff_r9) {
        do {
          iVar10 = iVar13;
          if (piVar20 == piVar26) {
            uVar1 = *(ushort *)(iVar3 + 0x8a);
            local_28 = 0;
            iVar13 = iVar10;
            unaff_r8 = iVar15;
            unaff_r9 = iVar11;
            goto joined_r0x00c3c930;
          }
          unaff_r8 = *piVar20;
          unaff_r9 = piVar20[1];
          iVar13 = piVar20[2];
          piVar20 = piVar20 + 3;
        } while (iVar15 == unaff_r8 && iVar11 == unaff_r9);
      }
    }
    uVar1 = *(ushort *)(iVar3 + 0x8a);
joined_r0x00c3c930:
    uVar17 = (uint)uVar1;
    if (uVar17 < 0xb) {
      *(ushort *)(iVar3 + 0x8a) = uVar1 + 1;
      iVar25 = iVar25 + 1;
      piVar14 = (int *)(iVar3 + uVar17 * 8);
      *piVar14 = iVar15;
      piVar14[1] = iVar11;
      *(int *)(iVar3 + uVar17 * 4 + 0x5c) = iVar10;
    }
    else {
      uVar17 = 0;
      do {
        iVar3 = *(int *)(iVar3 + 0x58);
        if (iVar3 == 0) {
          iVar3 = thunk_FUN_016d4a50(0xbc);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xbc);
          }
          *(int *)(iVar3 + 0x8c) = local_40;
          uVar17 = local_2c + 1;
          *(undefined2 *)(iVar3 + 0x8a) = 0;
          *(undefined4 *)(iVar3 + 0x58) = 0;
          if (0xfffffffe < local_2c) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af438);
          }
          *(undefined2 *)(local_40 + 0x88) = 0;
          *(int *)(local_40 + 0x58) = iVar3;
          local_2c = uVar17;
          local_40 = iVar3;
          goto LAB_00c3c820;
        }
        uVar17 = uVar17 + 1;
      } while (10 < *(ushort *)(iVar3 + 0x8a));
LAB_00c3c820:
      iVar4 = thunk_FUN_016d4a50(0x8c);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x8c);
      }
      *(undefined2 *)(iVar4 + 0x8a) = 0;
      *(undefined4 *)(iVar4 + 0x58) = 0;
      uVar6 = uVar17;
      while (uVar6 = uVar6 - 1, uVar6 != 0) {
        iVar5 = thunk_FUN_016d4a50(0xbc);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xbc);
        }
        *(int *)(iVar5 + 0x8c) = iVar4;
        *(undefined2 *)(iVar5 + 0x8a) = 0;
        *(undefined4 *)(iVar5 + 0x58) = 0;
        *(undefined2 *)(iVar4 + 0x88) = 0;
        *(int *)(iVar4 + 0x58) = iVar5;
        iVar4 = iVar5;
      }
      uVar6 = (uint)*(ushort *)(iVar3 + 0x8a);
      if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
      }
      uVar2 = (undefined2)(uVar6 + 1);
      *(undefined2 *)(iVar3 + 0x8a) = uVar2;
      piVar14 = (int *)(iVar3 + uVar6 * 8);
      *piVar14 = iVar15;
      piVar14[1] = iVar11;
      *(int *)(iVar3 + uVar6 * 4 + 0x5c) = iVar10;
      *(int *)(iVar3 + (uVar6 + 1) * 4 + 0x8c) = iVar4;
      *(undefined2 *)(iVar4 + 0x88) = uVar2;
      *(int *)(iVar4 + 0x58) = iVar3;
      if (uVar17 == 0) {
        iVar25 = iVar25 + 1;
      }
      else {
        do {
          uVar17 = uVar17 - 1;
          iVar3 = *(int *)(iVar3 + (uint)*(ushort *)(iVar3 + 0x8a) * 4 + 0x8c);
        } while (uVar17 != 0);
        iVar25 = iVar25 + 1;
      }
    }
  } while( true );
  do {
    if (*(ushort *)(iVar3 + 0x8a) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_004194a6,0x19,&DAT_018af418);
    }
    iVar9 = *(ushort *)(iVar3 + 0x8a) - 1;
    iVar13 = iVar3 + iVar9 * 4;
    iVar10 = *(int *)(iVar13 + 0x90);
    uVar6 = (uint)*(ushort *)(iVar10 + 0x8a);
    if (uVar6 < 5) {
      iVar15 = *(int *)(iVar13 + 0x8c);
      uVar22 = -uVar6 + 5;
      uVar23 = (uint)*(ushort *)(iVar15 + 0x8a);
      if (uVar23 < uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_004194e7,0x27,&DAT_018af458);
      }
      iVar4 = uVar23 - uVar22;
      *(short *)(iVar15 + 0x8a) = (short)iVar4;
      *(undefined2 *)(iVar10 + 0x8a) = 5;
      FUN_016dd52c(iVar10 + uVar22 * 8,iVar10,uVar6 << 3);
      iVar5 = iVar10 + 0x5c;
      FUN_016dd52c(iVar5 + uVar22 * 4,iVar5,uVar6 * 4);
      iVar11 = iVar4 + 1;
      iVar24 = uVar23 - iVar11;
      if (iVar24 != -uVar6 + 4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
      }
      FUN_016dd1aa(iVar10,iVar15 + iVar11 * 8,iVar24 * 8);
      FUN_016dd1aa(iVar5,iVar15 + 0x5c + iVar11 * 4,iVar24 * 4);
      uVar12 = *(undefined4 *)(iVar15 + 0x5c + iVar4 * 4);
      puVar7 = (undefined4 *)(iVar15 + iVar4 * 8);
      uVar16 = puVar7[1];
      puVar18 = (undefined4 *)(iVar3 + iVar9 * 8);
      uVar8 = *puVar18;
      uVar21 = puVar18[1];
      *puVar18 = *puVar7;
      puVar18[1] = uVar16;
      uVar16 = *(undefined4 *)(iVar13 + 0x5c);
      *(undefined4 *)(iVar13 + 0x5c) = uVar12;
      puVar7 = (undefined4 *)(iVar10 + iVar24 * 8);
      *puVar7 = uVar8;
      puVar7[1] = uVar21;
      *(undefined4 *)(iVar5 + iVar24 * 4) = uVar16;
      if (uVar17 == 1) break;
      iVar3 = iVar10 + 0x8c;
      FUN_016dd52c(iVar3 + uVar22 * 4,iVar3,uVar6 * 4 + 4);
      FUN_016dd1aa(iVar3,iVar15 + iVar11 * 4 + 0x8c,uVar22 * 4);
      iVar3 = *(int *)(iVar10 + 0x8c);
      *(undefined2 *)(iVar3 + 0x88) = 0;
      *(int *)(iVar3 + 0x58) = iVar10;
      iVar3 = *(int *)(iVar10 + 0x90);
      *(undefined2 *)(iVar3 + 0x88) = 1;
      *(int *)(iVar3 + 0x58) = iVar10;
      iVar3 = *(int *)(iVar10 + 0x94);
      *(undefined2 *)(iVar3 + 0x88) = 2;
      *(int *)(iVar3 + 0x58) = iVar10;
      iVar3 = *(int *)(iVar10 + 0x98);
      *(undefined2 *)(iVar3 + 0x88) = 3;
      *(int *)(iVar3 + 0x58) = iVar10;
      iVar3 = *(int *)(iVar10 + 0x9c);
      *(int *)(iVar3 + 0x58) = iVar10;
      *(undefined2 *)(iVar3 + 0x88) = 4;
      iVar3 = *(int *)(iVar10 + 0xa0);
      *(int *)(iVar3 + 0x58) = iVar10;
      *(undefined2 *)(iVar3 + 0x88) = 5;
    }
    uVar17 = uVar17 - 1;
    iVar3 = iVar10;
  } while (uVar17 != 0);
LAB_00c3cb28:
  *param_1 = local_40;
  param_1[1] = local_2c;
  param_1[2] = iVar25;
  return;
}

