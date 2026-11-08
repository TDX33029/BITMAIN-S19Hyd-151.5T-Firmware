// FUN_01638b7c @ 01638b7c size=924 calls_out=5 calls_in=2
// strings: 

void FUN_01638b7c(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  undefined *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  bool bVar21;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    local_40 = thunk_FUN_016d4a50(0x110);
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x110);
    }
    uVar10 = 0;
    uVar2 = *(ushort *)(param_2 + 0x10e);
    *(undefined4 *)(local_40 + 0x108) = 0;
    local_3c = 0;
    puVar11 = (ushort *)(local_40 + 0x10e);
    *puVar11 = 0;
    if (uVar2 != 0) {
      local_38 = 0;
      do {
        puVar8 = (undefined4 *)(param_2 + local_38 * 0x10);
        uVar20 = *puVar8;
        puVar14 = (undefined4 *)(param_2 + 0xb0 + local_38 * 8);
        piVar15 = (int *)*puVar14;
        uVar18 = puVar8[1];
        uVar16 = puVar8[2];
        uVar4 = puVar8[3];
        uVar10 = local_38 + 1;
        uVar19 = puVar14[1];
        do {
          iVar3 = *piVar15;
          bVar21 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar21);
        *piVar15 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_01638f1c;
        uVar13 = (uint)*puVar11;
        if (10 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        *puVar11 = *puVar11 + 1;
        puVar8 = (undefined4 *)(local_40 + uVar13 * 0x10);
        *puVar8 = uVar20;
        puVar8[3] = uVar4;
        uVar2 = *(ushort *)(param_2 + 0x10e);
        puVar8[1] = uVar18;
        puVar8[2] = uVar16;
        puVar8 = (undefined4 *)(local_40 + 0xb0 + uVar13 * 8);
        *puVar8 = piVar15;
        puVar8[1] = uVar19;
        local_38 = uVar10;
      } while (uVar10 < uVar2);
    }
    *param_1 = local_40;
    param_1[1] = 0;
    param_1[2] = uVar10;
    return;
  }
  FUN_01638b7c(&local_40,*(undefined4 *)(param_2 + 0x110));
  uVar10 = local_3c;
  if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  iVar3 = thunk_FUN_016d4a50(0x140);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x140);
  }
  puVar11 = (ushort *)(iVar3 + 0x10e);
  *puVar11 = 0;
  *(undefined4 *)(iVar3 + 0x108) = 0;
  *(int *)(iVar3 + 0x110) = local_40;
  bVar21 = 0xfffffffe < local_3c;
  local_3c = local_3c + 1;
  if (bVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(int *)(local_40 + 0x108) = iVar3;
  *(undefined2 *)(local_40 + 0x10c) = 0;
  local_40 = iVar3;
  if (*(ushort *)(param_2 + 0x10e) != 0) {
    uVar17 = 0;
    uVar13 = local_38;
    do {
      puVar14 = (undefined4 *)(param_2 + uVar17 * 0x10);
      uVar16 = *puVar14;
      puVar8 = (undefined4 *)(param_2 + 0xb0 + uVar17 * 8);
      piVar15 = (int *)*puVar8;
      uVar17 = uVar17 + 1;
      uVar19 = puVar14[1];
      uVar18 = puVar14[2];
      uVar20 = puVar14[3];
      uVar4 = puVar8[1];
      do {
        iVar5 = *piVar15;
        bVar21 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar21);
      *piVar15 = iVar5 + 1;
      if (iVar5 < 0) {
LAB_01638f1c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1638f1c);
        (*pcVar1)();
      }
      FUN_01638b7c(&local_30,((undefined4 *)(param_2 + 0x110))[uVar17],param_3 + -1);
      iVar5 = local_28;
      if (local_30 == 0) {
        iVar6 = thunk_FUN_016d4a50(0x110);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x110);
        }
        *(undefined2 *)(iVar6 + 0x10e) = 0;
        *(undefined4 *)(iVar6 + 0x108) = 0;
        if (uVar10 != 0) goto LAB_01638e84;
      }
      else {
        iVar6 = local_30;
        if (local_2c != uVar10) {
LAB_01638e84:
          uVar4 = 0x30;
          puVar12 = &DAT_018ac46c;
          puVar7 = &DAT_00413115;
          goto LAB_01638eb0;
        }
      }
      uVar9 = (uint)*puVar11;
      if (10 < uVar9) {
        uVar4 = 0x20;
        puVar7 = &DAT_00565dd0;
        puVar12 = &DAT_018af428;
LAB_01638eb0:
        local_38 = uVar13;
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar7,uVar4,puVar12);
      }
      uVar2 = (ushort)(uVar9 + 1);
      *puVar11 = uVar2;
      puVar8 = (undefined4 *)(iVar3 + uVar9 * 0x10);
      *puVar8 = uVar16;
      puVar8[1] = uVar19;
      puVar8[2] = uVar18;
      puVar8[3] = uVar20;
      puVar8 = (undefined4 *)(iVar3 + 0xb0 + uVar9 * 8);
      *puVar8 = piVar15;
      puVar8[1] = uVar4;
      ((int *)(iVar3 + 0x110))[uVar9 + 1] = iVar6;
      *(ushort *)(iVar6 + 0x10c) = uVar2;
      *(int *)(iVar6 + 0x108) = iVar3;
      uVar13 = iVar5 + uVar13 + 1;
    } while (uVar17 < *(ushort *)(param_2 + 0x10e));
    local_38 = uVar13;
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}

