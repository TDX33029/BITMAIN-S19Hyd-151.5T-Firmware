// FUN_01b0d528 @ 01b0d528 size=48 calls_out=0 calls_in=2
// strings: 

uint FUN_01b0d528(byte *param_1)

{
  return (uint)param_1[2] << 0x10 | (uint)param_1[1] << 8 | (uint)*param_1;
}

