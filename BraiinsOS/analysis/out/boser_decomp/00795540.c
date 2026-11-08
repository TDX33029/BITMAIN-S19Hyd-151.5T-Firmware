// FUN_00795540 @ 00795540 size=220 calls_out=6 calls_in=3
// strings: 

void FUN_00795540(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00795330(param_1 + 0x80);
  FUN_0074b190(param_1);
  piVar2 = *(int **)(param_1 + 0xdc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0079579c(*(undefined4 *)(param_1 + 0xdc));
  }
  piVar2 = *(int **)(param_1 + 0xe0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0079584c(*(undefined4 *)(param_1 + 0xe0));
  }
  piVar2 = *(int **)(param_1 + 0xe4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0079594c(*(undefined4 *)(param_1 + 0xe4));
  }
  piVar2 = *(int **)(param_1 + 0xe8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0140a9cc(*(undefined4 *)(param_1 + 0xe8));
    return;
  }
  return;
}

