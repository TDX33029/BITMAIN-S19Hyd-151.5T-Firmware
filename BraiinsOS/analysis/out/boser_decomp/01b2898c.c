// FUN_01b2898c @ 01b2898c size=132 calls_out=0 calls_in=9
// strings: 

undefined8 FUN_01b2898c(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(param_1 + -2);
  do {
    puVar2 = puVar2 + 1;
    uVar1 = *puVar2 + (short)((short)*puVar2 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
    *puVar2 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) & (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10)
    ;
  } while ((ushort *)(param_1 + 0x1fe) != puVar2);
  return 0;
}

