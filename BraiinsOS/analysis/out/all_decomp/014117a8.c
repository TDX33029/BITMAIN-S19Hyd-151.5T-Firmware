// FUN_014117a8 @ 014117a8 size=300 calls_out=7 calls_in=3
// strings: 

void FUN_014117a8(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0xa1) == '\0') {
    FUN_0140ed24(param_1);
    FUN_0145d5e0(param_1 + 0x68);
    return;
  }
  if (*(char *)(param_1 + 0xa1) == '\x03') {
    uVar5 = *(undefined4 *)(param_1 + 0x60);
    puVar6 = *(undefined4 **)(param_1 + 100);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    piVar2 = *(int **)(param_1 + 0x94);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143d994(*(undefined4 *)(param_1 + 0x94));
    }
    piVar2 = *(int **)(param_1 + 0x98);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    }
    piVar2 = *(int **)(param_1 + 0x54);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143d9f8(*(undefined4 *)(param_1 + 0x54));
    }
    piVar2 = *(int **)(param_1 + 0x40);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
        return;
      }
    }
  }
  return;
}

