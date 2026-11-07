// FUN_01b85678 @ 01b85678 size=356 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b85678(uint *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  
  if (param_2 == 1) {
    return 1;
  }
  uVar12 = param_2 & 0xf;
  if (uVar12 == 0) goto LAB_01b856d0;
  puVar10 = (uint *)((int)param_1 + uVar12);
  puVar5 = (uint *)((int)param_1 + 1);
  if (puVar5 < (uint *)((int)puVar10 + -3)) {
    if (*param_1 == *(uint *)((int)param_1 + 1)) {
      for (puVar9 = (uint *)((int)param_1 + 5); puVar11 = (uint *)((int)puVar9 + -1),
          puVar9 < (uint *)((int)puVar10 + -3); puVar9 = puVar9 + 1) {
        if (*(uint *)((int)puVar9 + -1) != *puVar9) {
          uVar8 = *(uint *)((int)puVar9 + -1) ^ *puVar9;
          bVar2 = (byte)uVar8;
          bVar3 = (byte)(uVar8 >> 8);
          bVar4 = (byte)(uVar8 >> 0x10);
          bVar1 = (byte)(uVar8 >> 0x18);
          pbVar6 = (byte *)((int)puVar9 +
                           (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                             1 | bVar2 >> 2 & 1) << 1 |
                                                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) <<
                                                          1 | bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1)
                                                        << 1 | bVar2 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3) - (int)puVar5));
          goto LAB_01b856c4;
        }
      }
      goto LAB_01b856f0;
    }
    uVar8 = *param_1 ^ *(uint *)((int)param_1 + 1);
    bVar2 = (byte)uVar8;
    bVar3 = (byte)(uVar8 >> 8);
    bVar4 = (byte)(uVar8 >> 0x10);
    bVar1 = (byte)(uVar8 >> 0x18);
    pbVar6 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
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
    puVar9 = puVar5;
    puVar11 = param_1;
LAB_01b856f0:
    if ((puVar9 < (uint *)((int)puVar10 + -1)) && ((short)*puVar11 == (short)*puVar9)) {
      puVar9 = (uint *)((int)puVar9 + 2);
      puVar11 = (uint *)((int)puVar11 + 2);
    }
    if ((puVar9 < puVar10) && ((byte)*puVar11 == (byte)*puVar9)) {
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    pbVar6 = (byte *)((int)puVar9 - (int)puVar5);
  }
LAB_01b856c4:
  if ((byte *)(uVar12 - 1) != pbVar6) {
    return 0;
  }
LAB_01b856d0:
  do {
    if (uVar12 == param_2) {
      return 1;
    }
    iVar7 = 0;
    do {
      if ((uint)(byte)*param_1 * 0x1010101 != *(int *)((int)param_1 + iVar7 + uVar12)) {
        return 0;
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 != 0x10);
    uVar12 = uVar12 + 0x10;
  } while( true );
}

