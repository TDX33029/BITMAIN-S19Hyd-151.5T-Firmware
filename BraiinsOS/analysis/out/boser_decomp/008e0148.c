// FUN_008e0148 @ 008e0148 size=180 calls_out=4 calls_in=1
// strings: 

void FUN_008e0148(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x264) == '\0') {
    FUN_008df9e8(param_1);
    piVar2 = *(int **)(param_1 + 0x70);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    }
    piVar2 = *(int **)(param_1 + 0x78);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
        return;
      }
      return;
    }
  }
  else if (*(char *)(param_1 + 0x264) == '\x03') {
    FUN_008dfd54(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0x265) = 0;
    FUN_008e00ec(param_1 + 600);
    *(undefined1 *)(param_1 + 0x266) = 0;
    return;
  }
  return;
}

