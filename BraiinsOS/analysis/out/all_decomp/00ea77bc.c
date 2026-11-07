// FUN_00ea77bc @ 00ea77bc size=40 calls_out=0 calls_in=1
// strings: 

int FUN_00ea77bc(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 * -0x180cebf0 ^ ((uint)(param_2 * -0x180cebf0) >> 0x1d | param_2 * 0x3f98a080)) *
          -0x5ba96a88;
  return param_1 + ((uVar1 ^ uVar1 >> 5) & 0xffff);
}

