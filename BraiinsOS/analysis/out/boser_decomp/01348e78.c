// FUN_01348e78 @ 01348e78 size=300 calls_out=1 calls_in=74
// strings: 

void FUN_01348e78(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar4;
  undefined8 uVar5;
  
  piVar4 = param_1 + 2;
  do {
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      ClearExclusiveLocal();
      goto LAB_01348ea8;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 1;
LAB_01348ea8:
  DataMemoryBarrier(0xb);
  if (iVar2 == 2) {
    iVar2 = param_2[1];
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 8);
    goto LAB_01348f84;
  }
  if (iVar2 != 0) {
    return;
  }
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    iVar2 = param_2[1];
LAB_01348ef4:
    uVar5 = (**(code **)*param_2)(iVar2);
    if (*param_1 != 0) {
      (**(code **)(*param_1 + 0xc))(param_1[1]);
    }
    *(undefined8 *)param_1 = uVar5;
  }
  else {
    iVar2 = param_2[1];
    if (param_1[1] != iVar2 || (undefined4 *)*param_1 != (undefined4 *)*param_2) goto LAB_01348ef4;
  }
  if (*piVar4 == 1) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (bVar1) {
        *piVar4 = 0;
        DataMemoryBarrier(0xb);
        return;
      }
    } while (*piVar4 == 1);
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  iVar3 = *param_1;
  iVar2 = param_1[1];
  *param_1 = 0;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01ce6c80);
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 0;
  DataMemoryBarrier(0xb);
  UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 4);
LAB_01348f84:
                    /* WARNING: Could not recover jumptable at 0x01348f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar2);
  return;
}

