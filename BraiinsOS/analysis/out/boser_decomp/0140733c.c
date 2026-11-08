// FUN_0140733c @ 0140733c size=96 calls_out=1 calls_in=0
// strings: 

void FUN_0140733c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x4d8) != 0) {
    return;
  }
  uVar3 = 0;
  do {
    if (uVar3 < 7) {
      uVar2 = 1;
      do {
        uVar1 = uVar2 >> (uVar3 & 0xff);
        uVar2 = uVar2 + 1;
        HintYield();
      } while (uVar1 == 0);
      uVar3 = uVar3 + 1;
    }
    else {
      FUN_01bea67c();
      if (uVar3 < 0xb) {
        uVar3 = uVar3 + 1;
      }
    }
    DataMemoryBarrier(0xb);
  } while (*(int *)(param_1 + 0x4d8) == 0);
  return;
}

