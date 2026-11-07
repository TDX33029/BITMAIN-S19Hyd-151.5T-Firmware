// FUN_01aa2d9c @ 01aa2d9c size=420 calls_out=1 calls_in=10
// strings: 

int FUN_01aa2d9c(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (param_1 == param_2) {
    iVar10 = 0;
  }
  else {
    puVar8 = (uint *)(param_1 + 0x5c);
    iVar10 = 0;
    uVar7 = (uint)(param_2 - param_1) / 0x60;
    do {
      uVar9 = puVar8[-9];
      iVar2 = FUN_01aa2834(puVar8[-10],puVar8[-10] + uVar9 * 0x10);
      iVar11 = 0;
      if (puVar8[-8] != 0x80000000) {
        iVar11 = puVar8[-6] + ((LZCOUNT(puVar8[-6] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar12 = 0;
      iVar4 = 0;
      if ((puVar8[-0x17] & 1) != 0) {
        uVar5 = LZCOUNT(puVar8[-0x15] | 1) | 0x20;
        if (puVar8[-0x14] != 0) {
          uVar5 = LZCOUNT(puVar8[-0x14]);
        }
        iVar4 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      if ((puVar8[-0x13] & 1) != 0) {
        uVar5 = LZCOUNT(puVar8[-0x11] | 1) | 0x20;
        if (puVar8[-0x10] != 0) {
          uVar5 = LZCOUNT(puVar8[-0x10]);
        }
        iVar12 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      iVar3 = 0;
      puVar1 = puVar8 + -0xf;
      iVar6 = 0;
      if (puVar8[-5] != 0x80000000) {
        iVar6 = puVar8[-3] + ((LZCOUNT(puVar8[-3] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      if (puVar8[-2] != 0x80000000) {
        iVar3 = *puVar8 + ((LZCOUNT(*puVar8 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      puVar8 = puVar8 + 0x18;
      iVar12 = iVar2 + uVar9 + iVar11 + iVar4 + iVar12;
      if ((*puVar1 & 1) != 0) {
        iVar12 = iVar12 + 9;
      }
      uVar7 = uVar7 - 1;
      uVar9 = iVar12 + iVar6 + iVar3;
      iVar10 = uVar9 + iVar10 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (uVar7 != 0);
  }
  return iVar10;
}

