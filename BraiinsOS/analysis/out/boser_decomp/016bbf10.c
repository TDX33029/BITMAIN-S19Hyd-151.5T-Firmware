// FUN_016bbf10 @ 016bbf10 size=96 calls_out=4 calls_in=3
// strings: 

void FUN_016bbf10(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_016b7bb4(param_1 + 0x30);
  FUN_016bbc18(param_1 + 0x4c);
  thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x58));
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

