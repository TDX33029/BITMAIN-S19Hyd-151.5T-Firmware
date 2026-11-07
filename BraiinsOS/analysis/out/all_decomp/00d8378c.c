// FUN_00d8378c @ 00d8378c size=184 calls_out=2 calls_in=6
// strings: 

void FUN_00d8378c(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0x29) == '\0') {
    piVar2 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      return;
    }
  }
  else if (*(char *)(param_1 + 0x29) == '\x03') {
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    puVar6 = *(undefined4 **)(param_1 + 0x14);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    uVar5 = *(undefined4 *)(param_1 + 8);
    puVar6 = *(undefined4 **)(param_1 + 0xc);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    return;
  }
  return;
}

