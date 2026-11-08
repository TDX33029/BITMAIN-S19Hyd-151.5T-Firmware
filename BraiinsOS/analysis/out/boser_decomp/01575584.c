// FUN_01575584 @ 01575584 size=1180 calls_out=15 calls_in=1
// strings: $ref~!

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01575584(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  int *piVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  int *piVar27;
  int iVar28;
  undefined8 uVar29;
  uint local_a4;
  undefined *local_88;
  int *local_40;
  int *local_3c;
  int iStack_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  piVar19 = (int *)param_3[2];
  piVar24 = (int *)param_3[1];
  if ((int *)0x1 < piVar19) {
    if (piVar19 < (int *)0x15) {
      iVar3 = 0x10;
      do {
        FUN_01538990(piVar24,(int)piVar24 + iVar3);
        iVar3 = iVar3 + 0x10;
      } while ((int)piVar19 * 0x10 != iVar3);
    }
    else {
      FUN_01549a20(piVar24,piVar19);
    }
  }
  piVar27 = *(int **)(param_2 + 0x38);
  do {
    iVar3 = *piVar27;
    bVar2 = (bool)hasExclusiveAccess(piVar27);
  } while (!bVar2);
  *piVar27 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1575a00);
    (*pcVar1)();
  }
  uVar4 = *(uint *)(param_2 + 0x3c);
  uVar22 = *(undefined4 *)(param_2 + 0x54);
  uVar5 = FUN_015707a4(uVar22);
  piVar14 = piVar24 + (int)piVar19 * 4;
  uVar6 = *param_3;
  uVar25 = 0;
  if ((int *)0x3ffffff < piVar19) {
LAB_01575614:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar25,(int)piVar19 << 5);
  }
  if (piVar19 == (int *)0x0) {
    iVar3 = 4;
    piVar19 = (int *)0x0;
  }
  else {
    uVar25 = 4;
    iVar3 = FUN_01298504((int)piVar19 << 5,4);
    if (iVar3 == 0) goto LAB_01575614;
  }
  iVar28 = 0;
  local_40 = piVar24;
  local_3c = piVar24;
  iStack_38 = uVar6;
  local_34 = piVar14;
  if (piVar24 != piVar14) {
    iVar7 = *(int *)(param_2 + 0x38);
    uVar25 = *(undefined4 *)(param_2 + 0x84);
    iVar21 = 0;
    iVar8 = 0x10;
    iVar28 = 0;
    do {
      puVar26 = (undefined4 *)((int)piVar24 + iVar21);
      puVar9 = (undefined *)*puVar26;
      uVar15 = puVar26[1];
      if (puVar9 == (undefined *)0x0) {
        uVar17 = *(uint *)(&DAT_00537264 + (uVar15 & 0xff) * 4);
        local_88 = (&PTR_s__ref___01d32824)[uVar15 & 0xff];
      }
      else {
        uVar17 = uVar15;
        local_88 = puVar9;
      }
      uVar20 = uVar4 + 1 + uVar17;
      uVar16 = puVar26[2];
      uVar10 = puVar26[3];
      if ((int)uVar20 < 0) {
        uVar5 = 0;
LAB_015758e4:
        local_3c = (int *)((int)piVar24 + iVar21 + 0x10);
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar5,local_a4);
      }
      if (uVar20 == 0) {
        local_a4 = 1;
        uVar20 = 0;
      }
      else {
        local_a4 = FUN_01298504(uVar20,1);
        if (local_a4 == 0) {
          uVar5 = 1;
          local_a4 = uVar20;
          goto LAB_015758e4;
        }
      }
      local_28 = 0;
      local_30 = uVar20;
      local_2c = local_a4;
      if (uVar20 < uVar4) {
        FUN_01af7b44(&local_30,0,uVar4,1,1);
      }
      uVar18 = local_28;
      uVar23 = local_2c;
      uVar20 = local_30;
      FUN_01bed4e2(local_2c + local_28,iVar7 + 8,uVar4);
      uVar18 = uVar18 + uVar4;
      local_28 = uVar18;
      if (uVar20 == uVar18) {
        FUN_01af7b44(&local_30,uVar20,1,1,1);
        uVar23 = local_2c;
      }
      *(undefined1 *)(uVar23 + local_28) = 0x2f;
      local_28 = uVar18 + 1;
      FUN_015321f0(&local_30,local_88,uVar17);
      uVar20 = local_2c;
      uVar17 = local_30;
      uVar29 = FUN_016bc0ec(local_2c,local_28);
      FUN_019bb7e0(uVar17,uVar20);
      uVar11 = FUN_01570620(uVar22,uVar25,(int)uVar29,(int)((ulonglong)uVar29 >> 0x20));
      uVar17 = 0;
      if (puVar9 != (undefined *)0x0) {
        uVar17 = uVar15;
      }
      if (puVar9 != (undefined *)0x0 && uVar17 != 0) {
        thunk_FUN_01be4678(puVar9);
      }
      *(undefined4 *)(iVar3 + iVar8 + -0x10) = uVar16;
      iVar12 = iVar3 + iVar21 * 2;
      iVar21 = iVar21 + 0x10;
      *(undefined4 *)(iVar12 + 4) = uVar10;
      *(undefined8 *)(iVar12 + 8) = uVar29;
      *(undefined4 *)(iVar3 + iVar8) = uVar11;
      iVar8 = iVar8 + 0x20;
      *(undefined4 *)(iVar12 + 0x1c) = 3;
      iVar28 = iVar28 + 1;
    } while (puVar26 + 4 != piVar14);
    local_3c = (int *)((int)piVar24 + iVar21);
  }
  FUN_0157487c(&local_40);
  local_40 = piVar19;
  local_3c = (int *)iVar3;
  iStack_38 = iVar28;
  puVar26 = (undefined4 *)thunk_FUN_01be5118(0x14);
  iVar3 = iStack_38;
  piVar24 = local_3c;
  piVar19 = local_40;
  if (puVar26 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  *puVar26 = 1;
  puVar26[1] = 1;
  puVar26[2] = uVar6;
  puVar26[3] = piVar14;
  puVar26[4] = 3;
  puVar13 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  *puVar13 = 1;
  puVar13[1] = 1;
  puVar13[2] = piVar19;
  puVar13[3] = piVar24;
  puVar13[4] = iVar3;
  puVar13[5] = param_4;
  *param_1 = puVar13;
  param_1[1] = piVar27;
  param_1[2] = uVar4;
  param_1[3] = puVar26;
  param_1[4] = uVar5;
  return;
}

