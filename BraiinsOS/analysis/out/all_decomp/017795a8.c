// FUN_017795a8 @ 017795a8 size=108 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_017795a8(undefined4 *param_1)

{
  FUN_016dd606(param_1 + 4,0,0x4c);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}

