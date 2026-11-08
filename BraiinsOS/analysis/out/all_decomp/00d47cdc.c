// FUN_00d47cdc @ 00d47cdc size=44 calls_out=0 calls_in=1
// strings: 

int FUN_00d47cdc(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 * -0x42e3d4fa ^ 0xf76810bb;
  uVar1 = uVar1 ^ (uVar1 >> 0x1e | uVar1 << 2);
  uVar1 = uVar1 ^ (uVar1 >> 0x1b | uVar1 << 5);
  return param_1 + ((uVar1 ^ uVar1 >> 6) & 0xffff);
}

