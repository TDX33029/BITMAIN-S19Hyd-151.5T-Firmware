// FUN_00ea1d08 @ 00ea1d08 size=1588 calls_out=8 calls_in=2
// strings: 

void FUN_00ea1d08(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined *puVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    iVar3 = thunk_FUN_016d4a50(0x198);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x198);
    }
    uVar17 = 0;
    *(undefined4 *)(iVar3 + 0x108) = 0;
    uVar1 = *(ushort *)(param_2 + 0x192);
    puVar13 = (ushort *)(iVar3 + 0x192);
    *puVar13 = 0;
    if (uVar1 != 0) {
      iVar20 = 4;
      iVar19 = 0;
      uVar17 = 0;
      piVar10 = (int *)((uint)&local_70 | 4);
      do {
        iVar21 = *(int *)(param_2 + iVar19 + 0x114);
        uVar18 = *(undefined4 *)(param_2 + iVar19 + 0x110);
        if (iVar21 == 0) {
          iVar15 = 1;
        }
        else {
          iVar15 = thunk_FUN_016d4a50(iVar21);
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar21);
          }
        }
        uVar17 = uVar17 + 1;
        puVar4 = (undefined4 *)(param_2 + iVar19 * 2);
        FUN_016dd1aa(iVar15,uVar18,iVar21);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)puVar4) {
        case 0:
          uVar2 = 0;
          break;
        default:
          local_70 = *puVar4;
          local_6c = puVar4[1];
          local_68 = puVar4[2];
          local_64 = puVar4[3];
          uStack_60 = puVar4[4];
          uStack_5c = puVar4[5];
          goto LAB_00ea2218;
        case 3:
          uVar18 = puVar4[2];
          iVar5 = puVar4[3];
          if (iVar5 == 0) {
            iVar16 = 1;
          }
          else {
            iVar16 = thunk_FUN_016d4a50(iVar5);
            if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar5);
            }
          }
          FUN_016dd1aa(iVar16,uVar18,iVar5);
          uVar2 = 3;
          local_6c = iVar5;
          local_68 = iVar16;
          local_64 = iVar5;
          break;
        case 4:
          FUN_00f1ff78(&local_30,param_2 + iVar20);
          *piVar10 = local_30;
          piVar10[1] = local_2c;
          piVar10[2] = local_28;
          uVar2 = 4;
          break;
        case 5:
          if (puVar4[3] == 0) {
            local_28 = 0;
            local_30 = 0;
          }
          else {
            if (*(int *)(param_2 + iVar20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018ac52c);
            }
            FUN_00ea1d08(&local_30,*(int *)(param_2 + iVar20),puVar4[2]);
          }
          *piVar10 = local_30;
          piVar10[1] = local_2c;
          piVar10[2] = local_28;
          uVar2 = 5;
        }
        local_70 = CONCAT31(local_70._1_3_,uVar2);
