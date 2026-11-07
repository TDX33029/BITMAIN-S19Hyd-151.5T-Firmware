// FUN_00c3e348 @ 00c3e348 size=1468 calls_out=7 calls_in=3
// strings: 

void FUN_00c3e348(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int unaff_r6;
  int iVar18;
  int iVar19;
  int unaff_r10;
  int iVar20;
  int *piVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint local_50;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar4 = thunk_FUN_016d4a50(0xb8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xb8);
  }
  iVar5 = *param_2;
  uVar24 = 2;
  piVar21 = (int *)param_2[1];
  iVar14 = 0;
  piVar25 = piVar21 + param_2[2] * 4;
  *(undefined2 *)(iVar4 + 0xb6) = 0;
  *(undefined4 *)(iVar4 + 0xb0) = 0;
  local_50 = 0;
  piVar22 = piVar21;
  local_3c = iVar4;
  do {
    while (uVar24 != 2) {
      if ((uVar24 & 1) == 0) goto LAB_00c3e65c;
      iVar6 = local_38;
      iVar7 = local_34;
      iVar18 = unaff_r6;
      iVar19 = unaff_r10;
      if (piVar22 == piVar25) goto LAB_00c3e47c;
LAB_00c3e410:
      unaff_r10 = *piVar22;
      piVar13 = piVar22 + 1;
      uVar24 = 1;
      piVar1 = piVar22 + 2;
      piVar2 = piVar22 + 3;
      piVar22 = piVar22 + 4;
      unaff_r6 = *piVar13;
      local_38 = *piVar1;
      local_34 = *piVar2;
      if (iVar19 == unaff_r10 && iVar18 == *piVar13) {
        do {
          iVar6 = local_38;
          iVar7 = local_34;
          if (piVar22 == piVar25) {
            uVar24 = 0;
            unaff_r6 = iVar18;
            unaff_r10 = iVar19;
            piVar22 = piVar25;
            break;
          }
          unaff_r10 = *piVar22;
          unaff_r6 = piVar22[1];
          piVar13 = piVar22 + 2;
          piVar1 = piVar22 + 3;
          piVar22 = piVar22 + 4;
          local_38 = *piVar13;
          local_34 = *piVar1;
        } while (iVar19 == unaff_r10 && iVar18 == unaff_r6);
      }
      uVar12 = (uint)*(ushort *)(iVar4 + 0xb6);
      uVar26 = CONCAT44(iVar7,iVar6);
      if (10 < uVar12) goto LAB_00c3e494;
LAB_00c3e3c0:
      *(short *)(iVar4 + 0xb6) = (short)uVar12 + 1;
      iVar14 = iVar14 + 1;
      piVar13 = (int *)(iVar4 + uVar12 * 8);
      *piVar13 = iVar19;
      piVar13[1] = iVar18;
      *(undefined8 *)(piVar13 + 0x16) = uVar26;
    }
    if (piVar22 == piVar25) {
LAB_00c3e65c:
      if (iVar5 != 0) {
        thunk_FUN_016d3fb4(piVar21);
      }
      if (local_50 == 0) goto LAB_00c3e83c;
      iVar4 = local_3c;
      uVar24 = local_50;
      break;
    }
    piVar13 = piVar22 + 4;
    iVar6 = piVar22[2];
    iVar7 = piVar22[3];
    iVar18 = piVar22[1];
    iVar19 = *piVar22;
    piVar22 = piVar13;
    if (piVar13 != piVar25) goto LAB_00c3e410;
LAB_00c3e47c:
    uVar24 = 0;
    uVar12 = (uint)*(ushort *)(iVar4 + 0xb6);
    uVar26 = CONCAT44(iVar7,iVar6);
    piVar22 = piVar25;
    if (uVar12 < 0xb) goto LAB_00c3e3c0;
LAB_00c3e494:
    uVar12 = 0;
    do {
      iVar4 = *(int *)(iVar4 + 0xb0);
      if (iVar4 == 0) {
        iVar6 = thunk_FUN_016d4a50(0xe8);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0xe8);
        }
        *(int *)(iVar6 + 0xb8) = local_3c;
        uVar12 = local_50 + 1;
        *(undefined2 *)(iVar6 + 0xb6) = 0;
        *(undefined4 *)(iVar6 + 0xb0) = 0;
        if (0xfffffffe < local_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af438);
        }
        *(undefined2 *)(local_3c + 0xb4) = 0;
        *(int *)(local_3c + 0xb0) = iVar6;
        iVar4 = iVar6;
        local_50 = uVar12;
        goto LAB_00c3e514;
      }
      uVar12 = uVar12 + 1;
    } while (10 < *(ushort *)(iVar4 + 0xb6));
    iVar6 = local_3c;
