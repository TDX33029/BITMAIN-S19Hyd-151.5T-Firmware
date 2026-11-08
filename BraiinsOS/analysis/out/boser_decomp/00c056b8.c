// FUN_00c056b8 @ 00c056b8 size=268 calls_out=6 calls_in=4
// strings: 

void FUN_00c056b8(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0x35) != '\x03') {
    return;
  }
  FUN_01139b38(param_1[4],param_1[5]);
  piVar2 = (int *)param_1[9];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180ffc(param_1[9]);
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_019bb7e0(*param_1,param_1[1]);
  piVar2 = (int *)param_1[8];
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fe74(param_1[8]);
  }
  piVar2 = (int *)param_1[7];
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121d018(param_1[7]);
  }
  piVar2 = (int *)param_1[6];
  *(undefined1 *)((int)param_1 + 0x33) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(param_1[6]);
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}

