// FUN_01be6d14 @ 01be6d14 size=40 calls_out=1 calls_in=3
// strings: 

void FUN_01be6d14(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & -DAT_01d5358c;
  software_interrupt(0);
  FUN_01be3b5a(uVar1,(param_2 + DAT_01d5358c + -1 + param_1 & -DAT_01d5358c) - uVar1);
  return;
}

