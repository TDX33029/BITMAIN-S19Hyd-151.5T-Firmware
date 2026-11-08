// FUN_00de5044 @ 00de5044 size=172 calls_out=7 calls_in=1
// strings: 

void FUN_00de5044(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x20e) != '\0') {
    if (*(char *)(param_1 + 0x20e) == '\x03') {
      FUN_00de5178(param_1);
      FUN_005c0c4c(param_1 + 0x100);
      FUN_005c1390(param_1 + 0x180);
      return;
    }
    return;
  }
  FUN_005c4e2c(param_1 + 0x200);
  FUN_005c471c(param_1 + 0x1e0);
  iVar2 = *(int *)(param_1 + 0x1f8);
  piVar3 = (int *)(iVar2 + 0x104);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_0163b708(iVar2 + 0x88);
  }
  piVar3 = *(int **)(param_1 + 0x1f8);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aac2e8(*(undefined4 *)(param_1 + 0x1f8));
    return;
  }
  return;
}

