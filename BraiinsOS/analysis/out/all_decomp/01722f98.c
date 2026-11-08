// FUN_01722f98 @ 01722f98 size=304 calls_out=0 calls_in=1
// strings: 

uint FUN_01722f98(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar4;
  uint *puVar3;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_1[1] < 1) {
    return 0;
  }
  iVar5 = 0;
  uVar11 = 0;
  uVar2 = 0;
  puVar3 = (uint *)*param_1;
  do {
    puVar4 = puVar3 + 1;
    uVar8 = *puVar3;
    uVar7 = (int)(uVar8 - 1 & ~uVar8) >> 0x1f;
    uVar12 = uVar7 | uVar11;
    uVar1 = (int)(uVar8 * 0x10000 - 1 & ~(uVar8 * 0x10000)) >> 0x1f;
    uVar11 = uVar11 | ~uVar7;
    uVar8 = uVar1 & uVar8 >> 0x10 | uVar8 & ~uVar1;
    uVar7 = (int)(uVar8 * 0x1000000 - 1 & ~(uVar8 * 0x1000000)) >> 0x1f;
    uVar9 = uVar7 & uVar8 >> 8 | uVar8 & ~uVar7;
    uVar8 = (int)(uVar9 * 0x10000000 - 1 & ~(uVar9 * 0x10000000)) >> 0x1f;
    uVar10 = uVar8 & uVar9 >> 4 | uVar9 & ~uVar8;
    uVar9 = (int)(uVar10 * 0x40000000 - 1 & ~(uVar10 * 0x40000000)) >> 0x1f;
    iVar6 = (uVar1 & 0x10 | uVar7 & 8) + (uVar8 & 4) + (uVar9 & 2);
    if (((uVar9 & uVar10 >> 2 | uVar10 & ~uVar9) & 1) == 0) {
      iVar6 = iVar6 + 1;
    }
    uVar7 = iVar6 + iVar5;
    iVar5 = iVar5 + 0x20;
    uVar2 = uVar2 | uVar7 & ~uVar12;
    puVar3 = puVar4;
  } while ((uint *)*param_1 + param_1[1] != puVar4);
  return uVar2;
}

