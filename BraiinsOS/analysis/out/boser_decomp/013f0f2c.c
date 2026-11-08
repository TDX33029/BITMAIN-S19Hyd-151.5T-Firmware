// FUN_013f0f2c @ 013f0f2c size=56 calls_out=1 calls_in=12
// strings: 

void FUN_013f0f2c(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x40c) + -1;
    *(int *)(param_1 + 0x40c) = iVar1;
    if (iVar1 != 0) {
      return;
    }
    DataMemoryBarrier(0xb);
    *(undefined4 *)(param_1 + 0x420) = 0;
    if (*(int *)(param_1 + 0x410) == 0) {
      FUN_0131a408();
      return;
    }
  }
  return;
}

