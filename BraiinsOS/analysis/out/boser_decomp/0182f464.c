// FUN_0182f464 @ 0182f464 size=324 calls_out=8 calls_in=2
// strings: 

void FUN_0182f464(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    FUN_0185c0fc(param_1);
    FUN_01435814(param_1 + 0xb0);
    return;
  }
  if (*(char *)(param_1 + 0xe0) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  FUN_0182f7a8(param_1 + 0x90);
  piVar2 = *(int **)(param_1 + 0xdc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(*(undefined4 *)(param_1 + 0xdc));
  }
  *(undefined1 *)(param_1 + 0xe2) = 0;
  FUN_016f8f88(param_1 + 0x74);
  piVar2 = *(int **)(param_1 + 0x84);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(*(undefined4 *)(param_1 + 0x84));
  }
  piVar2 = *(int **)(param_1 + 0x88);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01853618(*(undefined4 *)(param_1 + 0x88));
  }
  if (*(char *)(param_1 + 0x70) != '\x02') {
    (**(code **)(*(int *)(param_1 + 0x60) + 0x10))
              (param_1 + 0x6c,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
  }
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    }
  }
  *(undefined1 *)(param_1 + 0xe3) = 0;
  return;
}

