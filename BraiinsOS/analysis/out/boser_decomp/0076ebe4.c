// FUN_0076ebe4 @ 0076ebe4 size=160 calls_out=9 calls_in=0
// strings: 

void FUN_0076ebe4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  FUN_019deb7c(param_1 + 0x38);
  if (*(int *)(param_1 + 0x44) != -1) {
    FUN_01bf01d6();
  }
  FUN_0179995c(param_1 + 0x38);
  FUN_00756454(param_1 + 0x48);
  FUN_00756518(param_1 + 0x90);
  if (*(int *)(param_1 + 0x80) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  }
  FUN_00756554(param_1 + 0xc4);
  FUN_007631bc(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    }
  }
  piVar4 = (int *)(param_1 + 0x1bc);
  FUN_0076e9d8(piVar4);
  piVar2 = (int *)*piVar4;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013cf318(*piVar4);
    }
  }
  if (*(int *)(param_1 + 0xf8) == -0x80000000) {
    return;
  }
  FUN_0076e0e8((int *)(param_1 + 0xf8));
  return;
}

