// FUN_0171520c @ 0171520c size=120 calls_out=2 calls_in=1
// strings: 

void FUN_0171520c(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = param_1[1];
  uVar2 = param_1[3] - iVar7;
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      puVar3 = (undefined4 *)(iVar7 + uVar6 * 8);
      piVar4 = (int *)*puVar3;
      uVar6 = uVar6 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*puVar3,puVar3[1]);
      }
    } while (uVar6 != uVar2 >> 3);
  }
  FUN_01af7af8(param_1[2],*param_1,4,8);
  return;
}

