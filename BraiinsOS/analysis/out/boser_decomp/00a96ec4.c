// FUN_00a96ec4 @ 00a96ec4 size=108 calls_out=2 calls_in=3
// strings: 

void FUN_00a96ec4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if ((4 < *(uint *)(param_1 + 0x9c)) || ((1 << (*(uint *)(param_1 + 0x9c) & 0xff) & 0x16U) == 0)) {
    FUN_00963164(param_1 + 0xa0);
  }
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

