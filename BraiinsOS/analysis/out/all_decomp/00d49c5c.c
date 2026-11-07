// FUN_00d49c5c @ 00d49c5c size=36 calls_out=0 calls_in=1
// strings: 

int FUN_00d49c5c(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x897de2c1U - param_2 ^ 0x9113b553;
  return param_1 + ((uVar1 ^ uVar1 >> 4) & 0xffff);
}

