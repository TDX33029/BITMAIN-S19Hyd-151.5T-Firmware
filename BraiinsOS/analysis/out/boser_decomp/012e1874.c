// FUN_012e1874 @ 012e1874 size=108 calls_out=1 calls_in=2
// strings: 

void FUN_012e1874(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  DataMemoryBarrier(0xb);
  if (*param_1 == 0) {
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
    } while (*param_1 == 0);
  }
  return;
}

