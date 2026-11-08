// FUN_0064cac8 @ 0064cac8 size=184 calls_out=3 calls_in=3
// strings: 

void FUN_0064cac8(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(undefined1 **)(param_1 + 0x30) != &DAT_3b9aca00) {
    uVar5 = *(undefined4 *)(param_1 + 0x58);
    puVar6 = *(undefined4 **)(param_1 + 0x5c);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    piVar2 = *(int **)(param_1 + 0x60);
    if (piVar2 != (int *)0x0) {
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
    }
  }
  piVar2 = *(int **)(param_1 + 0x70);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010b53fc(*(undefined4 *)(param_1 + 0x70));
    return;
  }
  return;
}

