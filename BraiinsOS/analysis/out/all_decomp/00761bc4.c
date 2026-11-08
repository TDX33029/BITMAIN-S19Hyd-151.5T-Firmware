// FUN_00761bc4 @ 00761bc4 size=188 calls_out=3 calls_in=0
// strings: 

void FUN_00761bc4(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    piVar2 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0108a284(*(undefined4 *)(param_1 + 0x90));
    }
  }
  else {
    if (*(char *)(param_1 + 0x94) != '\x03') {
      return;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x88);
    puVar6 = *(undefined4 **)(param_1 + 0x8c);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    piVar2 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0108a284(*(undefined4 *)(param_1 + 0x90));
    }
  }
  FUN_0064a9ec(param_1 + 0x10);
  return;
}

