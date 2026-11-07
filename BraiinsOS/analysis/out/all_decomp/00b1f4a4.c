// FUN_00b1f4a4 @ 00b1f4a4 size=204 calls_out=4 calls_in=2
// strings: 

void FUN_00b1f4a4(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0x20) == '\x04') {
    FUN_00a07b4c(param_1 + 0x28);
    return;
  }
  if (*(char *)(param_1 + 0x20) != '\x05') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x60);
  bVar5 = cVar1 == '\x03';
  if (bVar5) {
    cVar1 = *(char *)(param_1 + 0x3d);
  }
  if (bVar5 && cVar1 == '\x04') {
    FUN_0163bdc0(param_1 + 0x40);
    if (*(int *)(param_1 + 0x50) != 0) {
      (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
    }
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  iVar2 = *(int *)(param_1 + 100);
  piVar3 = (int *)(iVar2 + 0x194);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_0163b708(iVar2 + 0x88);
  }
  piVar3 = *(int **)(param_1 + 100);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f17d0(*(undefined4 *)(param_1 + 100));
    return;
  }
  return;
}

