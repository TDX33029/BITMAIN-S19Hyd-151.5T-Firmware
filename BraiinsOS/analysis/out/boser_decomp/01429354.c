// FUN_01429354 @ 01429354 size=236 calls_out=4 calls_in=2
// strings: 

void FUN_01429354(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2ce08);
  }
  if (param_2[7] != 0) {
    FUN_014294b4(param_2 + 8);
  }
  param_2[7] = 1;
  iVar3 = param_3[1];
  iVar4 = param_3[2];
  iVar5 = param_3[3];
  iVar6 = param_3[4];
  iVar7 = param_3[5];
  param_2[8] = *param_3;
  param_2[9] = iVar3;
  param_2[10] = iVar4;
  param_2[0xb] = iVar5;
  param_2[0xc] = iVar6;
  param_2[0xd] = iVar7;
  iVar3 = FUN_014295d0(param_2 + 2);
  if (iVar3 == 0) {
    uVar2 = param_2[7];
    param_2[7] = 0;
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ce18);
    }
    iVar3 = param_2[9];
    iVar4 = param_2[10];
    iVar5 = param_2[0xb];
    iVar6 = param_2[0xc];
    iVar7 = param_2[0xd];
    param_1[1] = param_2[8];
    param_1[2] = iVar3;
    param_1[3] = iVar4;
    param_1[4] = iVar5;
    param_1[5] = iVar6;
    param_1[6] = iVar7;
    *param_1 = 1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar3 + -1;
  }
  else {
    *param_1 = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01420f44(param_2);
  }
  return;
}

