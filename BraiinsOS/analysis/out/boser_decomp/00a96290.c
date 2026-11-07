// FUN_00a96290 @ 00a96290 size=104 calls_out=4 calls_in=3
// strings: 

void FUN_00a96290(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_009d51cc(param_1 + 0x10);
  FUN_0132b958(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),4,4);
  FUN_00a96360(param_1 + 0x50);
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

