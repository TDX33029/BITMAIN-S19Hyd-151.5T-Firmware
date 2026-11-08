// FUN_012e1808 @ 012e1808 size=108 calls_out=1 calls_in=2
// strings: 

void FUN_012e1808(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  DataMemoryBarrier(0xb);
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    iVar2 = 1;
    iVar3 = 0;
    uVar4 = 0;
    do {
      if (uVar4 < 7) {
        if (uVar4 != 0) {
          iVar1 = iVar3;
          do {
            iVar1 = iVar1 + -1;
            HintYield();
          } while (iVar1 != 0);
        }
      }
      else {
        FUN_01bea67c();
      }
      iVar3 = iVar3 + iVar2;
      iVar2 = iVar2 + 2;
      uVar4 = uVar4 + 1;
      DataMemoryBarrier(0xb);
    } while ((*(uint *)(param_1 + 0x18) & 1) == 0);
  }
  return;
}

