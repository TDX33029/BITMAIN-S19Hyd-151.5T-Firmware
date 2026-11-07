// FUN_01703054 @ 01703054 size=192 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01703054(int param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint *puVar6;
  
  puVar4 = param_2;
  puVar6 = (uint *)(param_1 + -8);
  do {
    uVar2 = puVar4[1];
    bVar1 = *(byte *)((int)puVar4 + 3);
    puVar5 = (ushort *)((int)puVar4 + 5);
    uVar3 = puVar4[2];
    puVar6[2] = (*puVar4 & 0x3ff) * 0xd01 + 0x200 >> 10 |
                ((((byte)uVar2 & 0xf) << 6 | (uint)(*(byte *)((int)puVar4 + 1) >> 2)) * 0xd01 +
                 0x200 >> 10) << 0x10;
    puVar6[3] = ((bVar1 & 0x3f) << 4 | (uint)(byte)((byte)uVar2 >> 4)) * 0xd01 + 0x200 >> 10 |
                (((uint)(bVar1 >> 6) | (uint)(byte)uVar3 << 2) * 0xd01 + 0x200 >> 10) << 0x10;
    puVar4 = puVar5;
    puVar6 = puVar6 + 2;
  } while (puVar5 != param_2 + 0xa0);
  return 0;
}

