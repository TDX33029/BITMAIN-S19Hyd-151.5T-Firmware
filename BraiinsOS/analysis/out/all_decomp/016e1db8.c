// FUN_016e1db8 @ 016e1db8 size=76 calls_out=0 calls_in=2
// strings: 

bool FUN_016e1db8(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  if (param_2 <= uVar1) {
    param_1[1] = uVar1 - param_2;
    *param_1 = *param_1 + param_2;
  }
  return param_2 <= uVar1;
}

