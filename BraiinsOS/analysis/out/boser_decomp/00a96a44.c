// FUN_00a96a44 @ 00a96a44 size=112 calls_out=3 calls_in=8
// strings: 

void FUN_00a96a44(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x34) != -0x80000000) {
    FUN_009d46b0();
  }
  FUN_0132b958(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),8,0x30);
  FUN_009d46b0(param_1 + 0x20);
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

