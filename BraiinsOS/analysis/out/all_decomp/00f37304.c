// FUN_00f37304 @ 00f37304 size=40 calls_out=0 calls_in=0
// strings: 

int FUN_00f37304(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 ^ param_2 >> 0xc ^ 0xaef3abcb) + 1;
  return param_1 + ((uVar1 ^ (uVar1 >> 0x1b | uVar1 * 0x20)) * 0xbe92 & 0xffff);
}

