// FUN_00783fcc @ 00783fcc size=108 calls_out=1 calls_in=4
// strings: 

void FUN_00783fcc(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (*(undefined1 **)(param_1 + 8) == (undefined1 *)0x3b9aca01 ||
      *(undefined1 **)(param_1 + 8) == &DAT_3b9aca00) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0xf0);
  if (iVar5 != 0) {
    puVar6 = *(undefined4 **)(param_1 + 0xf4);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(iVar5);
    }
  }
  if ((*(uint *)(param_1 + 0x80) & 0x7fffffff) == 0) {
    uVar2 = *(uint *)(param_1 + 0x8c);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
    uVar2 = *(uint *)(param_1 + 0x8c);
  }
  if ((uVar2 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x90));
  }
  piVar3 = *(int **)(param_1 + 0x5c);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01089b40(*(undefined4 *)(param_1 + 0x5c));
  }
  if ((*(uint *)(param_1 + 0x50) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
  }
  piVar3 = *(int **)(param_1 + 0xdc);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0063c7d4(*(undefined4 *)(param_1 + 0xdc));
  }
  piVar3 = *(int **)(param_1 + 0xe0);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0063c938(*(undefined4 *)(param_1 + 0xe0));
  }
  piVar3 = *(int **)(param_1 + 0xe4);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0063cae0(*(undefined4 *)(param_1 + 0xe4));
  }
  piVar3 = *(int **)(param_1 + 0xe8);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0108a284(*(undefined4 *)(param_1 + 0xe8));
    return;
  }
  return;
}

