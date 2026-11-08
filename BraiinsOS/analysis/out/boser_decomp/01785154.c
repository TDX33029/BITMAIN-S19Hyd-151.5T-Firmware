// FUN_01785154 @ 01785154 size=104 calls_out=4 calls_in=1
// strings: 

void FUN_01785154(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 7) == 5) {
    return;
  }
  if (uVar1 == 4) {
    FUN_017851cc(param_1 + 0x10);
    return;
  }
  FUN_017851fc();
  if (*(uint *)(param_1 + 8) == 3 && *(int *)(param_1 + 0xc) == 0) {
    return;
  }
  FUN_0185e49c();
  FUN_01783d7c(param_1 + 0x90);
  return;
}

