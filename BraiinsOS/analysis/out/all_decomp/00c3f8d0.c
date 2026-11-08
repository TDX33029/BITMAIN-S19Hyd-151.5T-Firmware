// FUN_00c3f8d0 @ 00c3f8d0 size=1176 calls_out=7 calls_in=2
// strings: 

void FUN_00c3f8d0(int *param_1,int *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  int unaff_r6;
  undefined4 *puVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  uint local_38;
  int local_34;
  
  iVar3 = thunk_FUN_016d4a50(0x60);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x60);
  }
  iVar4 = *param_2;
  uVar12 = 2;
  piVar20 = (int *)param_2[1];
  iVar18 = 0;
  iVar23 = 0;
  piVar14 = piVar20 + param_2[2] * 2;
  *(undefined2 *)(iVar3 + 0x5e) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  local_38 = 0;
  local_34 = iVar3;
  piVar21 = piVar20;
  do {
    if (uVar12 == 2) {
      if (piVar21 == piVar14) goto LAB_00c3fb1c;
      iVar16 = *piVar21;
      piVar13 = piVar21 + 1;
      piVar21 = piVar21 + 2;
      iVar8 = *piVar13;
    }
    else {
      iVar16 = unaff_r6;
      iVar8 = iVar18;
      if ((uVar12 & 1) == 0) {
LAB_00c3fb1c:
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(piVar20);
        }
        if (local_38 == 0) goto LAB_00c3fcac;
        iVar3 = local_34;
        uVar12 = local_38;
        break;
      }
    }
    uVar12 = 0;
    if (piVar21 != piVar14) {
      do {
        unaff_r6 = *piVar21;
        iVar18 = piVar21[1];
        piVar21 = piVar21 + 2;
        if (iVar16 != unaff_r6 || iVar8 != iVar18) {
          uVar12 = 1;
          break;
        }
        iVar16 = unaff_r6;
        iVar8 = iVar18;
      } while (piVar21 != piVar14);
    }
    uVar1 = *(ushort *)(iVar3 + 0x5e);
    if (uVar1 < 0xb) {
      *(ushort *)(iVar3 + 0x5e) = uVar1 + 1;
      iVar23 = iVar23 + 1;
      piVar13 = (int *)(iVar3 + (uint)uVar1 * 8);
      *piVar13 = iVar16;
      piVar13[1] = iVar8;
    }
    else {
      uVar19 = 0;
      do {
        iVar3 = *(int *)(iVar3 + 0x58);
        if (iVar3 == 0) {
          iVar3 = thunk_FUN_016d4a50(0x90);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x90);
          }
          *(int *)(iVar3 + 0x60) = local_34;
          uVar19 = local_38 + 1;
          *(undefined2 *)(iVar3 + 0x5e) = 0;
          *(undefined4 *)(iVar3 + 0x58) = 0;
          if (0xfffffffe < local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af438);
          }
          *(undefined2 *)(local_34 + 0x5c) = 0;
          *(int *)(local_34 + 0x58) = iVar3;
          local_38 = uVar19;
          local_34 = iVar3;
          goto LAB_00c3fa40;
        }
        uVar19 = uVar19 + 1;
      } while (10 < *(ushort *)(iVar3 + 0x5e));
