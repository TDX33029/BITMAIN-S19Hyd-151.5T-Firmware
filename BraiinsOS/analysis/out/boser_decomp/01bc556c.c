// FUN_01bc556c @ 01bc556c size=44 calls_out=0 calls_in=4
// strings: 

int FUN_01bc556c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0x1f - LZCOUNT(param_1 + 1);
  return uVar1 * 0x100 + ((uint)((param_1 + 1) * 0x100) >> (uVar1 & 0xff));
}

