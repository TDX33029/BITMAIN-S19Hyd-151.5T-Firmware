// FUN_00a300d8 @ 00a300d8 size=24 calls_out=0 calls_in=1
// strings: 

int FUN_00a300d8(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 ^ param_2 >> 8) + 1;
  return param_1 + (~(uVar1 ^ uVar1 >> 0xf) & 0xffff);
}

