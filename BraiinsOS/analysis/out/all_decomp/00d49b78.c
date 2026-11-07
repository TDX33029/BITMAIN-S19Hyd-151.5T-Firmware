// FUN_00d49b78 @ 00d49b78 size=48 calls_out=0 calls_in=1
// strings: 

int FUN_00d49b78(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 * 0x44721160 ^ (uint)(param_2 * 0x44721160) >> 5) * -0x69dbeee3;
  return param_1 + ((uVar1 ^ uVar1 >> 0xe) + 0x697b & 0xffff);
}

