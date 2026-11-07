// FUN_01b013bc @ 01b013bc size=88 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b013bc(undefined4 *param_1)

{
  FUN_01aff988(param_1,0x60);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return 1;
}

