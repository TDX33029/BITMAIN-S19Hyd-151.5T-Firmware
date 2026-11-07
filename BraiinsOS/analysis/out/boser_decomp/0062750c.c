// FUN_0062750c @ 0062750c size=640 calls_out=17 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | [internal

void FUN_0062750c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  int extraout_r2;
  undefined1 extraout_r3;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  int *local_98;
  undefined4 local_94;
  undefined1 *local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_64;
  undefined1 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined1 *local_44;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  int *piStack_30;
  undefined4 uStack_2c;
  
  piVar7 = &local_a8;
  uVar1 = FUN_019d8a74(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 1:
LAB_006275cc:
    FUN_00d3ee24(param_1 + 0x18);
    goto LAB_00627704;
  case 2:
    goto switchD_0062753c_caseD_2;
  case 3:
    goto switchD_0062753c_caseD_3;
  }
  iVar2 = param_1 + 0x18;
  if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar9 = FUN_019ec558(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  uVar8 = (undefined4)((ulonglong)uVar9 >> 0x20);
  puVar4 = *(undefined1 **)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = 0x80000000;
  if (puVar4 == (undefined1 *)0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("[internal",0x2d,&DAT_01d29564);
  }
  FUN_019ec5bc();
  local_90 = puVar4;
  local_8c = iVar5;
  local_88 = uVar6;
  FUN_019cad90(&local_5c,&local_90);
  if (local_5c == 1) {
    uVar1 = 1;
    local_a0 = extraout_r1;
    local_9c = extraout_r2;
    uVar6 = local_54;
    iVar5 = local_58;
    puVar4 = (undefined1 *)0x80000002;
    uVar3 = extraout_r3;
  }
  else {
    local_60 = (undefined1)local_54;
    local_64 = local_58;
    iVar5 = thunk_FUN_01be5118(0x180);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x180);
    }
    local_84 = 0;
    local_88 = 0;
    local_90 = (undefined1 *)0x20;
    local_8c = iVar5;
    uVar1 = FUN_019db8a0(&local_90,&local_64);
    local_a0 = local_84;
    local_9c = local_64;
    uVar6 = local_88;
    iVar5 = local_8c;
    puVar4 = local_90;
    uVar3 = local_60;
  }
  uVar10 = CONCAT44(uVar6,iVar5);
  local_94 = CONCAT31(local_94._1_3_,uVar1);
  local_98 = (int *)CONCAT31(local_98._1_3_,uVar3);
  local_ac = puVar4;
  local_a8 = iVar5;
  local_a4 = uVar6;
  FUN_019ec558((int)uVar9,uVar8);
  if (puVar4 == (undefined1 *)0x80000003) {
LAB_00627664:
    uVar1 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar1) {
    case 0:
switchD_0062753c_caseD_2:
      return;
    case 1:
      uVar6 = FUN_019e1c04(param_1);
      FUN_00f2acf8(&local_ac);
      local_50[0] = 2;
      FUN_00f328b0(iVar2,local_50);
      uVar10 = FUN_019aa2cc(uVar6);
      break;
    case 2:
switchD_0062753c_caseD_3:
      FUN_00d36bb0(param_1);
      return;
    case 3:
      goto LAB_006275cc;
    }
LAB_0062783c:
    iVar5 = *(int *)(param_1 + 0x20);
    local_48 = 1;
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    puVar4 = &DAT_80000004;
  }
  else {
    local_90 = (undefined1 *)0x2;
    FUN_00f328b0(iVar2,&local_90);
    if (puVar4 == &DAT_80000004) goto LAB_0062783c;
    if (puVar4 == (undefined1 *)0x80000003) goto LAB_00627664;
    local_48 = 0;
    piVar7 = local_98;
    uVar8 = local_94;
    uVar10 = CONCAT44(local_9c,local_a0);
  }
  local_50[0] = 1;
  local_44 = puVar4;
  local_40 = iVar5;
  local_3c = uVar6;
  piStack_30 = piVar7;
  uStack_2c = uVar8;
  local_38 = uVar10;
  FUN_00f328b0(iVar2,local_50);
LAB_00627704:
  FUN_00d3ee84(param_1);
  return;
}

