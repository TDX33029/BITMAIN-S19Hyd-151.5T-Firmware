// FUN_00c470e0 @ 00c470e0 size=708 calls_out=5 calls_in=2
// strings: 

void FUN_00c470e0(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  bool bVar17;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    local_40 = thunk_FUN_016d4a50(0x8c);
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x8c);
    }
    uVar1 = *(ushort *)(param_2 + 0x8a);
    local_38 = 0;
    *(undefined2 *)(local_40 + 0x8a) = 0;
    *(undefined4 *)(local_40 + 0x58) = 0;
    local_3c = 0;
    if (uVar1 != 0) {
      iVar3 = 4;
      do {
        uVar13 = (uint)*(ushort *)(local_40 + 0x8a);
        if (10 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        iVar4 = local_38 * 4;
        puVar10 = (undefined4 *)(param_2 + iVar3);
        uVar14 = *puVar10;
        *(ushort *)(local_40 + 0x8a) = *(ushort *)(local_40 + 0x8a) + 1;
        local_38 = local_38 + 1;
        uVar11 = *(undefined4 *)(param_2 + iVar4 + 0x5c);
        iVar3 = iVar3 + 8;
        puVar15 = (undefined4 *)(local_40 + uVar13 * 8);
        *puVar15 = puVar10[-1];
        puVar15[1] = uVar14;
        *(undefined4 *)(local_40 + 0x5c + uVar13 * 4) = uVar11;
      } while (uVar1 != local_38);
    }
    *param_1 = local_40;
    param_1[1] = 0;
    param_1[2] = local_38;
    return;
  }
  FUN_00c470e0(&local_40,*(undefined4 *)(param_2 + 0x8c));
  uVar13 = local_3c;
  if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  iVar3 = thunk_FUN_016d4a50(0xbc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xbc);
  }
  *(int *)(iVar3 + 0x8c) = local_40;
  *(undefined2 *)(iVar3 + 0x8a) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  bVar17 = 0xfffffffe < local_3c;
  local_3c = local_3c + 1;
  if (bVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(undefined2 *)(local_40 + 0x88) = 0;
  *(int *)(local_40 + 0x58) = iVar3;
  local_40 = iVar3;
  if (*(short *)(param_2 + 0x8a) != 0) {
    puVar15 = (undefined4 *)(param_2 + 4);
    uVar12 = 0;
    uVar8 = local_38;
    do {
      iVar4 = param_2 + uVar12 * 4;
      uVar11 = puVar15[-1];
      uVar14 = *puVar15;
      uVar16 = *(undefined4 *)(iVar4 + 0x5c);
      FUN_00c470e0(&local_30,*(undefined4 *)(iVar4 + 0x90),param_3 + -1);
      iVar4 = local_28;
      if (local_30 == 0) {
        iVar5 = thunk_FUN_016d4a50(0x8c);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x8c);
        }
        *(undefined2 *)(iVar5 + 0x8a) = 0;
        *(undefined4 *)(iVar5 + 0x58) = 0;
        if (uVar13 != 0) goto LAB_00c47314;
      }
      else {
        iVar5 = local_30;
        if (local_2c != uVar13) {
LAB_00c47314:
          uVar11 = 0x30;
          puVar9 = &DAT_018ac46c;
          puVar6 = &DAT_00413115;
          goto LAB_00c47340;
        }
      }
      uVar7 = (uint)*(ushort *)(iVar3 + 0x8a);
      if (10 < uVar7) {
        uVar11 = 0x20;
        puVar6 = &DAT_00565dd0;
        puVar9 = &DAT_018af428;
LAB_00c47340:
        local_38 = uVar8;
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar6,uVar11,puVar9);
      }
      uVar2 = (undefined2)(uVar7 + 1);
      *(undefined2 *)(iVar3 + 0x8a) = uVar2;
      puVar15 = puVar15 + 2;
      puVar10 = (undefined4 *)(iVar3 + uVar7 * 8);
      *puVar10 = uVar11;
      uVar12 = uVar12 + 1;
      puVar10[1] = uVar14;
      ((int *)(iVar3 + 0x8c))[uVar7 + 1] = iVar5;
      *(undefined4 *)(iVar3 + 0x5c + uVar7 * 4) = uVar16;
      *(undefined2 *)(iVar5 + 0x88) = uVar2;
      *(int *)(iVar5 + 0x58) = iVar3;
      uVar8 = iVar4 + uVar8 + 1;
    } while (uVar12 < *(ushort *)(param_2 + 0x8a));
    local_38 = uVar8;
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}

