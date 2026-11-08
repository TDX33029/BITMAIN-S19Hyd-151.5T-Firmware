// FUN_016e57c8 @ 016e57c8 size=120 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_016e57c8(undefined4 *param_1)

{
  FUN_016dd606(param_1 + 5,0,0x4c);
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  *param_1 = 0x67452301;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return 1;
}

