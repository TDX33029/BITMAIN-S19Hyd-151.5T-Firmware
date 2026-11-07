// FUN_01bea972 @ 01bea972 size=28 calls_out=0 calls_in=1
// strings: 

uint FUN_01bea972(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 - 1;
  if (uVar1 < 0x40) {
    uVar1 = *(uint *)(param_1 + (uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

