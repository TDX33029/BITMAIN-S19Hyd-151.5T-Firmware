// FUN_007913e4 @ 007913e4 size=272 calls_out=10 calls_in=1
// strings: 

void FUN_007913e4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00791600();
  piVar2 = *(int **)(param_1 + 0x304);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(*(undefined4 *)(param_1 + 0x304));
  }
  if ((*(uint *)(param_1 + 0x2f8) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2fc));
  }
  piVar2 = *(int **)(param_1 + 0x308);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(*(undefined4 *)(param_1 + 0x308));
  }
  piVar2 = *(int **)(param_1 + 0x270);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x270));
  }
  FUN_00781a00(param_1 + 0x274);
  piVar2 = *(int **)(param_1 + 0x2cc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00781b88(*(undefined4 *)(param_1 + 0x2cc));
  }
  FUN_00781dcc(param_1);
  FUN_00bb0420(param_1 + 0x30c);
  FUN_0079172c(param_1 + 0x330);
  FUN_00790930(param_1 + 0x2d0);
  return;
}

