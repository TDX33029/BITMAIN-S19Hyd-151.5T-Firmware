// FUN_014252ac @ 014252ac size=136 calls_out=2 calls_in=1
// strings: 

void FUN_014252ac(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(undefined1 **)(param_1 + 8) != &DAT_3b9aca00) {
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    puVar6 = *(undefined4 **)(param_1 + 0x34);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_01be4678(uVar5);
    }
    piVar2 = *(int **)(param_1 + 0x38);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
        return;
      }
    }
  }
  return;
}

