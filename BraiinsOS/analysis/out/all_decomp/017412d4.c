// FUN_017412d4 @ 017412d4 size=108 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_017412d4(undefined4 *param_1)

{
  FUN_016dd606(param_1 + 4,0,0x4c);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}