LAB_00ea2218:
        uVar9 = (uint)*puVar13;
        if (10 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        *puVar13 = *puVar13 + 1;
        iVar19 = iVar19 + 0xc;
        iVar20 = iVar20 + 0x18;
        piVar11 = (int *)(iVar3 + 0x10c + uVar9 * 0xc);
        *piVar11 = iVar21;
        piVar11[1] = iVar15;
        piVar11[2] = iVar21;
        puVar4 = (undefined4 *)(iVar3 + uVar9 * 0x18);
        *puVar4 = local_70;
        puVar4[1] = local_6c;
        puVar4[2] = local_68;
        puVar4[3] = local_64;
        puVar4[4] = uStack_60;
        puVar4[5] = uStack_5c;
      } while (uVar17 < *(ushort *)(param_2 + 0x192));
    }
    *param_1 = iVar3;
    param_1[1] = 0;
    param_1[2] = uVar17;
    return;
  }
  FUN_00ea1d08(&local_30,*(undefined4 *)(param_2 + 0x198));
  uVar17 = local_2c;
  if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  iVar3 = thunk_FUN_016d4a50(0x1c8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x1c8);
  }
  puVar13 = (ushort *)(iVar3 + 0x192);
  *puVar13 = 0;
  *(undefined4 *)(iVar3 + 0x108) = 0;
  *(int *)(iVar3 + 0x198) = local_30;
  bVar22 = 0xfffffffe < local_2c;
  local_2c = local_2c + 1;
  if (bVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(int *)(local_30 + 0x108) = iVar3;
  *(undefined2 *)(local_30 + 400) = 0;
  local_30 = iVar3;
  if (*(ushort *)(param_2 + 0x192) != 0) {
    iVar21 = 4;
    iVar19 = 0;
    puVar4 = (undefined4 *)((uint)&local_58 | 4);
    iVar20 = local_28;
    uVar9 = 0;
    do {
      iVar15 = *(int *)(param_2 + iVar19 + 0x114);
      uVar18 = *(undefined4 *)(param_2 + iVar19 + 0x110);
      if (iVar15 == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(iVar15);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar15);
        }
      }
      uVar6 = uVar9 + 1;
      puVar14 = (undefined4 *)(param_2 + iVar19 * 2);
      FUN_016dd1aa(iVar5,uVar18,iVar15);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)puVar14) {
      case 0:
        uVar2 = 0;
        break;
      default:
        local_58 = *puVar14;
        local_54 = puVar14[1];
        local_50 = puVar14[2];
        local_4c = puVar14[3];
        uStack_48 = puVar14[4];
        uStack_44 = puVar14[5];
        goto LAB_00ea1f50;
      case 3:
        iVar16 = puVar14[3];
        uVar18 = puVar14[2];
        if (iVar16 == 0) {
          iVar7 = 1;
        }
        else {
          iVar7 = thunk_FUN_016d4a50(iVar16);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar16);
          }
        }
        FUN_016dd1aa(iVar7,uVar18,iVar16);
        local_58 = CONCAT31(local_58._1_3_,3);
        local_54 = iVar16;
        local_50 = iVar7;
        local_4c = iVar16;
        goto LAB_00ea1f50;
      case 4:
        FUN_00f1ff78(&local_70,param_2 + iVar21);
        *puVar4 = local_70;
        puVar4[1] = local_6c;
        puVar4[2] = local_68;
        uVar2 = 4;
        break;
      case 5:
        if (puVar14[3] == 0) {
          local_68 = 0;
          local_70 = 0;
        }
        else {
          if (puVar14[1] == 0) {
            local_28 = iVar20;
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018ac52c);
          }
          FUN_00ea1d08(&local_70,puVar14[1],puVar14[2]);
        }
        *puVar4 = local_70;
        puVar4[1] = local_6c;
        puVar4[2] = local_68;
        uVar2 = 5;
      }
      local_58 = CONCAT31(local_58._1_3_,uVar2);
LAB_00ea1f50:
      FUN_00ea1d08(&local_3c,*(undefined4 *)(param_2 + uVar9 * 4 + 0x19c),param_3 + -1);
      iVar16 = local_34;
      if (local_3c == 0) {
        iVar7 = thunk_FUN_016d4a50(0x198);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x198);
        }
        *(undefined2 *)(iVar7 + 0x192) = 0;
        *(undefined4 *)(iVar7 + 0x108) = 0;
        if (uVar17 != 0) goto LAB_00ea2294;
      }
      else {
        iVar7 = local_3c;
        if (local_38 != uVar17) {
LAB_00ea2294:
          uVar18 = 0x30;
          puVar12 = &DAT_018ac46c;
          puVar8 = &DAT_00413115;
          goto LAB_00ea22c0;
        }
      }
      uVar9 = (uint)*puVar13;
      if (10 < uVar9) {
        uVar18 = 0x20;
        puVar8 = &DAT_00565dd0;
        puVar12 = &DAT_018af428;
LAB_00ea22c0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar8,uVar18,puVar12);
      }
      uVar1 = (ushort)(uVar9 + 1);
      *puVar13 = uVar1;
      iVar19 = iVar19 + 0xc;
      iVar21 = iVar21 + 0x18;
      piVar10 = (int *)(iVar3 + 0x10c + uVar9 * 0xc);
      *piVar10 = iVar15;
      piVar10[1] = iVar5;
      piVar10[2] = iVar15;
      puVar14 = (undefined4 *)(iVar3 + uVar9 * 0x18);
      *puVar14 = local_58;
      puVar14[1] = local_54;
      puVar14[2] = local_50;
      puVar14[3] = local_4c;
      puVar14[4] = uStack_48;
      puVar14[5] = uStack_44;
      ((int *)(iVar3 + 0x198))[uVar9 + 1] = iVar7;
      *(int *)(iVar7 + 0x108) = iVar3;
      *(ushort *)(iVar7 + 400) = uVar1;
      iVar20 = iVar16 + iVar20 + 1;
      uVar9 = uVar6;
    } while (uVar6 < *(ushort *)(param_2 + 0x192));
    local_28 = iVar20;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

