// FUN_017988f4 @ 017988f4 size=440 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_017988f4(uint *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  
  if (param_2 == &DAT_00000001) {
    return 1;
  }
  uVar9 = (uint)param_2 & 0xf;
  if (uVar9 == 0) goto LAB_0179890c;
  puVar15 = (uint *)((int)param_1 + uVar9);
  puVar7 = (uint *)((int)param_1 + 1);
  puVar12 = param_1;
  if (puVar7 < (uint *)((int)puVar15 + -3)) {
    if (*param_1 == *(uint *)((int)param_1 + 1)) {
      for (puVar14 = (uint *)((int)param_1 + 5); puVar12 = puVar12 + 1,
          puVar14 < (uint *)((int)puVar15 + -3); puVar14 = puVar14 + 1) {
        if (*puVar12 != *puVar14) {
          uVar8 = *puVar12 ^ *puVar14;
          bVar2 = (byte)uVar8;
          bVar3 = (byte)(uVar8 >> 8);
          bVar4 = (byte)(uVar8 >> 0x10);
          bVar1 = (byte)(uVar8 >> 0x18);
          pbVar10 = (byte *)((int)puVar14 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                              1 | bVar2 >> 2 & 1) << 1 |
                                                            bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                           << 1 | bVar2 >> 5 & 1) << 1 |
                                                         bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                << 1 | bVar3 >> 2 & 1) << 1 |
                                                              bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                             << 1 | bVar3 >> 5 & 1) << 1 |
                                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)puVar7));
          goto LAB_01798a00;
        }
      }
      goto LAB_017989ac;
    }
    uVar8 = *(uint *)((int)param_1 + 1) ^ *param_1;
    bVar2 = (byte)uVar8;
    bVar3 = (byte)(uVar8 >> 8);
    bVar4 = (byte)(uVar8 >> 0x10);
    bVar1 = (byte)(uVar8 >> 0x18);
    pbVar10 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                      bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                                    bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                                  bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                                     (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                      bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                                    bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                                  bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                                     (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                      bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                                    bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                                     (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                      bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                    bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                  bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
  }
  else {
    puVar14 = puVar7;
LAB_017989ac:
    puVar11 = puVar12;
    puVar13 = puVar14;
    if (puVar14 < (uint *)((int)puVar15 + -1)) {
      puVar11 = (uint *)((int)puVar12 + 2);
      puVar13 = (uint *)((int)puVar14 + 2);
      if ((short)*puVar12 != (short)*puVar14) {
        puVar11 = puVar12;
        puVar13 = puVar14;
      }
    }
    if ((puVar13 < puVar15) && ((byte)*puVar11 == (byte)*puVar13)) {
      puVar13 = (uint *)((int)puVar13 + 1);
    }
    pbVar10 = (byte *)((int)puVar13 - (int)puVar7);
  }
LAB_01798a00:
  if ((byte *)(uVar9 - 1) != pbVar10) {
    return 0;
  }
LAB_0179890c:
  if (&DAT_0000000f < param_2) {
    pbVar10 = (byte *)((int)param_1 + uVar9 + 0xc);
    iVar6 = (uint)(byte)*param_1 * 0x1010101;
    do {
      if (iVar6 != *(int *)(pbVar10 + -0xc)) {
        return 0;
      }
      if (iVar6 != *(int *)(pbVar10 + -8)) {
        return 0;
      }
      if (iVar6 != *(int *)(pbVar10 + -4)) {
        return 0;
      }
      iVar5 = *(int *)pbVar10;
      pbVar10 = pbVar10 + 0x10;
      if (iVar6 != iVar5) {
        return 0;
      }
    } while (pbVar10 + (-0xc - (int)param_1) != param_2);
  }
  return 1;
}

