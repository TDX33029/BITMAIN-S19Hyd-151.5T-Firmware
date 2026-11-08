// FUN_00e47ef0 @ 00e47ef0 size=280 calls_out=7 calls_in=3
// strings: 

void FUN_00e47ef0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = *(int **)(param_1 + 0x24);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaa68(*(undefined4 *)(param_1 + 0x24));
  }
  piVar2 = *(int **)(param_1 + 0x28);
  FUN_00aa313c(piVar2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(*(undefined4 *)(param_1 + 0x28));
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x18) != -0x80000000 && *(int *)(param_1 + 0x18) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1c));
  }
  piVar4 = *(int **)(param_1 + 0x30);
  piVar2 = piVar4 + 0x11;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_00e473d0(piVar4 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacf14(*(undefined4 *)(param_1 + 0x30));
    return;
  }
  return;
}

