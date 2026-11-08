// FUN_0188d5b0 @ 0188d5b0 size=184 calls_out=4 calls_in=1
// strings: 

int FUN_0188d5b0(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2ce08);
  }
  if (param_1[7] != 0) {
    FUN_01a69838();
  }
  param_1[7] = param_2;
  iVar2 = FUN_014295d0(param_1 + 2);
  if (iVar2 == 0) {
    iVar2 = param_1[7];
    param_1[7] = 0;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ce18);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar3 + -1;
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar3 + -1;
    iVar2 = 0;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0185203c(param_1);
  }
  return iVar2;
}

