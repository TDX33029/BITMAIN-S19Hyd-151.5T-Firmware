// FUN_00d953a4 @ 00d953a4 size=256 calls_out=4 calls_in=0
// strings: 

void FUN_00d953a4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0x1a) == '\0') {
    piVar2 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011814ec(param_1[4]);
    }
    piVar2 = (int *)param_1[5];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(param_1[5]);
      return;
    }
  }
  else if (*(char *)((int)param_1 + 0x1a) == '\x03') {
    FUN_01139b38(*param_1,param_1[1]);
    piVar2 = (int *)param_1[3];
    *(undefined1 *)(param_1 + 6) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180ed4(param_1[3]);
    }
    piVar2 = (int *)param_1[2];
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011814ec(param_1[2]);
      return;
    }
    return;
  }
  return;
}

