// FUN_0141fc44 @ 0141fc44 size=244 calls_out=3 calls_in=1
// strings: 

void FUN_0141fc44(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(param_1 + 0x140);
  uVar6 = *(undefined4 *)(param_1 + 0x13c);
  pcVar3 = (code *)*puVar7;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(uVar6);
  }
  if (puVar7[1] != 0) {
    thunk_FUN_016d3fb4(uVar6);
  }
  piVar2 = *(int **)(param_1 + 0x154);
  if (((uint)piVar2 & 1) == 0) {
    piVar4 = piVar2 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 != 1) goto LAB_0141fcf8;
    DataMemoryBarrier(0xb);
    if (*piVar2 != 0) {
      thunk_FUN_016d3fb4(piVar2[1]);
    }
  }
  else {
    if (*(int *)(param_1 + 0x150) + ((uint)piVar2 >> 5) == 0) goto LAB_0141fcf8;
    piVar2 = (int *)(*(int *)(param_1 + 0x148) - ((uint)piVar2 >> 5));
  }
  thunk_FUN_016d3fb4(piVar2);
LAB_0141fcf8:
  if (*(int *)(param_1 + 0x108) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x10c));
  }
  FUN_014f059c((int *)(param_1 + 0x118));
  if (*(int *)(param_1 + 0x118) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11c));
  }
  FUN_0140af30(param_1);
  return;
}

