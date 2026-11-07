// FUN_01aaa900 @ 01aaa900 size=336 calls_out=1 calls_in=1
// strings: 

uint FUN_01aaa900(uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  if (DAT_01d51af4 == 0) {
    uVar5 = 1;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x1d51af4);
    } while (!bVar1);
    DAT_01d51af4 = 1;
  }
  else {
    uVar5 = 0;
    ClearExclusiveLocal();
  }
  DataMemoryBarrier(0xb);
  uVar3 = *param_1;
  if (uVar5 == 0) {
    uVar4 = 1;
  }
  else {
    piVar7 = (int *)param_1[1];
    uVar6 = param_1[2];
    if (uVar3 != 0) {
      piVar7 = (int *)((int)piVar7 + (*(int *)(uVar6 + 8) - 1U & 0xfffffff8) + 8);
    }
    if (DAT_01d50f7c != 0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *DAT_01d50f80;
        bVar1 = (bool)hasExclusiveAccess(DAT_01d50f80);
      } while (!bVar1);
      *DAT_01d50f80 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(DAT_01d50f80,DAT_01d50f84);
      }
    }
    uVar4 = 0;
    DAT_01d50f7c = 0;
    DataMemoryBarrier(0xb);
    DAT_01d51af4 = 2;
    DataMemoryBarrier(0xb);
    DAT_01d51ae9 = 1;
    uVar3 = (uVar3 ^ 1) & *param_1;
    DAT_01d50f84 = uVar6;
    DAT_01d50f80 = piVar7;
  }
  if (uVar3 != 0) {
    piVar7 = (int *)param_1[1];
    uVar4 = uVar5 ^ 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[1],param_1[2]);
    }
  }
  return uVar4;
}

