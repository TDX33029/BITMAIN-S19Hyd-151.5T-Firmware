// FUN_01403dd4 @ 01403dd4 size=336 calls_out=1 calls_in=1
// strings: 

void FUN_01403dd4(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = ((uint)param_2 % 0x43) * 0x20;
  piVar6 = (int *)(&DAT_01d51184 + iVar1);
  do {
    iVar3 = *piVar6;
    bVar10 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar10);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
  if (iVar3 == 1) {
    uVar7 = 0;
    do {
      if (uVar7 < 7) {
        uVar4 = 1;
        do {
          uVar2 = uVar4 >> (uVar7 & 0xff);
          uVar4 = uVar4 + 1;
          HintYield();
        } while (uVar2 == 0);
        uVar7 = uVar7 + 1;
      }
      else {
        FUN_01bea67c();
        if (uVar7 < 0xb) {
          uVar7 = uVar7 + 1;
        }
      }
      do {
        iVar3 = *piVar6;
        bVar10 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar10);
      *piVar6 = 1;
      DataMemoryBarrier(0xb);
    } while (iVar3 == 1);
  }
  DataMemoryBarrier(0xb);
  iVar8 = *param_2;
  iVar9 = param_2[1];
  iVar5 = param_2[2];
  bVar10 = iVar8 == param_3 && iVar9 == param_4;
  if (iVar8 == param_3 && iVar9 == param_4) {
    bVar10 = iVar5 == param_5;
  }
  if (bVar10) {
    *param_1 = 0;
    param_1[1] = 0;
    *param_2 = param_7;
    param_2[1] = param_8;
    param_1[4] = param_5;
    param_2[2] = param_9;
    param_1[2] = param_3;
    param_1[3] = param_4;
    if (iVar3 + 2 == 0) {
      DataMemoryBarrier(0xb);
      *(int *)(&DAT_01d51180 + iVar1) = *(int *)(&DAT_01d51180 + iVar1) + 1;
    }
    DataMemoryBarrier(0xb);
    *piVar6 = iVar3 + 2;
  }
  else {
    DataMemoryBarrier(0xb);
    *piVar6 = iVar3;
    param_1[2] = iVar8;
    param_1[3] = iVar9;
    param_1[4] = iVar5;
    *param_1 = 1;
    param_1[1] = 0;
  }
  return;
}

