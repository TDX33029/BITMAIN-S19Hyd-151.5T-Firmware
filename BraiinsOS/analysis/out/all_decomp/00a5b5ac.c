// FUN_00a5b5ac @ 00a5b5ac size=1056 calls_out=7 calls_in=1
// strings: 

void FUN_00a5b5ac(undefined4 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  uint uVar6;
  ushort *puVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  undefined4 *local_40;
  uint local_3c;
  int local_38;
  undefined4 *local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x110);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x110);
    }
    uVar19 = 0;
    uVar1 = *(ushort *)(param_2 + 0x10e);
    *puVar3 = 0;
    local_3c = 0;
    puVar7 = (ushort *)((int)puVar3 + 0x10e);
    *puVar7 = 0;
    local_40 = puVar3;
    if (uVar1 != 0) {
      puVar14 = (undefined4 *)(param_2 + 0x8c);
      do {
        iVar18 = puVar14[-0x20];
        iVar12 = 1;
        uVar15 = puVar14[-0x21];
        iVar17 = 1;
        if ((iVar18 != 0) && (iVar17 = thunk_FUN_016d4a50(iVar18), iVar17 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar18);
        }
        FUN_016dd1aa(iVar17,uVar15,iVar18);
        iVar10 = puVar14[1];
        uVar15 = *puVar14;
        if ((iVar10 != 0) && (iVar12 = thunk_FUN_016d4a50(iVar10), iVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar10);
        }
        FUN_016dd1aa(iVar12,uVar15,iVar10);
        uVar11 = (uint)*puVar7;
        if (10 < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        *puVar7 = *puVar7 + 1;
        uVar19 = uVar19 + 1;
        puVar14 = puVar14 + 3;
        uVar1 = *(ushort *)(param_2 + 0x10e);
        piVar9 = puVar3 + uVar11 * 3 + 1;
        *piVar9 = iVar18;
        piVar9[1] = iVar17;
        piVar9[2] = iVar18;
        piVar9 = puVar3 + uVar11 * 3 + 0x22;
        *piVar9 = iVar10;
        piVar9[1] = iVar12;
        piVar9[2] = iVar10;
      } while (uVar19 < uVar1);
    }
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = uVar19;
    return;
  }
  FUN_00a5b5ac(&local_40,*(undefined4 *)(param_2 + 0x110));
  uVar19 = local_3c;
  if (local_40 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x140);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x140);
  }
  *puVar3 = 0;
  puVar7 = (ushort *)((int)puVar3 + 0x10e);
  *puVar7 = 0;
  puVar3[0x44] = local_40;
  bVar20 = 0xfffffffe < local_3c;
  local_3c = local_3c + 1;
  if (bVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *local_40 = puVar3;
  *(undefined2 *)(local_40 + 0x43) = 0;
  local_40 = puVar3;
  if (*(ushort *)(param_2 + 0x10e) != 0) {
    puVar14 = (undefined4 *)(param_2 + 0x8c);
    uVar11 = 0;
    iVar17 = local_38;
    do {
      iVar10 = puVar14[-0x20];
      iVar18 = 1;
      uVar15 = puVar14[-0x21];
      iVar12 = 1;
      if ((iVar10 != 0) && (iVar12 = thunk_FUN_016d4a50(iVar10), iVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar10);
      }
      FUN_016dd1aa(iVar12,uVar15,iVar10);
      uVar15 = *puVar14;
      iVar16 = puVar14[1];
      if ((iVar16 != 0) && (iVar18 = thunk_FUN_016d4a50(iVar16), iVar18 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar16);
      }
      FUN_016dd1aa(iVar18,uVar15,iVar16);
      FUN_00a5b5ac(&local_30,*(undefined4 *)(param_2 + 0x114 + uVar11 * 4),param_3 + -1);
      iVar2 = local_28;
      if (local_30 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x110);
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x110);
        }
        *puVar4 = 0;
        *(undefined2 *)((int)puVar4 + 0x10e) = 0;
        if (uVar19 != 0) goto LAB_00a5b914;
      }
      else {
        puVar4 = local_30;
        if (local_2c != uVar19) {
LAB_00a5b914:
          uVar15 = 0x30;
          puVar8 = &DAT_018ac46c;
          puVar5 = &DAT_00413115;
          goto LAB_00a5b940;
        }
      }
      uVar6 = (uint)*puVar7;
      if (10 < uVar6) {
        uVar15 = 0x20;
        puVar5 = &DAT_00565dd0;
        puVar8 = &DAT_018af428;
LAB_00a5b940:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar5,uVar15,puVar8);
      }
      uVar1 = (ushort)(uVar6 + 1);
      *puVar7 = uVar1;
      uVar11 = uVar11 + 1;
      puVar14 = puVar14 + 3;
      piVar9 = puVar3 + uVar6 * 3 + 1;
      *piVar9 = iVar10;
      piVar9[2] = iVar10;
      piVar13 = puVar3 + uVar6 * 3 + 0x22;
      *piVar13 = iVar16;
      piVar13[1] = iVar18;
      (puVar3 + 0x44)[uVar6 + 1] = puVar4;
      piVar9[1] = iVar12;
      piVar13[2] = iVar16;
      *puVar4 = puVar3;
      *(ushort *)(puVar4 + 0x43) = uVar1;
      iVar17 = iVar2 + iVar17 + 1;
    } while (uVar11 < *(ushort *)(param_2 + 0x10e));
    local_38 = iVar17;
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}

