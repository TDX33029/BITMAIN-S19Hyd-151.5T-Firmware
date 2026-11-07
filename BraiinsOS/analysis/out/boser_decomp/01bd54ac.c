// FUN_01bd54ac @ 01bd54ac size=40 calls_out=0 calls_in=1
// strings: 

uint FUN_01bd54ac(uint param_1,int param_2,uint param_3)

{
  return param_2 << (0x20 - param_3 & 0xff) & 0x1fU | param_1 >> (param_3 & 0xff);
}

