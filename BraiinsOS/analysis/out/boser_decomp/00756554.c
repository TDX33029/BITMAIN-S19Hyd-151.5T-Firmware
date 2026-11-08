// FUN_00756554 @ 00756554 size=132 calls_out=3 calls_in=4
// strings: 

void FUN_00756554(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x28) == '\x02') {
    return;
  }
  piVar3 = *(int **)(param_1 + 0x20);
  FUN_013e2464(piVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013cf15c(*(undefined4 *)(param_1 + 0x20));
  }
  piVar3 = *(int **)(param_1 + 0x24);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014210d0(*(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}

