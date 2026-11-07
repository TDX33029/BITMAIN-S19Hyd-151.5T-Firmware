// FUN_017209a8 @ 017209a8 size=60 calls_out=0 calls_in=6
// strings: 

uint FUN_017209a8(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 >> 5 < param_2) {
    uVar1 = *(uint *)(param_1 + (param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

