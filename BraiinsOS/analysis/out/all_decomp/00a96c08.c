// FUN_00a96c08 @ 00a96c08 size=452 calls_out=5 calls_in=1
// strings: 

void FUN_00a96c08(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  piVar8 = (int *)*param_2;
  iVar9 = param_2[1];
  (**(code **)(iVar9 + 0xc))(&local_30,(int)piVar8 + (*(int *)(iVar9 + 8) - 1U & 0xfffffff8) + 8);
  if ((local_30 != 0x7065a17c || iStack_28 != 0x70f82b0) ||
      (iStack_2c != -0x4166dfdd || iStack_24 != 0x7f3b2976)) {
    *param_1 = piVar8;
    param_1[1] = iVar9;
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar3 = param_2[5];
    param_1[2] = param_2[2];
    param_1[3] = uVar5;
    param_1[4] = uVar6;
    param_1[5] = uVar3;
    return;
  }
  do {
    if (*piVar8 != 1) {
      ClearExclusiveLocal();
      iVar9 = piVar8[4];
      goto joined_r0x00a96d38;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *piVar8 = 0;
  DataMemoryBarrier(0xb);
  iVar10 = piVar8[2];
  piVar7 = (int *)piVar8[3];
  iVar9 = piVar8[4];
  if (piVar8 != (int *)0xffffffff) {
    piVar2 = piVar8 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(piVar8);
    }
  }
  if (iVar10 == -0x80000000) {
    iVar9 = piVar7[4];
    piVar8 = piVar7;
joined_r0x00a96d38:
    uVar3 = 0;
    if (iVar9 < 0) {
LAB_00a96d3c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,iVar9);
    }
    iVar4 = piVar8[3];
    if (iVar9 == 0) {
      iVar10 = 0;
      piVar7 = (int *)&DAT_00000001;
    }
    else {
      piVar7 = (int *)thunk_FUN_016d4a50(iVar9);
      iVar10 = iVar9;
      if (piVar7 == (int *)0x0) {
        uVar3 = 1;
        goto LAB_00a96d3c;
      }
    }
    FUN_016dd1aa(piVar7,iVar4,iVar9);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(piVar8);
    }
  }
  param_1[2] = piVar7;
  *param_1 = 0;
  param_1[1] = iVar10;
  param_1[3] = iVar9;
  return;
}

