// FUN_017d9ef8 @ 017d9ef8 size=188 calls_out=4 calls_in=0
// strings: 

void FUN_017d9ef8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x238) == '\0') {
    piVar2 = *(int **)(param_1 + 0x50);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
      }
    }
    FUN_01139b38(*(undefined4 *)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x224));
    return;
  }
  if (*(char *)(param_1 + 0x238) == '\x03') {
    FUN_017d9d5c(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0x239) = 0;
    FUN_0178ef10(param_1 + 0x22c);
    piVar2 = *(int **)(param_1 + 0x50);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
        return;
      }
      return;
    }
  }
  return;
}

