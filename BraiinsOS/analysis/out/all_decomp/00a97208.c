// FUN_00a97208 @ 00a97208 size=324 calls_out=2 calls_in=1
// strings: 

void FUN_00a97208(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int *piVar7;
  int iVar8;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar7 = (int *)*param_2;
  iVar8 = param_2[1];
  (**(code **)(iVar8 + 0xc))(&local_28,(int)piVar7 + (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8);
  if ((local_28 != 0x15b11d7e || iStack_20 != -0x5bdc3de8) ||
      (iStack_24 != -0x4c061650 || iStack_1c != -0xbbdd27b)) {
    *param_1 = piVar7;
    param_1[1] = iVar8;
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
    if (*piVar7 != 1) {
      ClearExclusiveLocal();
      uVar6 = (undefined1)piVar7[2];
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(piVar7);
      }
      goto LAB_00a97338;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar1);
  *piVar7 = 0;
  DataMemoryBarrier(0xb);
  uVar6 = (undefined1)piVar7[2];
  if (piVar7 != (int *)0xffffffff) {
    piVar2 = piVar7 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(piVar7);
    }
  }
LAB_00a97338:
  *(undefined1 *)(param_1 + 1) = uVar6;
  *param_1 = 0;
  return;
}

