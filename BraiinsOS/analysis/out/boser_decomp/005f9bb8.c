// FUN_005f9bb8 @ 005f9bb8 size=196 calls_out=7 calls_in=1
// strings: 

void FUN_005f9bb8(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_01a3b7c0(param_1[2]);
  FUN_005f06bc(*param_1);
  FUN_005f3180(param_1[4]);
  FUN_005f3204(param_1[1]);
  FUN_0068747c(param_1[5]);
  FUN_005faf6c(param_1 + 2);
  piVar3 = (int *)param_1[0xc];
  if (piVar3 != (int *)0x0) {
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
      if (bVar1) {
        *piVar3 = 0x84;
        goto LAB_005f9c34;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
LAB_005f9c34:
  piVar3 = (int *)param_1[3];
  FUN_0068d7ac();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  FUN_0068d3bc(piVar3 + 8);
  if (piVar3[0x10] != 0) {
    (**(code **)(piVar3[0x10] + 0xc))(piVar3[0x11]);
  }
  if (piVar3 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar4 = piVar3 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar3);
    return;
  }
  return;
}

