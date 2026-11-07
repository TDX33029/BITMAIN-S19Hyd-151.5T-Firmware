// FUN_00e880b4 @ 00e880b4 size=284 calls_out=5 calls_in=0
// strings: 

void FUN_00e880b4(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  cVar1 = *(char *)(param_1 + 0x4d);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 0x40);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0x40));
    }
  }
  else {
    if (cVar1 == '\x03') {
      if ((*(char *)(param_1 + 0x5c) == '\x03') && (*(int *)(param_1 + 0x54) != 0)) {
        FUN_00e44660(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x54);
      puVar7 = *(undefined4 **)(param_1 + 0x58);
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar6);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
      piVar3 = *(int **)(param_1 + 0x50);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078d444(*(undefined4 *)(param_1 + 0x50));
      }
    }
    piVar3 = *(int **)(param_1 + 0x40);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0x40));
    }
  }
  FUN_00d9e928(param_1 + 0x10);
  return;
}

