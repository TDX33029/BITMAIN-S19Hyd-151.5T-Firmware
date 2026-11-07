// FUN_00edcd64 @ 00edcd64 size=460 calls_out=1 calls_in=1
// strings: 

uint * FUN_00edcd64(int *param_1)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  
  if (*param_1 != 2) {
    return (uint *)(param_1[4] + -0x10);
  }
  uVar10 = param_1[2];
  uVar7 = param_1[4];
  piVar9 = (int *)param_1[5];
  puVar3 = (uint *)*piVar9;
  uVar6 = piVar9[1];
  uVar4 = uVar6 & uVar10;
  uVar5 = *(uint *)((int)puVar3 + uVar4) & 0x80808080;
  if (uVar5 == 0) {
    iVar8 = 4;
    do {
      uVar4 = uVar4 + iVar8;
      iVar8 = iVar8 + 4;
      uVar4 = uVar4 & uVar6;
      uVar5 = *(uint *)((int)puVar3 + uVar4) & 0x80808080;
    } while (uVar5 == 0);
  }
  uVar4 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                 (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar6;
  bVar1 = *(byte *)((int)puVar3 + uVar4);
  bVar2 = (byte)(uVar10 >> 0x18);
  if ((char)bVar1 < '\0') {
    iVar8 = piVar9[2];
  }
  else {
    uVar4 = *puVar3 & 0x80808080;
    uVar4 = LZCOUNT((*puVar3 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
    bVar1 = *(byte *)((int)puVar3 + (uVar4 >> 3));
    uVar4 = uVar4 >> 3;
    iVar8 = piVar9[2];
  }
  if (((bVar1 & 1) == 0) || (iVar8 != 0)) {
    iVar8 = iVar8 - (bVar1 & 1);
    *(byte *)((int)puVar3 + uVar4) = bVar2 >> 1;
  }
  else {
    FUN_00eddc2c(piVar9);
    puVar3 = (uint *)*piVar9;
    uVar6 = piVar9[1];
    uVar10 = uVar6 & uVar10;
    uVar4 = *(uint *)((int)puVar3 + uVar10) & 0x80808080;
    if (uVar4 == 0) {
      iVar8 = 4;
      do {
        uVar10 = uVar10 + iVar8;
        iVar8 = iVar8 + 4;
        uVar10 = uVar10 & uVar6;
        uVar4 = *(uint *)((int)puVar3 + uVar10) & 0x80808080;
      } while (uVar4 == 0);
    }
    uVar4 = uVar10 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar6;
    uVar10 = (uint)*(char *)((int)puVar3 + uVar4);
    if (-1 < (int)uVar10) {
      uVar4 = *puVar3 & 0x80808080;
      uVar4 = LZCOUNT((*puVar3 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
      uVar10 = (uint)*(byte *)((int)puVar3 + (uVar4 >> 3));
      uVar4 = uVar4 >> 3;
    }
    iVar8 = piVar9[2];
    *(byte *)((int)puVar3 + uVar4) = bVar2 >> 1;
    iVar8 = iVar8 - (uVar10 & 1);
  }
  piVar9[2] = iVar8;
  *(byte *)((int)puVar3 + (uVar4 - 4 & uVar6) + 4) = bVar2 >> 1;
  piVar9[3] = piVar9[3] + 1;
  puVar3[uVar4 * -5 + -5] = uVar7;
  puVar3[uVar4 * -5 + -4] = (uint)&DAT_005674cc;
  puVar3[uVar4 * -5 + -3] = 0;
  puVar3[uVar4 * -5 + -2] = 0;
  puVar3[uVar4 * -5 + -1] = 0;
  return puVar3 + uVar4 * -5 + -4;
}

