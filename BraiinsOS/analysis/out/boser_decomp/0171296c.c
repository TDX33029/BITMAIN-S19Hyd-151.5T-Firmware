// FUN_0171296c @ 0171296c size=248 calls_out=5 calls_in=2
// strings: 

void FUN_0171296c(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2ce08);
  }
  piVar3 = param_2 + 2;
  if (*piVar3 != 5 || param_2[3] != 0) {
    FUN_01712ad8(piVar3);
  }
  FUN_01bed4e2(piVar3,param_3,0xa0);
  iVar2 = FUN_01712764(piVar3);
  if (iVar2 == 0) {
    iVar2 = *piVar3;
    iVar4 = param_2[3];
    *piVar3 = 5;
    param_2[3] = 0;
    if (iVar2 == 5 && iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ce18);
    }
    FUN_01bed4e2(param_1 + 2,param_2 + 4,0x98);
    *param_1 = iVar2;
    param_1[1] = iVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
  }
  else {
    *param_1 = 5;
    param_1[1] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_017053e0(param_2);
  }
  return;
}

