// FUN_017ce288 @ 017ce288 size=560 calls_out=0 calls_in=3
// strings: 

char * FUN_017ce288(uint *param_1,uint *param_2,uint *param_3,char *param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar8 = (uint *)((int)param_1 + ((int)param_4 - (int)param_2));
  if (param_3 < puVar8) {
    puVar8 = param_3;
  }
  puVar7 = param_1;
  puVar9 = param_2;
  if (param_1 < (uint *)((int)puVar8 + -3)) {
    if (*param_2 == *param_1) {
      do {
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
        if ((uint *)((int)puVar8 + -3) <= puVar7) goto LAB_017ce308;
      } while (*puVar9 == *puVar7);
      uVar5 = *puVar7 ^ *puVar9;
      bVar2 = (byte)uVar5;
      bVar3 = (byte)(uVar5 >> 8);
      bVar4 = (byte)(uVar5 >> 0x10);
      bVar1 = (byte)(uVar5 >> 0x18);
      pcVar6 = (char *)((int)puVar7 +
                       (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                        bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1
                                                      | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1
                                                    | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                                       (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                        bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1
                                                      | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1
                                                    | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                                       (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                        bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                      | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                    | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                                       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                        bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                      | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                    | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                       (int)param_1));
    }
    else {
      uVar5 = *param_2 ^ *param_1;
      bVar2 = (byte)uVar5;
      bVar3 = (byte)(uVar5 >> 8);
      bVar4 = (byte)(uVar5 >> 0x10);
      bVar1 = (byte)(uVar5 >> 0x18);
      pcVar6 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
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
  }
  else {
LAB_017ce308:
    if (puVar7 < (uint *)((int)puVar8 + -1)) {
      if ((short)*puVar9 == (short)*puVar7) {
        puVar7 = (uint *)((int)puVar7 + 2);
        puVar9 = (uint *)((int)puVar9 + 2);
      }
    }
    if ((puVar7 < puVar8) && ((char)*puVar9 == (char)*puVar7)) {
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    pcVar6 = (char *)((int)puVar7 - (int)param_1);
  }
  if (param_4 != (char *)((int)param_2 + (int)pcVar6)) {
    return pcVar6;
  }
  puVar7 = (uint *)((int)param_1 + (int)pcVar6);
  puVar8 = puVar7;
  if (puVar7 < (uint *)((int)param_3 + -3)) {
    if (*param_5 != *(uint *)((int)param_1 + (int)pcVar6)) {
      uVar5 = *param_5 ^ *(uint *)((int)param_1 + (int)pcVar6);
      bVar2 = (byte)uVar5;
      bVar3 = (byte)(uVar5 >> 8);
      bVar4 = (byte)(uVar5 >> 0x10);
      bVar1 = (byte)(uVar5 >> 0x18);
      return pcVar6 + ((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
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
    while( true ) {
      puVar8 = puVar8 + 1;
      param_5 = param_5 + 1;
      if ((uint *)((int)param_3 + -3) <= puVar8) break;
      if (*param_5 != *puVar8) {
        uVar5 = *param_5 ^ *puVar8;
        bVar2 = (byte)uVar5;
        bVar3 = (byte)(uVar5 >> 8);
        bVar4 = (byte)(uVar5 >> 0x10);
        bVar1 = (byte)(uVar5 >> 0x18);
        return (char *)((int)puVar8 +
                       (int)(pcVar6 + (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar7)));
      }
    }
  }
  if (puVar8 < (uint *)((int)param_3 + -1)) {
    if ((short)*param_5 == (short)*puVar8) {
      param_5 = (uint *)((int)param_5 + 2);
      puVar8 = (uint *)((int)puVar8 + 2);
    }
  }
  if ((puVar8 < param_3) && ((char)*param_5 == (char)*puVar8)) {
    puVar8 = (uint *)((int)puVar8 + 1);
  }
  return (char *)((int)puVar8 + ((int)pcVar6 - (int)puVar7));
}

