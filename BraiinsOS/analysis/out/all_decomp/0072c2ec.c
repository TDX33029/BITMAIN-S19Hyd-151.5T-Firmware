// FUN_0072c2ec @ 0072c2ec size=156 calls_out=6 calls_in=4
// strings: 

void FUN_0072c2ec(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0072c3dc(param_1 + 0x148);
  piVar2 = *(int **)(param_1 + 0x124);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01089b40(*(undefined4 *)(param_1 + 0x124));
  }
  if ((*(uint *)(param_1 + 0x118) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11c));
  }
  FUN_0071bed0(param_1);
  FUN_00644904(param_1 + 0x20);
  piVar2 = *(int **)(param_1 + 0x1a4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007910a4(*(undefined4 *)(param_1 + 0x1a4));
    return;
  }
  return;
}

