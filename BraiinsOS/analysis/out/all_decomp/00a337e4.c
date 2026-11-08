// FUN_00a337e4 @ 00a337e4 size=24 calls_out=0 calls_in=3
// strings: 

int FUN_00a337e4(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + 0x336f7ef1;
  return param_1 + ((uVar1 ^ (uVar1 >> 0x1b | uVar1 * 0x20)) & 0xffff);
}

