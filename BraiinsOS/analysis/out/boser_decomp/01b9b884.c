// FUN_01b9b884 @ 01b9b884 size=236 calls_out=0 calls_in=56
// strings: 

char * FUN_01b9b884(uint *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = param_1;
  if (param_1 < (uint *)((int)param_3 + -3)) {
    if (*param_2 != *param_1) {
      uVar5 = *param_2 ^ *param_1;
      bVar2 = (byte)uVar5;
      bVar3 = (byte)(uVar5 >> 8);
      bVar4 = (byte)(uVar5 >> 0x10);
      bVar1 = (byte)(uVar5 >> 0x18);
      return (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
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
      puVar6 = puVar6 + 1;
      param_2 = param_2 + 1;
      if ((uint *)((int)param_3 + -3) <= puVar6) break;
      if (*param_2 != *puVar6) {
        uVar5 = *param_2 ^ *puVar6;
        bVar2 = (byte)uVar5;
        bVar3 = (byte)(uVar5 >> 8);
        bVar4 = (byte)(uVar5 >> 0x10);
        bVar1 = (byte)(uVar5 >> 0x18);
        return (char *)((int)puVar6 +
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
    }
  }
  if ((puVar6 < (uint *)((int)param_3 + -1)) && ((short)*puVar6 == (short)*param_2)) {
    puVar6 = (uint *)((int)puVar6 + 2);
    param_2 = (uint *)((int)param_2 + 2);
  }
  if ((puVar6 < param_3) && ((char)*param_2 == (char)*puVar6)) {
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  return (char *)((int)puVar6 - (int)param_1);
}

