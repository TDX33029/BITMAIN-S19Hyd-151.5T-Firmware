// FUN_01b6a36c @ 01b6a36c size=80 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_01b6a36c(undefined4 *param_1)

{
  FUN_01b6a234(param_1,0x5c);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}

