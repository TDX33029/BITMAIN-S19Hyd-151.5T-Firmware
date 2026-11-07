// FUN_00ad5678 @ 00ad5678 size=240 calls_out=5 calls_in=3
// strings: 

void FUN_00ad5678(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    if (*(char *)(param_1 + 0x5c) == '\x03') {
      FUN_00887914(param_1 + 0x40);
      return;
    }
    return;
  }
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\0') {
    puVar3 = (undefined4 *)(param_1 + 0x18);
    piVar5 = (int *)*puVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar6 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      uVar7 = *(undefined4 *)(param_1 + 0x38);
      puVar3 = *(undefined4 **)(param_1 + 0x3c);
      pcVar4 = (code *)*puVar3;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar7);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
    }
    else if (cVar1 != '\x04') goto LAB_00ad575c;
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    FUN_00a07b4c(uVar7);
    thunk_FUN_016d3fb4(uVar7);
    puVar3 = (undefined4 *)(param_1 + 0x1c);
    piVar5 = (int *)*puVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar6 + -1;
  }
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d030dc(*puVar3);
  }
LAB_00ad575c:
  FUN_00ac9c30(param_1 + 0x50);
  return;
}

