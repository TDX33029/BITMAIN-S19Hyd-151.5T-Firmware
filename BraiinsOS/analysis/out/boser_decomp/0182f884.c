// FUN_0182f884 @ 0182f884 size=328 calls_out=8 calls_in=2
// strings: 

void FUN_0182f884(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x129) == '\0') {
    FUN_0185c0fc(param_1);
    FUN_01435814(param_1 + 0x98);
    return;
  }
  if (*(char *)(param_1 + 0x129) == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    FUN_0182c8b4(param_1 + 0x10c);
    piVar2 = *(int **)(param_1 + 0xfc);
    *(undefined1 *)(param_1 + 299) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(*(undefined4 *)(param_1 + 0xfc));
    }
    FUN_016f8f88(param_1 + 0xf0);
    piVar2 = *(int **)(param_1 + 0x84);
    *(undefined1 *)(param_1 + 300) = 0;
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
        return;
      }
      return;
    }
  }
  return;
}

