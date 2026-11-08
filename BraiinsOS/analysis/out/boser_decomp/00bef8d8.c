// FUN_00bef8d8 @ 00bef8d8 size=200 calls_out=4 calls_in=1
// strings: 

void FUN_00bef8d8(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 7) != '\x03') {
    return;
  }
  FUN_01139b38(*param_1,param_1[1]);
  piVar2 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180ffc(param_1[4]);
  }
  piVar2 = (int *)param_1[3];
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121d018(param_1[3]);
  }
  piVar2 = (int *)param_1[2];
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(param_1[2]);
  }
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  return;
}

