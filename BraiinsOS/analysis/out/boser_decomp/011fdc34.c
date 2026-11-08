// FUN_011fdc34 @ 011fdc34 size=136 calls_out=2 calls_in=2
// strings: 

void FUN_011fdc34(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_1[1];
  uVar2 = param_1[3] - iVar7;
  if (uVar2 != 0) {
    iVar5 = 0;
    do {
      iVar6 = iVar5 + 1;
      puVar3 = (undefined4 *)(iVar7 + iVar5 * 0x18);
      piVar4 = (int *)*puVar3;
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
      iVar5 = iVar6;
    } while (iVar6 != (uVar2 >> 3) * -0x55555555);
  }
  FUN_0134aee0(param_1[2],*param_1,4,0x18);
  return;
}

