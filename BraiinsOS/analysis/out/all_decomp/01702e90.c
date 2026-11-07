// FUN_01702e90 @ 01702e90 size=252 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01702e90(uint *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = param_2;
  do {
    puVar2 = puVar1 + 8;
    *param_1 = ((uint)puVar1[1] * 0x13afb0 + 0x8000000 >> 0x1c) << 4 |
               ((uint)puVar1[3] * 0x13afb0 + 0x8000000 >> 0x1c) << 0xc |
               ((uint)puVar1[5] * 0x13afb0 + 0x8000000 >> 0x1c) << 0x14 |
               (uint)puVar1[7] * 0x13afb0 + 0x8000000 & 0xf0000000 |
               (uint)*puVar1 * 0x13afb0 + 0x8000000 >> 0x1c |
               ((uint)puVar1[2] * 0x13afb0 + 0x8000000 >> 0x1c) << 8 |
               ((uint)puVar1[4] * 0x13afb0 + 0x8000000 >> 0x1c) << 0x10 |
               ((uint)puVar1[6] * 0x13afb0 + 0x8000000 >> 0x1c) << 0x18;
    puVar1 = puVar2;
    param_1 = param_1 + 1;
  } while (puVar2 != param_2 + 0x100);
  return 0;
}

