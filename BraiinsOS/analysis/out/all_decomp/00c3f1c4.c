// FUN_00c3f1c4 @ 00c3f1c4 size=1536 calls_out=7 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00c3f248) */

void FUN_00c3f1c4(int *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  int unaff_r5;
  int unaff_r8;
  int *piVar17;
  int *piVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  uint uVar23;
  int iVar24;
  undefined4 uVar25;
  uint uVar26;
  undefined8 unaff_d8;
  undefined8 uVar27;
  undefined8 uVar28;
  uint local_5c;
  int local_44;
  
  iVar2 = thunk_FUN_016d4a50(0x110);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x110);
  }
  iVar3 = *param_2;
  piVar17 = (int *)param_2[1];
  iVar20 = 0;
  piVar11 = piVar17 + param_2[2] * 6;
  *(undefined2 *)(iVar2 + 0x10e) = 0;
  *(undefined4 *)(iVar2 + 0x108) = 0;
  local_5c = 0;
  piVar13 = param_1;
  piVar18 = piVar17;
  local_44 = iVar2;
LAB_00c3f28c:
  if (piVar18 != piVar11) {
    iVar8 = *piVar18;
    iVar4 = piVar18[1];
    piVar22 = (int *)piVar18[2];
    uVar28 = *(undefined8 *)(piVar18 + 4);
    piVar18 = piVar18 + 6;
    iVar10 = iVar20;
    do {
      if (piVar18 == piVar11) {
LAB_00c3f350:
        iVar24 = 0;
        uVar5 = (uint)*(ushort *)(iVar2 + 0x10e);
        uVar27 = unaff_d8;
        if (10 < uVar5) goto LAB_00c3f364;
LAB_00c3f24c:
        *(short *)(iVar2 + 0x10e) = (short)uVar5 + 1;
        iVar20 = iVar2 + uVar5 * 8;
        *(int *)(iVar20 + 0xb0) = iVar8;
        *(int *)(iVar20 + 0xb4) = iVar4;
        piVar9 = (int *)(iVar2 + uVar5 * 0x10);
        *piVar9 = (int)piVar22;
        *(undefined8 *)(piVar9 + 2) = uVar28;
        iVar4 = unaff_r5;
        iVar8 = unaff_r8;
      }
      else {
        unaff_r8 = *piVar18;
        iVar24 = 1;
        unaff_r5 = piVar18[1];
        piVar13 = (int *)piVar18[2];
        uVar27 = *(undefined8 *)(piVar18 + 4);
        piVar18 = piVar18 + 6;
        if (iVar8 == unaff_r8 && iVar4 == unaff_r5) {
          do {
            unaff_d8 = uVar27;
            piVar22 = piVar13;
            uVar28 = unaff_d8;
            if (piVar18 == piVar11) {
              unaff_r5 = iVar4;
              unaff_r8 = iVar8;
              goto LAB_00c3f350;
            }
            unaff_r8 = *piVar18;
            unaff_r5 = piVar18[1];
            piVar13 = (int *)piVar18[2];
            uVar27 = *(undefined8 *)(piVar18 + 4);
            piVar18 = piVar18 + 6;
          } while (iVar8 == unaff_r8 && iVar4 == unaff_r5);
        }
        uVar5 = (uint)*(ushort *)(iVar2 + 0x10e);
        unaff_d8 = uVar27;
        if (uVar5 < 0xb) goto LAB_00c3f24c;
LAB_00c3f364:
        uVar5 = 0;
        do {
          iVar2 = *(int *)(iVar2 + 0x108);
          if (iVar2 == 0) {
            iVar2 = thunk_FUN_016d4a50(0x140);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x140);
            }
            uVar5 = local_5c + 1;
            *(undefined2 *)(iVar2 + 0x10e) = 0;
            *(int *)(iVar2 + 0x110) = local_44;
            *(undefined4 *)(iVar2 + 0x108) = 0;
            if (0xfffffffe < local_5c) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018af438);
            }
            *(undefined2 *)(local_44 + 0x10c) = 0;
            *(int *)(local_44 + 0x108) = iVar2;
            local_5c = uVar5;
            local_44 = iVar2;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (10 < *(ushort *)(iVar2 + 0x10e));
        iVar20 = thunk_FUN_016d4a50(0x110);
        if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x110);
        }
        *(undefined2 *)(iVar20 + 0x10e) = 0;
        *(undefined4 *)(iVar20 + 0x108) = 0;
        uVar26 = uVar5;
        while (uVar26 = uVar26 - 1, uVar26 != 0) {
          iVar6 = thunk_FUN_016d4a50(0x140);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x140);
          }
          *(undefined2 *)(iVar6 + 0x10e) = 0;
          *(int *)(iVar6 + 0x110) = iVar20;
          *(undefined4 *)(iVar6 + 0x108) = 0;
          *(undefined2 *)(iVar20 + 0x10c) = 0;
          *(int *)(iVar20 + 0x108) = iVar6;
          iVar20 = iVar6;
        }
        uVar26 = (uint)*(ushort *)(iVar2 + 0x10e);
        if (10 < uVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
        }
        uVar1 = (ushort)(uVar26 + 1);
        *(ushort *)(iVar2 + 0x10e) = uVar1;
        iVar6 = iVar2 + uVar26 * 8;
        *(int *)(iVar6 + 0xb0) = iVar8;
        *(int *)(iVar6 + 0xb4) = iVar4;
        piVar9 = (int *)(iVar2 + uVar26 * 0x10);
        *piVar9 = (int)piVar22;
        *(undefined8 *)(piVar9 + 2) = uVar28;
        *(int *)(iVar2 + (uVar26 + 1) * 4 + 0x110) = iVar20;
        *(ushort *)(iVar20 + 0x10c) = uVar1;
        *(int *)(iVar20 + 0x108) = iVar2;
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          iVar2 = *(int *)(iVar2 + (uint)*(ushort *)(iVar2 + 0x10e) * 4 + 0x110);
        }
        iVar4 = unaff_r5;
        iVar8 = unaff_r8;
        unaff_d8 = uVar27;
      }
      iVar20 = iVar10 + 1;
      unaff_r5 = iVar4;
      unaff_r8 = iVar8;
      if (iVar24 == 2) goto LAB_00c3f28c;
      iVar20 = iVar10 + 1;
      iVar10 = iVar20;
      piVar22 = piVar13;
      uVar28 = unaff_d8;
      if (iVar24 == 0) break;
    } while( true );
  }
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(piVar17);
  }
  if (local_5c != 0) {
    iVar2 = local_44;
    uVar5 = local_5c;
    do {
      if (*(ushort *)(iVar2 + 0x10e) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_004194a6,0x19,&DAT_018af418);
      }
      iVar8 = *(ushort *)(iVar2 + 0x10e) - 1;
      iVar3 = iVar2 + iVar8 * 4;
      iVar4 = *(int *)(iVar3 + 0x114);
      uVar26 = (uint)*(ushort *)(iVar4 + 0x10e);
      if (uVar26 < 5) {
        iVar3 = *(int *)(iVar3 + 0x110);
        uVar14 = -uVar26 + 5;
        uVar23 = (uint)*(ushort *)(iVar3 + 0x10e);
        if (uVar23 < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194e7,0x27,&DAT_018af458);
        }
        iVar24 = iVar4 + 0xb0;
        iVar6 = uVar23 - uVar14;
        *(ushort *)(iVar3 + 0x10e) = (ushort)iVar6;
        *(ushort *)(iVar4 + 0x10e) = 5;
        FUN_016dd52c(iVar24 + uVar14 * 8,iVar24,uVar26 << 3);
        FUN_016dd52c(iVar4 + uVar14 * 0x10,iVar4,uVar26 << 4);
        iVar10 = iVar6 + 1;
        iVar21 = uVar23 - iVar10;
        if (iVar21 != -uVar26 + 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
        }
        FUN_016dd1aa(iVar24,iVar3 + 0xb0 + iVar10 * 8,iVar21 * 8);
        FUN_016dd1aa(iVar4,iVar3 + iVar10 * 0x10,iVar21 * 0x10);
        puVar15 = (undefined4 *)(iVar3 + 0xb0 + iVar6 * 8);
        puVar7 = (undefined4 *)(iVar3 + iVar6 * 0x10);
        uVar25 = *puVar7;
        uVar12 = puVar15[1];
        uVar28 = *(undefined8 *)(puVar7 + 2);
        iVar6 = iVar2 + iVar8 * 8;
        uVar16 = *(undefined4 *)(iVar6 + 0xb0);
        uVar19 = *(undefined4 *)(iVar6 + 0xb4);
        *(undefined4 *)(iVar6 + 0xb0) = *puVar15;
        *(undefined4 *)(iVar6 + 0xb4) = uVar12;
        puVar7 = (undefined4 *)(iVar2 + iVar8 * 0x10);
        uVar12 = *puVar7;
        uVar27 = *(undefined8 *)(puVar7 + 2);
        *puVar7 = uVar25;
        *(undefined8 *)(puVar7 + 2) = uVar28;
        puVar7 = (undefined4 *)(iVar24 + iVar21 * 8);
        *puVar7 = uVar16;
        puVar7[1] = uVar19;
        puVar7 = (undefined4 *)(iVar4 + iVar21 * 0x10);
        *puVar7 = uVar12;
        *(undefined8 *)(puVar7 + 2) = uVar27;
        if (uVar5 == 1) break;
        iVar2 = iVar4 + 0x110;
        FUN_016dd52c(iVar2 + uVar14 * 4,iVar2,uVar26 * 4 + 4);
        FUN_016dd1aa(iVar2,iVar3 + iVar10 * 4 + 0x110,uVar14 * 4);
        iVar2 = *(int *)(iVar4 + 0x110);
        *(undefined2 *)(iVar2 + 0x10c) = 0;
        *(int *)(iVar2 + 0x108) = iVar4;
        iVar2 = *(int *)(iVar4 + 0x114);
        *(undefined2 *)(iVar2 + 0x10c) = 1;
        *(int *)(iVar2 + 0x108) = iVar4;
        iVar2 = *(int *)(iVar4 + 0x118);
        *(undefined2 *)(iVar2 + 0x10c) = 2;
        *(int *)(iVar2 + 0x108) = iVar4;
        iVar2 = *(int *)(iVar4 + 0x11c);
        *(undefined2 *)(iVar2 + 0x10c) = 3;
        *(int *)(iVar2 + 0x108) = iVar4;
        iVar2 = *(int *)(iVar4 + 0x120);
        *(undefined2 *)(iVar2 + 0x10c) = 4;
        *(int *)(iVar2 + 0x108) = iVar4;
        iVar2 = *(int *)(iVar4 + 0x124);
        *(undefined2 *)(iVar2 + 0x10c) = 5;
        *(int *)(iVar2 + 0x108) = iVar4;
      }
      uVar5 = uVar5 - 1;
      iVar2 = iVar4;
    } while (uVar5 != 0);
  }
  *param_1 = local_44;
  param_1[1] = local_5c;
  param_1[2] = iVar20;
  return;
}

