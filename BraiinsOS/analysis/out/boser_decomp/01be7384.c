// FUN_01be7384 @ 01be7384 size=78 calls_out=3 calls_in=1
// strings: 

void FUN_01be7384(int param_1)

{
  short sVar1;
  
  sVar1 = 1;
  while (*(int *)(param_1 + 0x1c) != 0) {
    sVar1 = sVar1 + 1;
    param_1 = *(int *)(param_1 + 0x1c);
  }
  param_1 = param_1 + *(short *)(param_1 + 0x40) * -0x44;
  FUN_01bedf2c();
  sVar1 = *(short *)(param_1 + 0x42) - sVar1;
  *(short *)(param_1 + 0x42) = sVar1;
  if (sVar1 == 0) {
    thunk_FUN_01be4678(param_1);
    return;
  }
  FUN_01bee02c(param_1 + 0x3c);
  return;
}

