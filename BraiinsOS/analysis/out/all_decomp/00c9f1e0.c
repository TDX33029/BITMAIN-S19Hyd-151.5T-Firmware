// FUN_00c9f1e0 @ 00c9f1e0 size=680 calls_out=9 calls_in=2
// strings: 

void FUN_00c9f1e0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x13)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    uVar6 = param_2[2];
    piVar3 = *(int **)param_2[3];
    unaff_r5 = *param_2;
    unaff_r6 = param_2[1];
    do {
      iVar7 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_00c9f4a8;
    param_2[4] = unaff_r5;
    param_2[6] = uVar6;
    param_2[5] = unaff_r6;
    param_2[7] = piVar3;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    *(undefined1 *)(param_2 + 0x12) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876d2c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876d2c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x12)) {
    case 0:
      piVar3 = (int *)param_2[7];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01876ccc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01876ccc);
    case 3:
      goto switchD_00c9f284_caseD_3;
    }
  }
  param_2[8] = piVar3;
  *(undefined1 *)((int)param_2 + 0x49) = 0;
  local_40 = param_2[4];
  uStack_3c = param_2[5];
  uStack_38 = param_2[6];
  iVar7 = piVar3[2];
  piVar3 = (int *)piVar3[3];
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_00c9f4a8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xc9f4a8);
    (*pcVar1)();
  }
  FUN_0076bb80(&local_60,&local_40,iVar7 != 0,piVar3,unaff_r6,unaff_r5);
  *(undefined1 *)((int)param_2 + 0x49) = 1;
  param_2[9] = local_60;
  param_2[0x11] = 0xffffffff;
  param_2[10] = local_5c;
  param_2[0xb] = uStack_58;
  param_2[0xc] = local_54;
  param_2[0xd] = uStack_50;
  param_2[0xe] = uStack_4c;
  param_2[0xf] = local_48;
  param_2[0x10] = param_2[8] + 0x20;
switchD_00c9f284_caseD_3:
  iVar7 = FUN_00c8101c(param_2 + 0x10,param_3);
  if (iVar7 == 0) {
    *(undefined1 *)(param_2 + 0x12) = 3;
  }
  else {
    iVar4 = param_2[0x10];
    if (iVar4 != 0) {
      FUN_00c8204c(iVar4,param_2[0x11],1);
    }
    *(undefined1 *)((int)param_2 + 0x49) = 0;
    local_60 = param_2[9];
    local_5c = param_2[10];
    uStack_58 = param_2[0xb];
    iVar4 = *(int *)(iVar7 + 0x28);
    local_54 = param_2[0xc];
    if (iVar4 == *(int *)(iVar7 + 0x20)) {
      FUN_007f5530();
    }
    puVar5 = (undefined4 *)(*(int *)(iVar7 + 0x24) + iVar4 * 0x10);
    *puVar5 = local_60;
    puVar5[1] = local_5c;
    puVar5[2] = uStack_58;
    puVar5[3] = local_54;
    *(int *)(iVar7 + 0x28) = iVar4 + 1;
    FUN_00c822ec(iVar7);
    piVar3 = (int *)param_2[8];
    local_30 = param_2[0xd];
    iStack_2c = param_2[0xe];
    iStack_28 = param_2[0xf];
    *(undefined1 *)((int)param_2 + 0x49) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_2[8]);
    }
    *param_1 = local_30;
    param_1[1] = iStack_2c;
    param_1[2] = iStack_28;
    *(undefined1 *)(param_2 + 0x12) = 1;
    if (local_30 != 2) {
      FUN_00c865f8(param_2 + 4);
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      *(undefined1 *)(param_2 + 0x13) = 1;
      return;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_2 + 0x13) = 3;
  return;
}

