// FUN_0109c1cc @ 0109c1cc size=224 calls_out=3 calls_in=1
// strings: 

void FUN_0109c1cc(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *param_1;
  iVar7 = param_1[2];
  uVar2 = param_1[1] - iVar8;
  *param_1 = 8;
  param_1[1] = 8;
  if (uVar2 != 0) {
    uVar6 = 0;
    while (uVar6 != uVar2 >> 5) {
      puVar5 = (undefined4 *)(iVar8 + uVar6 * 0x20);
      if (puVar5[4] != 0) {
        thunk_FUN_016d3fb4(puVar5[5]);
      }
      piVar3 = (int *)*puVar5;
      uVar6 = uVar6 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*puVar5,puVar5[1]);
      }
    }
  }
  iVar8 = param_1[4];
  if (iVar8 != 0) {
    iVar4 = *(int *)(iVar7 + 8);
    if (param_1[3] != iVar4) {
      FUN_016dd52c(*(int *)(iVar7 + 4) + iVar4 * 0x20,*(int *)(iVar7 + 4) + param_1[3] * 0x20,
                   iVar8 << 5);
    }
    *(int *)(iVar7 + 8) = iVar4 + iVar8;
  }
  return;
}

