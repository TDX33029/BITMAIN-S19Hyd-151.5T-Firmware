// FUN_011c8c64 @ 011c8c64 size=1164 calls_out=13 calls_in=1
// strings: $ref~!

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011c8c64(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  int *piVar24;
  int iVar25;
  uint uVar26;
  undefined8 uVar27;
  uint local_b4;
  undefined *local_94;
  int *local_58;
  int *local_54;
  uint local_50;
  int *local_4c;
  int local_48;
  undefined4 uStack_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar22 = param_3[2];
  piVar24 = (int *)param_3[1];
  if (1 < uVar22) {
    if (uVar22 < 0x15) {
      FUN_011bbfe4(piVar24,uVar22);
    }
    else {
      FUN_011c93bc(piVar24,uVar22);
    }
  }
  piVar23 = *(int **)(param_2 + 0x38);
  do {
    iVar3 = *piVar23;
    bVar2 = (bool)hasExclusiveAccess(piVar23);
  } while (!bVar2);
  *piVar23 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11c90c8);
    (*pcVar1)();
  }
  uVar4 = *(uint *)(param_2 + 0x3c);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  iVar3 = FUN_01261fac();
  local_50 = *param_3;
  piVar11 = piVar24 + uVar22 * 4;
  uVar6 = 0;
  if (0x3ffffff < uVar22) {
LAB_011c8cf0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar6,uVar22 << 5);
  }
  iVar25 = 0;
  if (uVar22 == 0) {
    iVar7 = 4;
    uVar22 = 0;
  }
  else {
    iVar7 = thunk_FUN_016d4a50(uVar22 << 5);
    if (iVar7 == 0) {
      uVar6 = 4;
      goto LAB_011c8cf0;
    }
  }
  local_38 = 0;
  local_58 = piVar24;
  local_54 = piVar24;
  local_4c = piVar11;
  local_40 = uVar22;
  local_3c = iVar7;
  if (piVar24 != piVar11) {
    iVar20 = 0x10;
    iVar12 = *(int *)(param_2 + 0x38);
    iVar25 = 0;
    uVar6 = *(undefined4 *)(param_2 + 0x84);
    iVar14 = 0;
    do {
      puVar19 = (undefined4 *)((int)piVar24 + iVar14);
      puVar17 = (undefined *)*puVar19;
      uVar22 = puVar19[1];
      if (puVar17 == (undefined *)0x0) {
        uVar15 = *(uint *)(&DAT_004203b8 + (uVar22 & 0xff) * 4);
        local_94 = (&PTR_s__ref___018b2208)[uVar22 & 0xff];
      }
      else {
        uVar15 = uVar22;
        local_94 = puVar17;
      }
      uVar21 = uVar15 + uVar4 + 1;
      uVar13 = puVar19[2];
      uVar8 = puVar19[3];
      if ((int)uVar21 < 0) {
        uVar5 = 0;
LAB_011c8fcc:
        local_54 = (int *)((int)piVar24 + iVar14 + 0x10);
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar5,local_b4);
      }
      if (uVar21 == 0) {
        local_b4 = 1;
        uVar21 = 0;
      }
      else {
        local_b4 = thunk_FUN_016d4a50(uVar21);
        if (local_b4 == 0) {
          uVar5 = 1;
          local_b4 = uVar21;
          goto LAB_011c8fcc;
        }
      }
      local_28 = 0;
      local_30 = uVar21;
      local_2c = local_b4;
      if (uVar21 < uVar4) {
        FUN_011cf828(&local_30,0,uVar4,1,1);
      }
      uVar18 = local_28;
      uVar26 = local_2c;
      uVar21 = local_30;
      FUN_016dd1aa(local_2c + local_28,iVar12 + 8,uVar4);
      uVar18 = uVar18 + uVar4;
      local_28 = uVar18;
      if (uVar21 == uVar18) {
        FUN_011cf828(&local_30,uVar21,1,1,1);
        uVar26 = local_2c;
      }
      *(undefined1 *)(uVar26 + local_28) = 0x2f;
      local_28 = uVar18 + 1;
      FUN_01238c50(&local_30,local_94,uVar15);
      uVar21 = local_2c;
      uVar15 = local_30;
      uVar27 = FUN_011e1508(local_2c,local_28);
      if (uVar15 != 0) {
        thunk_FUN_016d3fb4(uVar21);
      }
      uVar9 = FUN_01261dbc(uVar5,uVar6,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
      uVar15 = 0;
      if (puVar17 != (undefined *)0x0) {
        uVar15 = uVar22;
      }
      if (puVar17 != (undefined *)0x0 && uVar15 != 0) {
        thunk_FUN_016d3fb4(puVar17);
      }
      iVar25 = iVar25 + 1;
      *(undefined4 *)(iVar7 + iVar20 + -0x10) = uVar13;
      iVar16 = iVar7 + iVar14 * 2;
      *(undefined4 *)(iVar16 + 4) = uVar8;
      *(undefined8 *)(iVar16 + 8) = uVar27;
      *(undefined4 *)(iVar7 + iVar20) = uVar9;
      iVar14 = iVar14 + 0x10;
      iVar20 = iVar20 + 0x20;
      *(undefined4 *)(iVar16 + 0x1c) = 3;
    } while (puVar19 + 4 != piVar11);
    local_54 = (int *)((int)piVar24 + iVar14);
  }
  local_38 = iVar25;
  FUN_012421b8(&local_58);
  local_54 = (int *)0x1;
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  local_48 = 3;
  local_58 = (int *)0x1;
  puVar19 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar19 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar19 = local_58;
  puVar19[1] = local_54;
  puVar19[2] = local_50;
  puVar19[3] = local_4c;
  puVar19[4] = local_48;
  local_54 = (int *)0x1;
  local_50 = local_30;
  local_4c = (int *)local_2c;
  local_48 = local_28;
  local_58 = (int *)0x1;
  uStack_44 = param_4;
  puVar10 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar10 = local_58;
  puVar10[1] = local_54;
  puVar10[2] = local_50;
  puVar10[3] = local_4c;
  puVar10[4] = local_48;
  puVar10[5] = uStack_44;
  *param_1 = (int)puVar10;
  param_1[1] = (int)piVar23;
  param_1[2] = uVar4;
  param_1[3] = (int)puVar19;
  param_1[4] = iVar3;
  return;
}