LAB_00c3fa40:
      iVar5 = thunk_FUN_016d4a50(0x60);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x60);
      }
      *(undefined2 *)(iVar5 + 0x5e) = 0;
      *(undefined4 *)(iVar5 + 0x58) = 0;
      uVar7 = uVar19;
      while (uVar7 = uVar7 - 1, uVar7 != 0) {
        iVar6 = thunk_FUN_016d4a50(0x90);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x90);
        }
        *(int *)(iVar6 + 0x60) = iVar5;
        *(undefined2 *)(iVar6 + 0x5e) = 0;
        *(undefined4 *)(iVar6 + 0x58) = 0;
        *(undefined2 *)(iVar5 + 0x5c) = 0;
        *(int *)(iVar5 + 0x58) = iVar6;
        iVar5 = iVar6;
      }
      uVar7 = (uint)*(ushort *)(iVar3 + 0x5e);
      if (10 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
      }
      uVar2 = (undefined2)(uVar7 + 1);
      *(undefined2 *)(iVar3 + 0x5e) = uVar2;
      piVar13 = (int *)(iVar3 + uVar7 * 8);
      *piVar13 = iVar16;
      piVar13[1] = iVar8;
      *(int *)(iVar3 + (uVar7 + 1) * 4 + 0x60) = iVar5;
      *(undefined2 *)(iVar5 + 0x5c) = uVar2;
      *(int *)(iVar5 + 0x58) = iVar3;
      if (uVar19 == 0) {
        iVar23 = iVar23 + 1;
      }
      else {
        do {
          uVar19 = uVar19 - 1;
          iVar3 = *(int *)(iVar3 + (uint)*(ushort *)(iVar3 + 0x5e) * 4 + 0x60);
        } while (uVar19 != 0);
        iVar23 = iVar23 + 1;
      }
    }
  } while( true );
  do {
    if (*(ushort *)(iVar3 + 0x5e) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_004194a6,0x19,&DAT_018af418);
    }
    iVar18 = *(ushort *)(iVar3 + 0x5e) - 1;
    iVar4 = iVar3 + iVar18 * 4;
    iVar16 = *(int *)(iVar4 + 100);
    uVar19 = (uint)*(ushort *)(iVar16 + 0x5e);
    if (uVar19 < 5) {
      iVar4 = *(int *)(iVar4 + 0x60);
      uVar22 = -uVar19 + 5;
      uVar7 = (uint)*(ushort *)(iVar4 + 0x5e);
      if (uVar7 < uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_004194e7,0x27,&DAT_018af458);
      }
      iVar5 = uVar7 - uVar22;
      *(short *)(iVar4 + 0x5e) = (short)iVar5;
      *(undefined2 *)(iVar16 + 0x5e) = 5;
      FUN_016dd52c(iVar16 + uVar22 * 8,iVar16,uVar19 << 3);
      iVar8 = iVar5 + 1;
      iVar6 = uVar7 - iVar8;
      if (iVar6 != -uVar19 + 4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
      }
      FUN_016dd1aa(iVar16,iVar4 + iVar8 * 8,iVar6 * 8);
      puVar10 = (undefined4 *)(iVar4 + iVar5 * 8);
      puVar17 = (undefined4 *)(iVar3 + iVar18 * 8);
      uVar9 = *puVar17;
      uVar11 = puVar10[1];
      uVar15 = puVar17[1];
      *puVar17 = *puVar10;
      puVar17[1] = uVar11;
      puVar10 = (undefined4 *)(iVar16 + iVar6 * 8);
      *puVar10 = uVar9;
      puVar10[1] = uVar15;
      if (uVar12 == 1) break;
      iVar3 = iVar16 + 0x60;
      FUN_016dd52c(iVar3 + uVar22 * 4,iVar3,uVar19 * 4 + 4);
      FUN_016dd1aa(iVar3,iVar4 + iVar8 * 4 + 0x60,uVar22 * 4);
      iVar3 = *(int *)(iVar16 + 0x60);
      *(undefined2 *)(iVar3 + 0x5c) = 0;
      *(int *)(iVar3 + 0x58) = iVar16;
      iVar3 = *(int *)(iVar16 + 100);
      *(undefined2 *)(iVar3 + 0x5c) = 1;
      *(int *)(iVar3 + 0x58) = iVar16;
      iVar3 = *(int *)(iVar16 + 0x68);
      *(undefined2 *)(iVar3 + 0x5c) = 2;
      *(int *)(iVar3 + 0x58) = iVar16;
      iVar3 = *(int *)(iVar16 + 0x6c);
      *(undefined2 *)(iVar3 + 0x5c) = 3;
      *(int *)(iVar3 + 0x58) = iVar16;
      iVar3 = *(int *)(iVar16 + 0x70);
      *(int *)(iVar3 + 0x58) = iVar16;
      *(undefined2 *)(iVar3 + 0x5c) = 4;
      iVar3 = *(int *)(iVar16 + 0x74);
      *(int *)(iVar3 + 0x58) = iVar16;
      *(undefined2 *)(iVar3 + 0x5c) = 5;
    }
    uVar12 = uVar12 - 1;
    iVar3 = iVar16;
  } while (uVar12 != 0);
LAB_00c3fcac:
  param_1[1] = local_38;
  *param_1 = local_34;
  param_1[2] = iVar23;
  return;
}

