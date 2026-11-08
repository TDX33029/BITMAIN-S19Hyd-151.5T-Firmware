// FUN_017cc880 @ 017cc880 size=272 calls_out=5 calls_in=2
// strings: 

void FUN_017cc880(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2ce08);
  }
  piVar3 = param_2 + 2;
  piVar4 = param_2 + 4;
  if (*piVar4 != 5 || param_2[5] != 0) {
    FUN_017cca04(piVar3);
  }
  FUN_01bed4e2(piVar3,param_3,0xa0);
  iVar2 = FUN_01712764(piVar3);
  if (iVar2 == 0) {
    iVar6 = *piVar3;
    iVar7 = param_2[3];
    iVar2 = *piVar4;
    iVar5 = param_2[5];
    *piVar4 = 5;
    param_2[5] = 0;
    if (iVar2 == 5 && iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ce18);
    }
    FUN_01bed4e2(param_1 + 4,param_2 + 6,0x90);
    *param_1 = iVar6;
    param_1[1] = iVar7;
    param_1[2] = iVar2;
    param_1[3] = iVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
  }
  else {
    param_1[2] = 5;
    param_1[3] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_017850a0(param_2);
  }
  return;
}

