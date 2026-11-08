// FUN_00e44d70 @ 00e44d70 size=320 calls_out=8 calls_in=2
// strings: 

void FUN_00e44d70(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  FUN_005c178c();
  piVar5 = *(int **)(param_1 + 0xf8);
  FUN_00ec8a1c(piVar5);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e44f6c(*(undefined4 *)(param_1 + 0xf8));
  }
  piVar5 = *(int **)(param_1 + 0xfc);
  FUN_00ebf24c(piVar5);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45090(*(undefined4 *)(param_1 + 0xfc));
  }
  iVar2 = *(int *)(param_1 + 0xe4);
  if (iVar2 != 0) {
    iVar7 = *(int *)(param_1 + 0xec);
    if (iVar7 != 0) {
      puVar6 = *(uint **)(param_1 + 0xe0);
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
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0xe0) + iVar2 * -0x60 + -0x60);
    }
  }
  FUN_005c653c(param_1 + 0x60);
  return;
}

