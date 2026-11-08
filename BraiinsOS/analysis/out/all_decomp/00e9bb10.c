// FUN_00e9bb10 @ 00e9bb10 size=1132 calls_out=7 calls_in=1
// strings: 

void FUN_00e9bb10(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  ushort *puVar10;
  undefined *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  
  if (param_3 == 0) {
    iVar4 = thunk_FUN_016d4a50(0x248);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x248);
    }
    uVar19 = 0;
    uVar2 = *(ushort *)(param_2 + 0x242);
    *(undefined4 *)(iVar4 + 0x1b8) = 0;
    local_4c = 0;
    puVar10 = (ushort *)(iVar4 + 0x242);
    *puVar10 = 0;
    local_50 = iVar4;
    if (uVar2 != 0) {
      iVar14 = 0;
      iVar15 = 0;
      do {
        iVar21 = *(int *)(param_2 + iVar15 + 0x1c4);
        uVar18 = *(undefined4 *)(param_2 + iVar15 + 0x1c0);
        if (iVar21 == 0) {
          iVar5 = 1;
        }
        else {
          iVar5 = thunk_FUN_016d4a50(iVar21);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar21);
          }
        }
        FUN_016dd1aa(iVar5,uVar18,iVar21);
        uVar22 = (uint)*puVar10;
        if (10 < uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        uVar19 = uVar19 + 1;
        *puVar10 = *puVar10 + 1;
        puVar6 = (undefined4 *)(param_2 + iVar14);
        uVar17 = *puVar6;
        iVar15 = iVar15 + 0xc;
        iVar14 = iVar14 + 0x28;
        uVar20 = puVar6[4];
        piVar13 = (int *)(iVar4 + 0x1bc + uVar22 * 0xc);
        *piVar13 = iVar21;
        uVar16 = puVar6[1];
        piVar13[1] = iVar5;
        piVar13[2] = iVar21;
        uVar24 = *(undefined8 *)(puVar6 + 6);
        uVar2 = *(ushort *)(param_2 + 0x242);
        uVar1 = *(undefined1 *)(puVar6 + 8);
        uVar25 = *(undefined8 *)(puVar6 + 2);
        uVar18 = puVar6[5];
        puVar6 = (undefined4 *)(iVar4 + uVar22 * 0x28);
        *puVar6 = uVar17;
        puVar6[1] = uVar16;
        *(undefined1 *)(puVar6 + 8) = uVar1;
        puVar6[4] = uVar20;
        puVar6[5] = uVar18;
        *(undefined8 *)(puVar6 + 6) = uVar24;
        *(undefined8 *)(puVar6 + 2) = uVar25;
      } while (uVar19 < uVar2);
    }
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = uVar19;
    return;
  }
  FUN_00e9bb10(&local_50,*(undefined4 *)(param_2 + 0x248));
  uVar19 = local_4c;
  if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  iVar4 = thunk_FUN_016d4a50(0x278);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x278);
  }
  puVar10 = (ushort *)(iVar4 + 0x242);
  *puVar10 = 0;
  *(undefined4 *)(iVar4 + 0x1b8) = 0;
  *(int *)(iVar4 + 0x248) = local_50;
  bVar23 = 0xfffffffe < local_4c;
  local_4c = local_4c + 1;
  if (bVar23) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(int *)(local_50 + 0x1b8) = iVar4;
  *(undefined2 *)(local_50 + 0x240) = 0;
  local_50 = iVar4;
  if (*(ushort *)(param_2 + 0x242) != 0) {
    iVar15 = 0;
    iVar21 = 0;
    uVar22 = 0;
    iVar14 = local_48;
    do {
      iVar5 = param_2 + iVar21 * 3;
      iVar12 = *(int *)(iVar5 + 0x1c4);
      uVar18 = *(undefined4 *)(iVar5 + 0x1c0);
      if (iVar12 == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(iVar12);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar12);
        }
      }
      FUN_016dd1aa(iVar5,uVar18,iVar12);
      puVar6 = (undefined4 *)(param_2 + iVar15);
      uVar17 = *puVar6;
      uVar16 = puVar6[4];
      uVar18 = puVar6[5];
      uVar20 = puVar6[1];
      uVar25 = *(undefined8 *)(puVar6 + 6);
      uVar24 = *(undefined8 *)(puVar6 + 2);
      uVar1 = *(undefined1 *)(puVar6 + 8);
      FUN_00e9bb10(&local_44,*(undefined4 *)(param_2 + uVar22 * 4 + 0x24c),param_3 + -1);
      iVar3 = local_3c;
      if (local_44 == 0) {
        iVar7 = thunk_FUN_016d4a50(0x248);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x248);
        }
        *(undefined4 *)(iVar7 + 0x1b8) = 0;
        *(undefined2 *)(iVar7 + 0x242) = 0;
        if (uVar19 != 0) goto LAB_00e9bed4;
      }
      else {
        iVar7 = local_44;
        if (local_40 != uVar19) {
LAB_00e9bed4:
          uVar18 = 0x30;
          puVar11 = &DAT_018ac46c;
          puVar8 = &DAT_00413115;
          goto LAB_00e9bf00;
        }
      }
      uVar9 = (uint)*puVar10;
      if (10 < uVar9) {
        uVar18 = 0x20;
        puVar8 = &DAT_00565dd0;
        puVar11 = &DAT_018af428;
LAB_00e9bf00:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar8,uVar18,puVar11);
      }
      uVar2 = (ushort)(uVar9 + 1);
      *puVar10 = uVar2;
      uVar22 = uVar22 + 1;
      piVar13 = (int *)(iVar4 + 0x1bc + uVar9 * 0xc);
      *piVar13 = iVar12;
      iVar21 = iVar21 + 4;
      piVar13[1] = iVar5;
      piVar13[2] = iVar12;
      puVar6 = (undefined4 *)(iVar4 + uVar9 * 0x28);
      *puVar6 = uVar17;
      puVar6[4] = uVar16;
      puVar6[1] = uVar20;
      puVar6[5] = uVar18;
      *(undefined1 *)(puVar6 + 8) = uVar1;
      *(undefined8 *)(puVar6 + 6) = uVar25;
      *(undefined8 *)(puVar6 + 2) = uVar24;
      ((int *)(iVar4 + 0x248))[uVar9 + 1] = iVar7;
      *(ushort *)(iVar7 + 0x240) = uVar2;
      *(int *)(iVar7 + 0x1b8) = iVar4;
      iVar14 = iVar3 + iVar14 + 1;
      iVar15 = iVar15 + 0x28;
    } while (uVar22 < *(ushort *)(param_2 + 0x242));
    local_48 = iVar14;
  }
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  return;
}

