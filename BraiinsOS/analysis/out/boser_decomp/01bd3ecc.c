// FUN_01bd3ecc @ 01bd3ecc size=48 calls_out=0 calls_in=2
// strings: 

uint FUN_01bd3ecc(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < 0x100) {
    uVar1 = *(uint *)(param_1 + ((int)param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

