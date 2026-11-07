// FUN_00c45038 @ 00c45038 size=1064 calls_out=7 calls_in=4
// strings: 

void FUN_00c45038(undefined4 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  uint uVar5;
  ushort *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  undefined4 *local_40;
  uint local_3c;
  uint local_38;
  undefined4 *local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x110);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x110);
    }
    uVar9 = 0;
    uVar1 = *(ushort *)(param_2 + 0x10e);
    *puVar2 = 0;
    local_3c = 0;
    puVar6 = (ushort *)((int)puVar2 + 0x10e);
    *puVar6 = 0;
    local_40 = puVar2;
    if (uVar1 != 0) {
      piVar11 = (int *)(param_2 + 0x90);
      do {
        iVar18 = piVar11[-0x21];
        iVar16 = 1;
        iVar8 = piVar11[-0x22];
        iVar12 = 1;
        if ((iVar18 != 0) && (iVar12 = thunk_FUN_016d4a50(iVar18), iVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar18);
        }
        FUN_016dd1aa(iVar12,iVar8,iVar18);
        iVar19 = *piVar11;
        iVar8 = piVar11[-1];
        if ((iVar19 != 0) && (iVar16 = thunk_FUN_016d4a50(iVar19), iVar16 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar19);
        }
        FUN_016dd1aa(iVar16,iVar8,iVar19);
        uVar15 = (uint)*puVar6;
        if (10 < uVar15) {
          local_38 = uVar9;
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        *puVar6 = *puVar6 + 1;
        piVar11 = piVar11 + 3;
        uVar9 = uVar9 + 1;
        uVar1 = *(ushort *)(param_2 + 0x10e);
        piVar13 = puVar2 + uVar15 * 3 + 1;
        *piVar13 = iVar18;
        piVar13[1] = iVar12;
        piVar13[2] = iVar18;
        piVar13 = puVar2 + uVar15 * 3 + 0x22;
        *piVar13 = iVar19;
        piVar13[1] = iVar16;
        piVar13[2] = iVar19;
      } while (uVar9 < uVar1);
    }
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = uVar9;
    return;
  }
  FUN_00c45038(&local_40,*(undefined4 *)(param_2 + 0x110));
  uVar9 = local_3c;
  if (local_40 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x140);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x140);
  }
  *puVar2 = 0;
  puVar6 = (ushort *)((int)puVar2 + 0x10e);
  *puVar6 = 0;
  puVar2[0x44] = local_40;
  bVar20 = 0xfffffffe < local_3c;
  local_3c = local_3c + 1;
  if (bVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *local_40 = puVar2;
  *(undefined2 *)(local_40 + 0x43) = 0;
  local_40 = puVar2;
  if (*(ushort *)(param_2 + 0x10e) != 0) {
    puVar14 = (undefined4 *)(param_2 + 0x8c);
    uVar10 = 0;
    uVar15 = local_38;
    do {
      iVar8 = puVar14[-0x20];
      iVar16 = 1;
      uVar17 = puVar14[-0x21];
      iVar12 = 1;
      if ((iVar8 != 0) && (iVar12 = thunk_FUN_016d4a50(iVar8), iVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar8);
      }
      FUN_016dd1aa(iVar12,uVar17,iVar8);
      uVar17 = *puVar14;
      iVar18 = puVar14[1];
      if ((iVar18 != 0) && (iVar16 = thunk_FUN_016d4a50(iVar18), iVar16 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar18);
      }
      FUN_016dd1aa(iVar16,uVar17,iVar18);
      FUN_00c45038(&local_30,*(undefined4 *)(param_2 + 0x114 + uVar10 * 4),param_3 + -1);
      iVar19 = local_28;
      if (local_30 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x110);
        if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x110);
        }
        *puVar3 = 0;
        *(undefined2 *)((int)puVar3 + 0x10e) = 0;
        if (uVar9 != 0) goto LAB_00c453a0;
      }
      else {
        puVar3 = local_30;
        if (local_2c != uVar9) {
LAB_00c453a0:
          uVar17 = 0x30;
          puVar7 = &DAT_018ac46c;
          puVar4 = &DAT_00413115;
          goto LAB_00c453cc;
        }
      }
      uVar5 = (uint)*puVar6;
      if (10 < uVar5) {
        uVar17 = 0x20;
        puVar4 = &DAT_00565dd0;
        puVar7 = &DAT_018af428;
LAB_00c453cc:
        local_38 = uVar15;
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar4,uVar17,puVar7);
      }
      uVar1 = (ushort)(uVar5 + 1);
      *puVar6 = uVar1;
      puVar14 = puVar14 + 3;
      uVar10 = uVar10 + 1;
      piVar11 = puVar2 + uVar5 * 3 + 1;
      *piVar11 = iVar8;
      piVar11[2] = iVar8;
      piVar13 = puVar2 + uVar5 * 3 + 0x22;
      *piVar13 = iVar18;
      piVar13[1] = iVar16;
      (puVar2 + 0x44)[uVar5 + 1] = puVar3;
      piVar11[1] = iVar12;
      piVar13[2] = iVar18;
      *puVar3 = puVar2;
      *(ushort *)(puVar3 + 0x43) = uVar1;
      uVar15 = iVar19 + uVar15 + 1;
    } while (uVar10 < *(ushort *)(param_2 + 0x10e));
    local_38 = uVar15;
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}

