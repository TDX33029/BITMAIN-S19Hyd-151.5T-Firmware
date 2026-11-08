// FUN_0178a644 @ 0178a644 size=244 calls_out=3 calls_in=2
// strings: 

void FUN_0178a644(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0134aee0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),4,8);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),4,4);
  FUN_0065f3f4(param_1 + 0x20);
  piVar2 = *(int **)(param_1 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  }
  piVar2 = *(int **)(param_1 + 0x38);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  }
  piVar2 = *(int **)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  }
  piVar2 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    return;
  }
  return;
}

