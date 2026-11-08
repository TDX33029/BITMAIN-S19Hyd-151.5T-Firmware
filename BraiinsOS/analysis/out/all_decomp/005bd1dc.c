// FUN_005bd1dc @ 005bd1dc size=344 calls_out=8 calls_in=5
// strings: 

void FUN_005bd1dc(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  if (*param_1 == 2) {
    return;
  }
  FUN_005c178c(param_1);
  piVar5 = (int *)param_1[0x3e];
  FUN_00ec8a1c(piVar5);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e44f6c(param_1[0x3e]);
  }
  piVar5 = (int *)param_1[0x3f];
  FUN_00ebf24c(piVar5);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45090(param_1[0x3f]);
  }
  iVar2 = param_1[0x39];
  if (iVar2 != 0) {
    iVar7 = param_1[0x3b];
    if (iVar7 != 0) {
      puVar6 = (uint *)param_1[0x38];
      puVar4 = puVar6 + 1;
      uVar8 = ~*puVar6 & 0x80808080;
      do {
        puVar3 = puVar4;
        if (uVar8 == 0) {
          do {
            puVar4 = puVar3 + 1;
            uVar8 = *puVar3;
            puVar6 = puVar6 + -0x60;
            puVar3 = puVar4;
          } while ((uVar8 & 0x80808080) == 0x80808080);
          uVar8 = uVar8 & 0x80808080 ^ 0x80808080;
        }
        FUN_00ee1144(puVar6 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                             (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) *
                              -0x18 + -0x18);
        iVar7 = iVar7 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (iVar7 != 0);
    }
    if (iVar2 * 0x61 != -0x65) {
      thunk_FUN_016d3fb4(param_1[0x38] + iVar2 * -0x60 + -0x60);
    }
  }
  FUN_005c653c(param_1 + 0x18);
  return;
}

