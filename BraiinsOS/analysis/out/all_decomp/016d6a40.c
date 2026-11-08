// FUN_016d6a40 @ 016d6a40 size=40 calls_out=1 calls_in=3
// strings: 

void FUN_016d6a40(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & -DAT_018ddb24;
  software_interrupt(0);
  FUN_016d3496(uVar1,(param_2 + DAT_018ddb24 + -1 + param_1 & -DAT_018ddb24) - uVar1);
  return;
}

