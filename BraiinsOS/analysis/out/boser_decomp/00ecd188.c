// FUN_00ecd188 @ 00ecd188 size=220 calls_out=6 calls_in=0
// strings: 

void FUN_00ecd188(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0xb4);
  if (cVar1 == '\0') {
    FUN_00ebabdc(param_1);
    piVar3 = *(int **)(param_1 + 0x98);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fe74(*(undefined4 *)(param_1 + 0x98));
    }
  }
  else {
    if (cVar1 == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00ebaa80(param_1 + 0xb8);
    }
    FUN_00df0e34(param_1 + 0xa8);
    if (*(int *)(param_1 + 0x9c) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
    }
    if (*(char *)(param_1 + 0xb5) != '\0') {
      FUN_00ebabdc(param_1);
    }
    piVar3 = *(int **)(param_1 + 0x98);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fe74(*(undefined4 *)(param_1 + 0x98));
    }
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  return;
}

