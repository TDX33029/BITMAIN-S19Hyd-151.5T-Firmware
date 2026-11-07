// FUN_00d49ca8 @ 00d49ca8 size=40 calls_out=0 calls_in=1
// strings: 

int FUN_00d49ca8(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 ^ param_2 >> 0xe;
  uVar1 = (uVar1 ^ (param_2 >> 0x1f | uVar1 << 1)) + 0xb31463c3;
  return param_1 + (0xc6f5 - (uVar1 ^ (uVar1 >> 0x1b | uVar1 * 0x20)) & 0xffff);
}

