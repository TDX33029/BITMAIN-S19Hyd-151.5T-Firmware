// FUN_00d84da4 @ 00d84da4 size=564 calls_out=9 calls_in=0
// strings: background task failed

void FUN_00d84da4(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 *local_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 9)) {
  case 0:
    uVar6 = *param_2;
    iVar7 = param_2[1];
    param_2[2] = uVar6;
    param_2[3] = iVar7;
    if (iVar7 == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(iVar7);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar7);
      }
    }
    FUN_016dd1aa(iVar4,uVar6,iVar7);
    param_2[4] = iVar7;
    param_2[5] = iVar4;
    param_2[6] = iVar7;
    *(undefined1 *)(param_2 + 8) = 0;
switchD_00d84e24_caseD_0:
    local_68 = param_2[4];
    uStack_64 = param_2[5];
    uStack_60 = param_2[6];
    uVar6 = FUN_005e3c78(&local_68,&DAT_0187b4d8);
    param_2[7] = uVar6;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a1ac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a1ac);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 8)) {
    case 0:
      goto switchD_00d84e24_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b4e8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b4e8);
    case 3:
      uVar6 = param_2[7];
    }
  }
  puVar8 = param_2 + 8;
  FUN_00ec9c1c(&local_40,uVar6,param_3);
  if (local_40 == 2) {
    *(undefined1 *)puVar8 = 3;
  }
  else {
    local_58 = local_40;
    local_54 = local_3c;
    local_50 = iStack_38;
    local_4c = iStack_34;
    local_48 = iStack_30;
    local_44 = puStack_2c;
    piVar5 = (int *)param_2[7];
    if (*piVar5 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar5);
      if (!bVar1) goto LAB_00d84f10;
      *piVar5 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00d84f10:
      (**(code **)(piVar5[2] + 0x10))();
    }
    if (local_58 == 1) {
      FUN_015e79d4(&local_40,0x28,"background task failed",0x16);
      puVar2 = local_44;
      iVar7 = local_48;
      if (local_48 != 0) {
        if ((code *)*local_44 != (code *)0x0) {
          (*(code *)*local_44)(local_48);
        }
        if (puVar2[1] != 0) {
          thunk_FUN_016d3fb4(iVar7);
        }
      }
      param_1[1] = local_40;
      *param_1 = -0x80000000;
      *(undefined1 *)puVar8 = 1;
      param_1[2] = local_3c;
      *(undefined1 *)(param_2 + 9) = 1;
      return;
    }
    param_1[1] = local_50;
    param_1[2] = local_4c;
    *param_1 = local_54;
    uVar3 = 1;
    *(undefined1 *)puVar8 = 1;
    if (local_54 != -0x7fffffff) goto LAB_00d84ec0;
  }
  *param_1 = -0x7fffffff;
  uVar3 = 3;
LAB_00d84ec0:
  *(undefined1 *)(param_2 + 9) = uVar3;
  return;
}

