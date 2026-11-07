// FUN_016d70b0 @ 016d70b0 size=78 calls_out=3 calls_in=1
// strings: 

void FUN_016d70b0(int param_1)

{
  short sVar1;
  
  sVar1 = 1;
  while (*(int *)(param_1 + 0x1c) != 0) {
    sVar1 = sVar1 + 1;
    param_1 = *(int *)(param_1 + 0x1c);
  }
  param_1 = param_1 + *(short *)(param_1 + 0x40) * -0x44;
  FUN_016ddcc0();
  sVar1 = *(short *)(param_1 + 0x42) - sVar1;
  *(short *)(param_1 + 0x42) = sVar1;
  if (sVar1 == 0) {
    thunk_FUN_016d3fb4(param_1);
    return;
  }
  FUN_016dddc0(param_1 + 0x3c);
  return;
}

