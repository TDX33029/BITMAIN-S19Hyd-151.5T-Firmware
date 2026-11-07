// FUN_01bcc1b4 @ 01bcc1b4 size=48 calls_out=0 calls_in=3
// strings: 

undefined4 FUN_01bcc1b4(byte *param_1)

{
  *param_1 = *param_1 & 0xf8;
  param_1[0x1f] = param_1[0x1f] & 0x7f | 0x40;
  return 0;
}

