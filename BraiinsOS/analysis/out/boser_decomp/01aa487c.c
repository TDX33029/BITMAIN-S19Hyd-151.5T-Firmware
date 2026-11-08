// FUN_01aa487c @ 01aa487c size=244 calls_out=0 calls_in=2
// strings: 

int FUN_01aa487c(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  puVar5 = (uint *)*param_2;
  iVar10 = 0;
  puVar4 = puVar5 + 1;
  uVar6 = ~*puVar5 & 0x80808080;
  iVar9 = param_2[3];
  do {
    if (uVar6 == 0) {
      puVar3 = puVar4;
      if (iVar9 == 0) {
        return iVar10 + param_2[3];
      }
      do {
        puVar4 = puVar3 + 1;
        uVar6 = *puVar3;
        puVar5 = puVar5 + -0x18;
        puVar3 = puVar4;
      } while ((uVar6 & 0x80808080) == 0x80808080);
      uVar6 = uVar6 & 0x80808080 ^ 0x80808080;
    }
    iVar7 = 0;
    iVar8 = 0;
    uVar2 = (uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8
                          | uVar6 >> 0x18) >> 3;
    uVar1 = puVar5[uVar2 * -6 + -4];
    if (uVar1 != 0) {
      iVar8 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    uVar2 = puVar5[uVar2 * -6 + -1];
    if (uVar2 != 0) {
      iVar7 = uVar2 + ((LZCOUNT(uVar2 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar9 = iVar9 + -1;
    uVar6 = uVar6 - 1 & uVar6;
    iVar10 = iVar7 + iVar8 + iVar10 + ((LZCOUNT(iVar7 + iVar8 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
  } while( true );
}

