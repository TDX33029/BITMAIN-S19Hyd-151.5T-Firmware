// FUN_00fe179c @ 00fe179c size=252 calls_out=5 calls_in=0
// strings: 

void FUN_00fe179c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x43) == '\0') {
    piVar2 = (int *)param_1[0x40];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(param_1[0x40]);
    }
    piVar2 = (int *)param_1[0x41];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(param_1[0x41]);
    }
    FUN_019bb7e0(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00fe1894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[4] + 0x10))(param_1 + 7,param_1[5],param_1[6]);
    return;
  }
  if (*(char *)(param_1 + 0x43) != '\x03') {
    return;
  }
  FUN_00fe14b0(param_1 + 0x16);
  FUN_00f85d7c(param_1 + 0xc);
  (**(code **)(param_1[8] + 0x10))(param_1 + 0xb,param_1[9],param_1[10]);
  piVar2 = (int *)param_1[0x42];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a934a0(param_1[0x42]);
  }
  *(undefined1 *)((int)param_1 + 0x10d) = 0;
  return;
}

