// FUN_00d063bc @ 00d063bc size=216 calls_out=3 calls_in=1
// strings: 

void FUN_00d063bc(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  
  if ((*(uint *)(param_1 + 0x68) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6c));
  }
  piVar5 = *(int **)(param_1 + 0x78);
  DataMemoryBarrier(0xb);
  piVar4 = piVar5 + 0x48;
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    puVar3 = (uint *)(piVar5 + 0x46);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = *puVar3 | 1;
    FUN_0163b708(piVar5 + 0x22);
    FUN_0163b708(piVar5 + 0x26);
    FUN_0163b708(piVar5 + 0x2a);
    FUN_0163b708(piVar5 + 0x2e);
    FUN_0163b708(piVar5 + 0x32);
    FUN_0163b708(piVar5 + 0x36);
    FUN_0163b708(piVar5 + 0x3a);
    FUN_0163b708(piVar5 + 0x3e);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d04b1c(*(undefined4 *)(param_1 + 0x78));
    return;
  }
  return;
}