LAB_00c3e514:
    iVar7 = thunk_FUN_016d4a50(0xb8);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xb8);
    }
    *(undefined2 *)(iVar7 + 0xb6) = 0;
    *(undefined4 *)(iVar7 + 0xb0) = 0;
    uVar9 = uVar12;
    while (uVar9 = uVar9 - 1, uVar9 != 0) {
      iVar8 = thunk_FUN_016d4a50(0xe8);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0xe8);
      }
      *(int *)(iVar8 + 0xb8) = iVar7;
      *(undefined2 *)(iVar8 + 0xb6) = 0;
      *(undefined4 *)(iVar8 + 0xb0) = 0;
      *(undefined2 *)(iVar7 + 0xb4) = 0;
      *(int *)(iVar7 + 0xb0) = iVar8;
      iVar7 = iVar8;
    }
    uVar9 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (10 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
    }
    uVar3 = (undefined2)(uVar9 + 1);
    *(undefined2 *)(iVar4 + 0xb6) = uVar3;
    piVar13 = (int *)(iVar4 + uVar9 * 8);
    *piVar13 = iVar19;
    piVar13[1] = iVar18;
    *(undefined8 *)(piVar13 + 0x16) = uVar26;
    *(int *)(iVar4 + (uVar9 + 1) * 4 + 0xb8) = iVar7;
    *(undefined2 *)(iVar7 + 0xb4) = uVar3;
    *(int *)(iVar7 + 0xb0) = iVar4;
    local_3c = iVar6;
    if (uVar12 == 0) {
      iVar14 = iVar14 + 1;
    }
    else {
      do {
        uVar12 = uVar12 - 1;
        iVar4 = *(int *)(iVar4 + (uint)*(ushort *)(iVar4 + 0xb6) * 4 + 0xb8);
      } while (uVar12 != 0);
      iVar14 = iVar14 + 1;
    }
  } while( true );
  do {
    if (*(ushort *)(iVar4 + 0xb6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_004194a6,0x19,&DAT_018af418);
    }
    iVar6 = *(ushort *)(iVar4 + 0xb6) - 1;
    iVar5 = iVar4 + iVar6 * 4;
    iVar7 = *(int *)(iVar5 + 0xbc);
    uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar12 < 5) {
      iVar5 = *(int *)(iVar5 + 0xb8);
      uVar23 = -uVar12 + 5;
      uVar9 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar9 < uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_004194e7,0x27,&DAT_018af458);
      }
      iVar8 = uVar9 - uVar23;
      *(short *)(iVar5 + 0xb6) = (short)iVar8;
      *(undefined2 *)(iVar7 + 0xb6) = 5;
      FUN_016dd52c(iVar7 + uVar23 * 8,iVar7,uVar12 << 3);
      iVar18 = iVar7 + 0x58;
      FUN_016dd52c(iVar18 + uVar23 * 8,iVar18,uVar12 << 3);
      iVar19 = iVar8 + 1;
      iVar20 = uVar9 - iVar19;
      if (iVar20 != -uVar12 + 4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
      }
      FUN_016dd1aa(iVar7,iVar5 + iVar19 * 8);
      FUN_016dd1aa(iVar18,iVar5 + 0x58 + iVar19 * 8,iVar20 * 8);
      puVar16 = (undefined4 *)(iVar5 + iVar8 * 8);
      uVar26 = *(undefined8 *)(iVar5 + 0x58 + iVar8 * 8);
      uVar15 = puVar16[1];
      puVar17 = (undefined4 *)(iVar4 + iVar6 * 8);
      uVar11 = *puVar17;
      uVar27 = *(undefined8 *)(puVar17 + 0x16);
      uVar10 = puVar17[1];
      *puVar17 = *puVar16;
      puVar17[1] = uVar15;
      *(undefined8 *)(puVar17 + 0x16) = uVar26;
      *(undefined8 *)(iVar18 + iVar20 * 8) = uVar27;
      puVar16 = (undefined4 *)(iVar7 + iVar20 * 8);
      *puVar16 = uVar11;
      puVar16[1] = uVar10;
      if (uVar24 == 1) break;
      iVar4 = iVar7 + 0xb8;
      FUN_016dd52c(iVar4 + uVar23 * 4,iVar4,uVar12 * 4 + 4);
      FUN_016dd1aa(iVar4,iVar5 + iVar19 * 4 + 0xb8,uVar23 * 4);
      iVar4 = *(int *)(iVar7 + 0xb8);
      *(undefined2 *)(iVar4 + 0xb4) = 0;
      *(int *)(iVar4 + 0xb0) = iVar7;
      iVar4 = *(int *)(iVar7 + 0xbc);
      *(undefined2 *)(iVar4 + 0xb4) = 1;
      *(int *)(iVar4 + 0xb0) = iVar7;
      iVar4 = *(int *)(iVar7 + 0xc0);
      *(undefined2 *)(iVar4 + 0xb4) = 2;
      *(int *)(iVar4 + 0xb0) = iVar7;
      iVar4 = *(int *)(iVar7 + 0xc4);
      *(int *)(iVar4 + 0xb0) = iVar7;
      *(undefined2 *)(iVar4 + 0xb4) = 3;
      iVar4 = *(int *)(iVar7 + 200);
      *(int *)(iVar4 + 0xb0) = iVar7;
      *(undefined2 *)(iVar4 + 0xb4) = 4;
      iVar4 = *(int *)(iVar7 + 0xcc);
      *(int *)(iVar4 + 0xb0) = iVar7;
      *(undefined2 *)(iVar4 + 0xb4) = 5;
    }
    uVar24 = uVar24 - 1;
    iVar4 = iVar7;
  } while (uVar24 != 0);
LAB_00c3e83c:
  *param_1 = local_3c;
  param_1[1] = local_50;
  param_1[2] = iVar14;
  return;
}

