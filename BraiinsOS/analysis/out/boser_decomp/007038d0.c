// FUN_007038d0 @ 007038d0 size=300 calls_out=1 calls_in=6
// strings: 

void FUN_007038d0(int *param_1,int *param_2)

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
      goto LAB_00703900;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 1;
LAB_00703900:
  DataMemoryBarrier(0xb);
  if (iVar2 == 2) {
    iVar2 = param_2[1];
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 8);
    goto LAB_007039dc;
  }
  if (iVar2 != 0) {
    return;
  }
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    iVar2 = param_2[1];
LAB_0070394c:
    uVar5 = (**(code **)*param_2)(iVar2);
    if (*param_1 != 0) {
      (**(code **)(*param_1 + 0xc))(param_1[1]);
    }
    *(undefined8 *)param_1 = uVar5;
  }
  else {
    iVar2 = param_2[1];
    if (param_1[1] != iVar2 || (undefined4 *)*param_1 != (undefined4 *)*param_2) goto LAB_0070394c;
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
    FUN_012fb0cc(&DAT_01c06570);
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 0;
  DataMemoryBarrier(0xb);
  UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 4);
LAB_007039dc:
                    /* WARNING: Could not recover jumptable at 0x007039e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar2);
  return;
}

