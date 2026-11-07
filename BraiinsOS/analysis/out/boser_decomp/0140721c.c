// FUN_0140721c @ 0140721c size=96 calls_out=1 calls_in=0
// strings: 

void FUN_0140721c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  DataMemoryBarrier(0xb);
  if ((*(uint *)(param_1 + 0x20) & 1) != 0) {
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
  } while ((*(uint *)(param_1 + 0x20) & 1) == 0);
  return;
}

