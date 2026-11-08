// FUN_00617128 @ 00617128 size=516 calls_out=8 calls_in=2
// strings: background task failed

void FUN_00617128(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int local_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 9)) {
  case 0:
    param_2[2] = *param_2;
    param_2[3] = param_2[1];
    FUN_019afae4(&local_98,*param_2,param_2[1]);
    param_2[4] = local_98;
    param_2[5] = uStack_94;
    param_2[6] = uStack_90;
    *(undefined1 *)(param_2 + 8) = 0;
switchD_006171ac_caseD_0:
    local_88 = param_2[4];
    uStack_84 = param_2[5];
    uStack_80 = param_2[6];
    uVar2 = FUN_00b912c8(&local_88,&DAT_01c230d0);
    param_2[7] = uVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c204dc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c204dc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 8)) {
    case 0:
      goto switchD_006171ac_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case 3:
      uVar2 = param_2[7];
    }
  }
  FUN_00798844(&local_58,uVar2,param_3);
  if (local_58 == 2) {
    *(undefined1 *)(param_2 + 8) = 3;
  }
  else {
    local_78 = local_58;
    local_74 = local_54;
    iStack_70 = iStack_50;
    iStack_6c = iStack_4c;
    local_68 = local_48;
    iStack_64 = iStack_44;
    iStack_60 = iStack_40;
    iStack_5c = iStack_3c;
    piVar3 = (int *)param_2[7];
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
      if (!bVar1) goto LAB_00617260;
      *piVar3 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00617260:
      (**(code **)(piVar3[2] + 0x10))();
    }
    if (local_78 == 1) {
      FUN_019a18a8(&local_58,0x28,"background task failed",0x16);
      FUN_005f4b60(&local_78);
      iVar4 = -0x7ffffffe;
    }
    else {
      local_38 = local_68;
      iStack_34 = iStack_64;
      iStack_30 = iStack_60;
      iStack_2c = iStack_5c;
      iVar4 = local_74;
      local_58 = iStack_70;
      local_54 = iStack_6c;
    }
    *param_1 = iVar4;
    param_1[1] = local_58;
    param_1[2] = local_54;
    param_1[3] = local_38;
    param_1[4] = iStack_34;
    param_1[5] = iStack_30;
    param_1[6] = iStack_2c;
    uVar5 = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    if (iVar4 != -0x7ffffffd) {
      FUN_00b71be0(param_2 + 4);
      goto LAB_00617308;
    }
  }
  uVar5 = 3;
  *param_1 = -0x7ffffffd;
LAB_00617308:
  *(undefined1 *)(param_2 + 9) = uVar5;
  return;
}

