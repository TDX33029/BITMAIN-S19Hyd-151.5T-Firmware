// FUN_01b1cc74 @ 01b1cc74 size=140 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1cc74(uint *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = param_2;
  do {
    puVar2 = (ushort *)((int)puVar1 + 5);
    *param_1 = *puVar1 & 0x3ff;
    param_1[1] = ((byte)puVar1[1] & 0xf) << 6 | (uint)(*(byte *)((int)puVar1 + 1) >> 2);
    param_1[2] = (*(byte *)((int)puVar1 + 3) & 0x3f) << 4 | (uint)(byte)((byte)puVar1[1] >> 4);
    param_1[3] = (uint)(byte)puVar1[2] << 2 | (uint)(*(byte *)((int)puVar1 + 3) >> 6);
    param_1 = param_1 + 4;
    puVar1 = puVar2;
  } while (param_2 + 0xa0 != puVar2);
  return 0;
}

