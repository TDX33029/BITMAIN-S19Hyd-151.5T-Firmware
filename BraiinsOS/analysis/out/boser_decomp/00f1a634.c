// FUN_00f1a634 @ 00f1a634 size=220 calls_out=4 calls_in=0
// strings: 

void FUN_00f1a634(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xb) == '\0') {
    piVar2 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180044(param_1[3]);
    }
    piVar2 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(param_1[4]);
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0xb) != '\x03') {
    return;
  }
  FUN_01139b38(param_1[9],param_1[10]);
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  FUN_019bb7e0(param_1[6],param_1[7]);
  piVar2 = (int *)param_1[5];
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180044(param_1[5]);
    return;
  }
  return;
}

