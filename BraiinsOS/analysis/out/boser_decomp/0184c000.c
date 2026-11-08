// FUN_0184c000 @ 0184c000 size=184 calls_out=4 calls_in=1
// strings: 

void FUN_0184c000(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 600) == '\0') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x244));
    piVar2 = *(int **)(param_1 + 0x60);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    }
    piVar2 = *(int **)(param_1 + 0x68);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
        return;
      }
      return;
    }
  }
  else if (*(char *)(param_1 + 600) == '\x03') {
    FUN_0184bbd8(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x259) = 0;
    FUN_0184bfa4(param_1 + 0x24c);
    *(undefined1 *)(param_1 + 0x25a) = 0;
    return;
  }
  return;
}

