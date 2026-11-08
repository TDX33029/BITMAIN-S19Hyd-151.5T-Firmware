// FUN_00c44b0c @ 00c44b0c size=824 calls_out=5 calls_in=2
// strings: 

void FUN_00c44b0c(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined *puVar10;
  ushort *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  int iVar20;
  bool bVar21;
  int local_58;
  uint local_54;
  uint local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    local_58 = thunk_FUN_016d4a50(0x168);
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x168);
    }
    local_50 = 0;
    uVar1 = *(ushort *)(param_2 + 0x166);
    *(undefined4 *)(local_58 + 0x160) = 0;
    local_54 = 0;
    puVar11 = (ushort *)(local_58 + 0x166);
    *puVar11 = 0;
    if (uVar1 != 0) {
      iVar3 = 0x58;
      do {
        uVar12 = (uint)*puVar11;
        if (10 < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        *puVar11 = *puVar11 + 1;
        puVar19 = (undefined4 *)(param_2 + iVar3);
        iVar3 = iVar3 + 0x18;
        puVar4 = (undefined4 *)(param_2 + local_50 * 8);
        local_50 = local_50 + 1;
        uVar5 = puVar4[1];
        puVar15 = (undefined4 *)(local_58 + uVar12 * 8);
        *puVar15 = *puVar4;
        puVar15[1] = uVar5;
        puVar4 = (undefined4 *)(local_58 + 0x58 + uVar12 * 0x18);
        uVar5 = puVar19[1];
        uVar8 = puVar19[2];
        uVar13 = puVar19[3];
        uVar14 = puVar19[4];
        uVar16 = puVar19[5];
        *puVar4 = *puVar19;
        puVar4[1] = uVar5;
        puVar4[2] = uVar8;
        puVar4[3] = uVar13;
        puVar4[4] = uVar14;
        puVar4[5] = uVar16;
      } while (uVar1 != local_50);
    }
    *param_1 = local_58;
    param_1[1] = 0;
    param_1[2] = local_50;
    return;
  }
  FUN_00c44b0c(&local_58,*(undefined4 *)(param_2 + 0x168));
  uVar12 = local_54;
  if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  iVar3 = thunk_FUN_016d4a50(0x198);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x198);
  }
  puVar11 = (ushort *)(iVar3 + 0x166);
  *puVar11 = 0;
  *(undefined4 *)(iVar3 + 0x160) = 0;
  *(int *)(iVar3 + 0x168) = local_58;
  bVar21 = 0xfffffffe < local_54;
  local_54 = local_54 + 1;
  if (bVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(int *)(local_58 + 0x160) = iVar3;
  *(undefined2 *)(local_58 + 0x164) = 0;
  local_58 = iVar3;
  if (*(ushort *)(param_2 + 0x166) != 0) {
    uVar18 = 0;
    iVar20 = 0x58;
    uVar17 = local_50;
    do {
      puVar4 = (undefined4 *)(param_2 + uVar18 * 8);
      uVar8 = *puVar4;
      uVar5 = puVar4[1];
      puVar4 = (undefined4 *)(param_2 + iVar20);
      local_48 = *puVar4;
      uStack_44 = puVar4[1];
      uStack_40 = puVar4[2];
      uStack_3c = puVar4[3];
      uStack_38 = puVar4[4];
      uStack_34 = puVar4[5];
      FUN_00c44b0c(&local_30,*(undefined4 *)(param_2 + uVar18 * 4 + 0x16c),param_3 + -1);
      iVar2 = local_28;
      if (local_30 == 0) {
        iVar6 = thunk_FUN_016d4a50(0x168);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x168);
        }
        *(undefined2 *)(iVar6 + 0x166) = 0;
        *(undefined4 *)(iVar6 + 0x160) = 0;
        if (uVar12 != 0) goto LAB_00c44db8;
      }
      else {
        iVar6 = local_30;
        if (local_2c != uVar12) {
LAB_00c44db8:
          uVar5 = 0x30;
          puVar10 = &DAT_018ac46c;
          puVar7 = &DAT_00413115;
          goto LAB_00c44de4;
        }
      }
      uVar9 = (uint)*puVar11;
      if (10 < uVar9) {
        uVar5 = 0x20;
        puVar7 = &DAT_00565dd0;
        puVar10 = &DAT_018af428;
LAB_00c44de4:
        local_50 = uVar17;
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar7,uVar5,puVar10);
      }
      uVar18 = uVar18 + 1;
      uVar1 = (ushort)(uVar9 + 1);
      *puVar11 = uVar1;
      puVar4 = (undefined4 *)(iVar3 + uVar9 * 8);
      *puVar4 = uVar8;
      puVar4[1] = uVar5;
      puVar4 = (undefined4 *)(iVar3 + 0x58 + uVar9 * 0x18);
      *puVar4 = local_48;
      puVar4[1] = uStack_44;
      puVar4[2] = uStack_40;
      puVar4[3] = uStack_3c;
      puVar4[4] = uStack_38;
      puVar4[5] = uStack_34;
      ((int *)(iVar3 + 0x168))[uVar9 + 1] = iVar6;
      *(ushort *)(iVar6 + 0x164) = uVar1;
      *(int *)(iVar6 + 0x160) = iVar3;
      uVar17 = iVar2 + uVar17 + 1;
      iVar20 = iVar20 + 0x18;
    } while (uVar18 < *(ushort *)(param_2 + 0x166));
    local_50 = uVar17;
  }
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = local_50;
  return;
}

