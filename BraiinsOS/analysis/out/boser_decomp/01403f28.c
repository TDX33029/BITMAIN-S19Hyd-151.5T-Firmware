// FUN_01403f28 @ 01403f28 size=260 calls_out=1 calls_in=1
// strings: 

void FUN_01403f28(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar3 = ((uint)param_2 % 0x43) * 0x20;
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if (*(int *)(&DAT_01d51184 + iVar3) != 1) {
    uVar8 = param_2[2];
    uVar6 = param_2[1];
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    if (*(int *)(&DAT_01d51180 + iVar3) == *(int *)(&DAT_01d51180 + ((uint)param_2 % 0x43) * 0x20)
        && *(int *)(&DAT_01d51184 + iVar3) == *(int *)(&DAT_01d51184 + iVar3)) {
      *param_1 = *param_2;
      param_1[1] = uVar6;
      param_1[2] = uVar8;
      return;
    }
  }
  piVar5 = (int *)(&DAT_01d51184 + iVar3);
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 1;
  DataMemoryBarrier(0xb);
  if (iVar3 == 1) {
    uVar7 = 0;
    do {
      if (uVar7 < 7) {
        uVar4 = 1;
        do {
          uVar1 = uVar4 >> (uVar7 & 0xff);
          uVar4 = uVar4 + 1;
          HintYield();
        } while (uVar1 == 0);
        uVar7 = uVar7 + 1;
      }
      else {
        FUN_01bea67c();
        if (uVar7 < 0xb) {
          uVar7 = uVar7 + 1;
        }
      }
      do {
        iVar3 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = 1;
      DataMemoryBarrier(0xb);
    } while (iVar3 == 1);
  }
  DataMemoryBarrier(0xb);
  uVar6 = param_2[1];
  uVar8 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  param_1[2] = uVar8;
  DataMemoryBarrier(0xb);
  *piVar5 = iVar3;
  return;
}

