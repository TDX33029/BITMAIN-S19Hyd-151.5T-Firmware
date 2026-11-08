// FUN_0119bdb8 @ 0119bdb8 size=344 calls_out=6 calls_in=0
// strings: 

void FUN_0119bdb8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    piVar2 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    }
    piVar2 = *(int **)(param_1 + 0x174);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x174));
    }
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_01aae24c();
    }
  }
  else {
    if (*(char *)(param_1 + 0x1a4) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x168);
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 300);
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x134));
    }
    FUN_00a27c50(param_1);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
    if (*(int *)(param_1 + 0xbc) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc0));
    }
    piVar2 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    }
    piVar2 = *(int **)(param_1 + 0x174);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x174));
    }
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_01aae24c();
    }
  }
  iVar4 = *(int *)(param_1 + 0x178);
  iVar3 = 4;
  if (iVar4 != -0x80000000) {
    FUN_019bb7e0(iVar4,*(undefined4 *)(param_1 + 0x17c));
    iVar3 = 0xc;
  }
  puVar5 = (undefined4 *)(param_1 + 0x178 + iVar3);
  FUN_019bb7e0(*puVar5,puVar5[1]);
  return;
}

