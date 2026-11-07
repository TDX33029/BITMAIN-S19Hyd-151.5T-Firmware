// FUN_01afd638 @ 01afd638 size=60 calls_out=0 calls_in=2
// strings: 

bool FUN_01afd638(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  if (param_2 <= uVar1) {
    param_1[1] = uVar1 - param_2;
    *param_1 = *param_1 + param_2;
  }
  return param_2 <= uVar1;
}

