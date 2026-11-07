// FUN_01aa289c @ 01aa289c size=288 calls_out=1 calls_in=2
// strings: 

int FUN_01aa289c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 == param_2) {
    iVar4 = 0;
  }
  else {
    puVar6 = (uint *)(param_1 + 0xc);
    iVar4 = 0;
    uVar5 = (uint)(param_2 - param_1) / 0x1c;
    do {
      iVar8 = 0;
      if (puVar6[-3] == 1) {
        uVar1 = puVar6[-2];
        uVar3 = LZCOUNT(uVar1 | 1) | 0x20;
        if ((int)uVar1 < 0) {
          uVar3 = LZCOUNT((int)uVar1 >> 0x1f);
        }
        iVar8 = ((uVar3 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      iVar2 = 0;
      iVar7 = 0;
      if (puVar6[-1] == 1) {
        uVar1 = *puVar6;
        uVar3 = LZCOUNT(uVar1 | 1) | 0x20;
        if ((int)uVar1 < 0) {
          uVar3 = LZCOUNT((int)uVar1 >> 0x1f);
        }
        iVar7 = ((uVar3 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      if (puVar6[1] != 0x80000000) {
        uVar1 = puVar6[3];
        iVar2 = FUN_01aa2d9c(puVar6[2],puVar6[2] + uVar1 * 0x60);
        uVar1 = iVar2 + uVar1 * 2;
        iVar2 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      puVar6 = puVar6 + 7;
      uVar1 = iVar7 + iVar8 + iVar2;
      uVar5 = uVar5 - 1;
      iVar4 = uVar1 + iVar4 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (uVar5 != 0);
  }
  return iVar4;
}

