// FUN_019db52c @ 019db52c size=92 calls_out=3 calls_in=17
// strings: 

void FUN_019db52c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_019e07fc(param_1 + 0x20,0x3f);
  FUN_019db5e0(param_1 + 0x2c);
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

