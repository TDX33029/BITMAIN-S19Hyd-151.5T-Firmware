// FUN_00a956ec @ 00a956ec size=160 calls_out=6 calls_in=7
// strings: 

void FUN_00a956ec(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x318) != -0x80000000) {
    FUN_00b1e0e0(*(undefined4 *)(param_1 + 0x31c),*(undefined4 *)(param_1 + 800));
    FUN_0132b958(*(undefined4 *)(param_1 + 0x318),*(undefined4 *)(param_1 + 0x31c),4,0x18);
  }
  if (*(int *)(param_1 + 0x38) != 3 || *(int *)(param_1 + 0x3c) != 0) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
  }
  FUN_00f7ba04(param_1 + 0x188);
  FUN_00a9581c(param_1 + 0x324);
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

