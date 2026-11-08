// FUN_00c44590 @ 00c44590 size=764 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c44590(int *param_1,int param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  bool bVar17;
  int local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    iVar4 = thunk_FUN_016d4a50(0xe4);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xe4);
    }
    uVar14 = 0;
    *(undefined2 *)(iVar4 + 0xe2) = 0;
    sVar1 = *(short *)(param_2 + 0xe2);
    *(undefined4 *)(iVar4 + 0xb0) = 0;
    local_4c = 0;
    local_50 = iVar4;
    if (sVar1 != 0) {
      iVar15 = 0;
      do {
        uVar8 = *(undefined4 *)(param_2 + uVar14 * 4 + 0xb4);
        FUN_00bb205c(&local_40,param_2 + iVar15);
        uVar12 = (uint)*(ushort *)(iVar4 + 0xe2);
        if (10 < uVar12) {
          local_48 = uVar14;
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        *(ushort *)(iVar4 + 0xe2) = *(ushort *)(iVar4 + 0xe2) + 1;
        uVar14 = uVar14 + 1;
        iVar15 = iVar15 + 0x10;
        *(undefined4 *)(iVar4 + 0xb4 + uVar12 * 4) = uVar8;
        puVar13 = (undefined4 *)(iVar4 + uVar12 * 0x10);
        *puVar13 = local_40;
        puVar13[1] = local_3c;
        puVar13[2] = local_38;
        puVar13[3] = uStack_34;
      } while (uVar14 < *(ushort *)(param_2 + 0xe2));
    }
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = uVar14;
    return;
  }
  FUN_00c44590(&local_50,*(undefined4 *)(param_2 + 0xe4));
  uVar14 = local_4c;
  if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  iVar4 = thunk_FUN_016d4a50(0x114);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x114);
  }
  *(int *)(iVar4 + 0xe4) = local_50;
  *(undefined2 *)(iVar4 + 0xe2) = 0;
  *(undefined4 *)(iVar4 + 0xb0) = 0;
  bVar17 = 0xfffffffe < local_4c;
  local_4c = local_4c + 1;
  if (bVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(undefined2 *)(local_50 + 0xe0) = 0;
  *(int *)(local_50 + 0xb0) = iVar4;
  local_50 = iVar4;
  if (*(short *)(param_2 + 0xe2) != 0) {
    iVar15 = 0;
    uVar10 = 0;
    uVar12 = local_48;
    do {
      iVar11 = param_2 + uVar10 * 4;
      uVar16 = *(undefined4 *)(iVar11 + 0xb4);
      FUN_00bb205c(&local_40,param_2 + iVar15);
      FUN_00c44590(&local_30,*(undefined4 *)(iVar11 + 0xe8),param_3 + -1);
      iVar11 = local_28;
      uVar3 = local_3c;
      uVar8 = local_40;
      if (local_30 == 0) {
        iVar5 = thunk_FUN_016d4a50(0xe4);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xe4);
        }
        *(undefined2 *)(iVar5 + 0xe2) = 0;
        *(undefined4 *)(iVar5 + 0xb0) = 0;
        if (uVar14 != 0) goto LAB_00c44800;
      }
      else {
        iVar5 = local_30;
        if (local_2c != uVar14) {
LAB_00c44800:
          uVar8 = 0x30;
          puVar9 = &DAT_018ac46c;
          puVar6 = &DAT_00413115;
          goto LAB_00c4482c;
        }
      }
      uVar7 = (uint)*(ushort *)(iVar4 + 0xe2);
      if (10 < uVar7) {
        uVar8 = 0x20;
        puVar6 = &DAT_00565dd0;
        puVar9 = &DAT_018af428;
LAB_00c4482c:
        local_48 = uVar12;
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar6,uVar8,puVar9);
      }
      uVar10 = uVar10 + 1;
      uVar2 = (undefined2)(uVar7 + 1);
      *(undefined2 *)(iVar4 + 0xe2) = uVar2;
      iVar15 = iVar15 + 0x10;
      *(undefined4 *)(iVar4 + 0xb4 + uVar7 * 4) = uVar16;
      puVar13 = (undefined4 *)(iVar4 + uVar7 * 0x10);
      *puVar13 = uVar8;
      puVar13[2] = local_38;
      puVar13[1] = uVar3;
      puVar13[3] = uStack_34;
      ((int *)(iVar4 + 0xe4))[uVar7 + 1] = iVar5;
      *(undefined2 *)(iVar5 + 0xe0) = uVar2;
      *(int *)(iVar5 + 0xb0) = iVar4;
      uVar12 = iVar11 + uVar12 + 1;
    } while (uVar10 < *(ushort *)(param_2 + 0xe2));
    local_48 = uVar12;
  }
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  return;
}

