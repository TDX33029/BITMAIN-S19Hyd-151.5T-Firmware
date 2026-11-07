// FUN_014afd70 @ 014afd70 size=104 calls_out=3 calls_in=9
// strings: 

void FUN_014afd70(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_014ae6e4(param_1 + 8);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
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

