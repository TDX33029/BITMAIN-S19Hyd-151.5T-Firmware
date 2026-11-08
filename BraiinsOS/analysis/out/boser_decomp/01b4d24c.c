// FUN_01b4d24c @ 01b4d24c size=88 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b4d24c(undefined4 *param_1)

{
  FUN_01b257dc(param_1,0,0x5c);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}

