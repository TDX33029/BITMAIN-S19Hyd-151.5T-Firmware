// FUN_00a3348c @ 00a3348c size=40 calls_out=0 calls_in=3
// strings: 

int FUN_00a3348c(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x4245 - (param_2 - 1U ^ 0xb381f137);
  return param_1 + ((uVar1 ^ uVar1 >> 1) & 0xffff);
}

