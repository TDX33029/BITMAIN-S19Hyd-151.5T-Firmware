// FUN_01bc8b94 @ 01bc8b94 size=48 calls_out=0 calls_in=2
// strings: 

uint FUN_01bc8b94(byte *param_1)

{
  return (uint)param_1[2] << 0x10 | (uint)param_1[1] << 8 | (uint)*param_1;
}

