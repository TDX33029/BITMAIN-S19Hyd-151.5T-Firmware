// FUN_00b69fb0 @ 00b69fb0 size=488 calls_out=8 calls_in=3
// strings: background task failed

void FUN_00b69fb0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 9)) {
  case 0:
    param_2[2] = *param_2;
    param_2[3] = param_2[1];
    FUN_019afae4(&local_78,*param_2,param_2[1]);
    param_2[4] = local_78;
    param_2[5] = uStack_74;
    param_2[6] = uStack_70;
    *(undefined1 *)(param_2 + 8) = 0;
switchD_00b6a034_caseD_0:
    local_68 = param_2[4];
    uStack_64 = param_2[5];
    uStack_60 = param_2[6];
    uVar2 = FUN_007972a8(&local_68,&DAT_01c230d0);
    param_2[7] = uVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c2044c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c2044c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 8)) {
    case 0:
      goto switchD_00b6a034_caseD_0;
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
  puVar5 = param_2 + 8;
  FUN_00798728(&local_40,uVar2,param_3);
  if (local_40 == 2) {
    *(undefined1 *)puVar5 = 3;
LAB_00b6a09c:
    uVar4 = 3;
    *param_1 = -0x7fffffff;
  }
  else {
    local_58 = local_40;
    local_54 = local_3c;
    iStack_50 = iStack_38;
    iStack_4c = iStack_34;
    uStack_48 = uStack_30;
    uStack_44 = uStack_2c;
    piVar3 = (int *)param_2[7];
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
      if (!bVar1) goto LAB_00b6a0f0;
      *piVar3 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00b6a0f0:
      (**(code **)(piVar3[2] + 0x10))();
    }
    if (local_58 == 1) {
      FUN_019a18a8(&local_40,0x28,"background task failed",0x16);
      FUN_00b6a274(&local_58);
      param_1[1] = local_40;
      *param_1 = -0x80000000;
      *(undefined1 *)puVar5 = 1;
      param_1[2] = local_3c;
    }
    else {
      *param_1 = local_54;
      param_1[1] = iStack_50;
      param_1[2] = iStack_4c;
      *(undefined1 *)puVar5 = 1;
      if (local_54 == -0x7fffffff) goto LAB_00b6a09c;
    }
    uVar4 = 1;
    FUN_00b71be0(param_2 + 4);
  }
  *(undefined1 *)(param_2 + 9) = uVar4;
  return;
}

