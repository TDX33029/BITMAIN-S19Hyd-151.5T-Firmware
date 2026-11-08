// FUN_01439a34 @ 01439a34 size=220 calls_out=4 calls_in=1
// strings: 

void FUN_01439a34(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 600) == '\0') {
    puVar6 = *(undefined4 **)(param_1 + 0x244);
    uVar5 = *(undefined4 *)(param_1 + 0x240);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    piVar2 = *(int **)(param_1 + 0x60);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    }
    piVar2 = *(int **)(param_1 + 0x68);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 600) == '\x03') {
    FUN_0143976c(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x259) = 0;
    FUN_014218e4(param_1 + 0x24c);
    *(undefined1 *)(param_1 + 0x25a) = 0;
    return;
  }
  return;
}

