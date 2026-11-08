// FUN_0155b69c @ 0155b69c size=260 calls_out=6 calls_in=5
// strings: 

void FUN_0155b69c(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  
  uVar4 = *(uint *)(param_1 + 8);
  uVar2 = 1;
  if ((int)uVar4 < 0) {
    uVar2 = uVar4 ^ 0x80000000;
  }
  if (uVar2 == 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    if (iVar5 != 0) {
      puVar7 = *(undefined4 **)(param_1 + 0x10);
      pcVar6 = (code *)*puVar7;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(iVar5);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_01be4678(iVar5);
      }
    }
  }
  else if (uVar2 == 1) {
    piVar3 = *(int **)(param_1 + 0x14);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01670fb0(*(undefined4 *)(param_1 + 0x14));
      }
    }
    FUN_014fc37c((uint *)(param_1 + 8));
  }
  else {
    FUN_014fc3cc(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    FUN_01af7af8(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),4,0x20);
  }
  if (param_1 != -1) {
    piVar3 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(param_1);
      return;
    }
  }
  return;
}

