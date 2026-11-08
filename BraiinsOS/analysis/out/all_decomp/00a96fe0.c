// FUN_00a96fe0 @ 00a96fe0 size=428 calls_out=5 calls_in=1
// strings: 

void FUN_00a96fe0(undefined4 *param_1,undefined4 *param_2)

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
  iVar10 = param_2[1];
  (**(code **)(iVar10 + 0xc))(&local_30,(int)piVar8 + (*(int *)(iVar10 + 8) - 1U & 0xfffffff8) + 8);
  if ((local_30 != 0x50f052f7 || iStack_28 != -0x20684cdb) ||
      (iStack_2c != -0x66f64d5b || iStack_24 != -0x4aa34df2)) {
    *param_1 = piVar8;
    param_1[1] = iVar10;
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
      iVar10 = piVar8[3];
      iVar9 = piVar8[4];
      goto joined_r0x00a9711c;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *piVar8 = 0;
  DataMemoryBarrier(0xb);
  iVar9 = piVar8[2];
  piVar7 = (int *)piVar8[3];
  iVar10 = piVar8[4];
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
  if (iVar9 == -0x80000000) {
    iVar10 = piVar7[3];
    iVar9 = piVar7[4];
    piVar8 = piVar7;
joined_r0x00a9711c:
    if (iVar9 == 0) {
      piVar7 = (int *)&DAT_00000001;
    }
    else {
      piVar7 = (int *)thunk_FUN_016d4a50(iVar9);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar9);
      }
    }
    FUN_016dd1aa(piVar7,iVar10,iVar9);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(piVar8);
    }
    iVar10 = iVar9;
  }
  param_1[2] = piVar7;
  *param_1 = 0;
  param_1[1] = iVar9;
  param_1[3] = iVar10;
  return;
}

