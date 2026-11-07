// FUN_00c45804 @ 00c45804 size=800 calls_out=5 calls_in=2
// strings: 

void FUN_00c45804(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  ushort *puVar16;
  bool bVar17;
  undefined8 uVar18;
  int local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  
  if (param_3 == 0) {
    local_48 = thunk_FUN_016d4a50(0x110);
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x110);
    }
    local_40 = 0;
    uVar1 = *(ushort *)(param_2 + 0x10e);
    *(undefined4 *)(local_48 + 0x108) = 0;
    local_44 = 0;
    puVar16 = (ushort *)(local_48 + 0x10e);
    *puVar16 = 0;
    if (uVar1 != 0) {
      iVar2 = 8;
      do {
        uVar11 = (uint)*puVar16;
        if (10 < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        *puVar16 = *puVar16 + 1;
        iVar15 = param_2 + local_40 * 8;
        uVar18 = *(undefined8 *)(param_2 + iVar2);
        uVar12 = *(undefined4 *)(iVar15 + 0xb4);
        iVar2 = iVar2 + 0x10;
        uVar10 = *(undefined4 *)(param_2 + local_40 * 0x10);
        local_40 = local_40 + 1;
        puVar8 = (undefined4 *)(local_48 + 0xb0 + uVar11 * 8);
        *puVar8 = *(undefined4 *)(iVar15 + 0xb0);
        puVar8[1] = uVar12;
        puVar8 = (undefined4 *)(local_48 + uVar11 * 0x10);
        *puVar8 = uVar10;
        *(undefined8 *)(puVar8 + 2) = uVar18;
      } while (uVar1 != local_40);
    }
    *param_1 = local_48;
    param_1[1] = 0;
    param_1[2] = local_40;
    return;
  }
  FUN_00c45804(&local_48,*(undefined4 *)(param_2 + 0x110));
  uVar11 = local_44;
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  iVar2 = thunk_FUN_016d4a50(0x140);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x140);
  }
  puVar16 = (ushort *)(iVar2 + 0x10e);
  *puVar16 = 0;
  *(undefined4 *)(iVar2 + 0x108) = 0;
  *(int *)(iVar2 + 0x110) = local_48;
  bVar17 = 0xfffffffe < local_44;
  local_44 = local_44 + 1;
  if (bVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(int *)(local_48 + 0x108) = iVar2;
  *(undefined2 *)(local_48 + 0x10c) = 0;
  local_48 = iVar2;
  if (*(ushort *)(param_2 + 0x10e) != 0) {
    uVar9 = 0;
    iVar15 = 8;
    uVar13 = local_40;
    do {
      uVar14 = *(undefined4 *)(param_2 + uVar9 * 0x10);
      iVar6 = param_2 + uVar9 * 8;
      uVar18 = *(undefined8 *)(param_2 + iVar15);
      uVar12 = *(undefined4 *)(iVar6 + 0xb0);
      uVar10 = *(undefined4 *)(iVar6 + 0xb4);
      FUN_00c45804(&local_3c,*(undefined4 *)(param_2 + uVar9 * 4 + 0x114),param_3 + -1);
      iVar6 = local_34;
      if (local_3c == 0) {
        iVar3 = thunk_FUN_016d4a50(0x110);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x110);
        }
        *(undefined2 *)(iVar3 + 0x10e) = 0;
        *(undefined4 *)(iVar3 + 0x108) = 0;
        if (uVar11 != 0) goto LAB_00c45a98;
      }
      else {
        iVar3 = local_3c;
        if (local_38 != uVar11) {
LAB_00c45a98:
          uVar10 = 0x30;
          puVar7 = &DAT_018ac46c;
          puVar4 = &DAT_00413115;
          goto LAB_00c45ac4;
        }
      }
      uVar5 = (uint)*puVar16;
      if (10 < uVar5) {
        uVar10 = 0x20;
        puVar4 = &DAT_00565dd0;
        puVar7 = &DAT_018af428;
LAB_00c45ac4:
        local_40 = uVar13;
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar4,uVar10,puVar7);
      }
      uVar1 = (ushort)(uVar5 + 1);
      *puVar16 = uVar1;
      uVar9 = uVar9 + 1;
      iVar15 = iVar15 + 0x10;
      puVar8 = (undefined4 *)(iVar2 + 0xb0 + uVar5 * 8);
      *puVar8 = uVar12;
      puVar8[1] = uVar10;
      puVar8 = (undefined4 *)(iVar2 + uVar5 * 0x10);
      *puVar8 = uVar14;
      *(undefined8 *)(puVar8 + 2) = uVar18;
      ((int *)(iVar2 + 0x110))[uVar5 + 1] = iVar3;
      *(ushort *)(iVar3 + 0x10c) = uVar1;
      *(int *)(iVar3 + 0x108) = iVar2;
      uVar13 = iVar6 + uVar13 + 1;
    } while (uVar9 < *(ushort *)(param_2 + 0x10e));
    local_40 = uVar13;
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = local_40;
  return;
}

