// FUN_00a96e50 @ 00a96e50 size=336 calls_out=2 calls_in=1
// strings: 

void FUN_00a96e50(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  piVar6 = (int *)*param_2;
  iVar7 = param_2[1];
  (**(code **)(iVar7 + 0xc))(&local_30,(int)piVar6 + (*(int *)(iVar7 + 8) - 1U & 0xfffffff8) + 8);
  if ((local_30 != -0x7b523484 || iStack_28 != -0x1a8857b2) ||
      (iStack_2c != 0xb073a66 || iStack_24 != -0x3ba3da41)) {
    *param_1 = piVar6;
    param_1[1] = iVar7;
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar3 = param_2[5];
    param_1[2] = param_2[2];
    param_1[3] = uVar4;
    param_1[4] = uVar5;
    param_1[5] = uVar3;
    return;
  }
  do {
    if (*piVar6 != 1) {
      ClearExclusiveLocal();
      uVar8 = *(undefined8 *)(piVar6 + 2);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(piVar6);
      }
      goto LAB_00a96f88;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = 0;
  DataMemoryBarrier(0xb);
  uVar8 = *(undefined8 *)(piVar6 + 2);
  if (piVar6 != (int *)0xffffffff) {
    piVar2 = piVar6 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(piVar6);
    }
  }
LAB_00a96f88:
  *(undefined8 *)(param_1 + 2) = uVar8;
  *param_1 = 0;
  return;
}

