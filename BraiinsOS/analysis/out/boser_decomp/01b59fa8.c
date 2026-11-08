// FUN_01b59fa8 @ 01b59fa8 size=96 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b59fa8(undefined4 *param_1)

{
  FUN_01b257dc(param_1,0,0x60);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return 1;
}

