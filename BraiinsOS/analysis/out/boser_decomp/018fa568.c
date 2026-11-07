// FUN_018fa568 @ 018fa568 size=88 calls_out=2 calls_in=0
// strings: 

void FUN_018fa568(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01b46fd8(*(undefined4 *)(param_1 + 8));
  FUN_01b46fd8(*(undefined4 *)(param_1 + 0x2c));
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

