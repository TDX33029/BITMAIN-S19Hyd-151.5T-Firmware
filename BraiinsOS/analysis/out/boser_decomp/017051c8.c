// FUN_017051c8 @ 017051c8 size=96 calls_out=3 calls_in=5
// strings: 

void FUN_017051c8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0188db68(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_01704b6c();
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

