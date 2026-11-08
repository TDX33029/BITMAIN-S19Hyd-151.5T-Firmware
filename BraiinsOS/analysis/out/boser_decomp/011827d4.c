// FUN_011827d4 @ 011827d4 size=408 calls_out=12 calls_in=5
// strings: 

void FUN_011827d4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_006d0c90(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  FUN_0132b958(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),4,8);
  piVar2 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_006c8cac(*(undefined4 *)(param_1 + 0x14));
  }
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_006c8c18(*(undefined4 *)(param_1 + 0x18));
  }
  piVar2 = *(int **)(param_1 + 0x1c);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_006c8c18(*(undefined4 *)(param_1 + 0x1c));
    }
  }
  FUN_007028c4(param_1 + 0xe0);
  if (*(int *)(param_1 + 0xcc) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0));
  }
  FUN_00b96490(param_1 + 0x20);
  FUN_006b3f70(param_1 + 0x58);
  FUN_006775f0(param_1 + 0xc0);
  piVar2 = *(int **)(param_1 + 0xd8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_006c8c18(*(undefined4 *)(param_1 + 0xd8));
  }
  piVar2 = *(int **)(param_1 + 0xdc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_006c8c18(*(undefined4 *)(param_1 + 0xdc));
  }
  FUN_01139cd4(param_1 + 0x80);
  FUN_0067211c(param_1 + 0xf4);
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

