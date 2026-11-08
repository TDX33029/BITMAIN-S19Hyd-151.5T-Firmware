// FUN_019b3e50 @ 019b3e50 size=176 calls_out=3 calls_in=6
// strings: 

void FUN_019b3e50(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar5 = *param_1;
  uVar6 = *(undefined4 *)(iVar5 + 8);
  puVar7 = *(undefined4 **)(iVar5 + 0xc);
  pcVar2 = (code *)*puVar7;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar6);
  }
  if (puVar7[1] != 0) {
    thunk_FUN_01be4678(uVar6);
  }
  piVar3 = *(int **)(iVar5 + 0x10);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019b3e50();
    }
  }
  if (iVar5 != -1) {
    piVar3 = (int *)(iVar5 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(iVar5);
      return;
    }
  }
  return;
}

