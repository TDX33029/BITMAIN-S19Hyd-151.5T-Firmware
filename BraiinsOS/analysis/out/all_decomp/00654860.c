// FUN_00654860 @ 00654860 size=192 calls_out=3 calls_in=1
// strings: 

void FUN_00654860(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      uVar6 = *(undefined4 *)(param_1 + 0x20);
      puVar7 = *(undefined4 **)(param_1 + 0x24);
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar6);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00654988(param_1 + 0xc);
    }
    if (*(char *)(param_1 + 8) == '\0') {
      return;
    }
    piVar3 = *(int **)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
  }
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}

