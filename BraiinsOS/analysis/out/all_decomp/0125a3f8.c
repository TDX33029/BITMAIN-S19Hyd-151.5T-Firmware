// FUN_0125a3f8 @ 0125a3f8 size=456 calls_out=4 calls_in=0
// strings: 

void FUN_0125a3f8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  
  FUN_011a359c(param_1 + 8);
  iVar12 = *(int *)(param_1 + 0x3c);
  if (iVar12 != 0) {
    iVar13 = *(int *)(param_1 + 0x44);
    if (iVar13 != 0) {
      puVar11 = *(uint **)(param_1 + 0x38);
      puVar9 = puVar11 + 1;
      uVar10 = ~*puVar11 & 0x80808080;
      do {
        puVar8 = puVar9;
        if (uVar10 == 0) {
          do {
            puVar9 = puVar8 + 1;
            uVar10 = *puVar8;
            puVar11 = puVar11 + -0xc;
            puVar8 = puVar9;
          } while ((uVar10 & 0x80808080) == 0x80808080);
          uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
        }
        uVar5 = uVar10 >> 8;
        uVar1 = uVar10 >> 0x10;
        uVar2 = uVar10 >> 0x18;
        uVar3 = uVar10 << 0x18;
        uVar10 = uVar10 - 1 & uVar10;
        iVar13 = iVar13 + -1;
        uVar5 = (uint)LZCOUNT(uVar3 | (uVar5 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2) >> 3;
        piVar6 = (int *)puVar11[uVar5 * -3 + -3];
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar4 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar4);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(puVar11[uVar5 * -3 + -3]);
        }
      } while (iVar13 != 0);
    }
    if (iVar12 * 0xd != -0x11) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x38) + iVar12 * -0xc + -0xc);
    }
  }
  iVar12 = *(int *)(param_1 + 0x6c);
  if (iVar12 != 0) {
    iVar13 = *(int *)(param_1 + 0x74);
    if (iVar13 != 0) {
      puVar11 = *(uint **)(param_1 + 0x68);
      puVar9 = puVar11 + 1;
      uVar10 = ~*puVar11 & 0x80808080;
      do {
        puVar8 = puVar9;
        if (uVar10 == 0) {
          do {
            puVar9 = puVar8 + 1;
            uVar10 = *puVar8;
            puVar11 = puVar11 + -0x20;
            puVar8 = puVar9;
          } while ((uVar10 & 0x80808080) == 0x80808080);
          uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
        }
        uVar5 = uVar10 >> 8;
        uVar1 = uVar10 >> 0x10;
        uVar2 = uVar10 >> 0x18;
        uVar3 = uVar10 << 0x18;
        uVar10 = uVar10 - 1 & uVar10;
        uVar5 = LZCOUNT(uVar3 | (uVar5 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2) & 0x38;
        iVar13 = iVar13 + -1;
        piVar6 = (int *)puVar11[-8 - uVar5];
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar4 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar4);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(puVar11[-8 - uVar5]);
        }
      } while (iVar13 != 0);
    }
    if (iVar12 * 0x21 != -0x25) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x68) + iVar12 * -0x20 + -0x20);
    }
  }
  FUN_011a4ae4(param_1 + 0xa0);
  return;
}

