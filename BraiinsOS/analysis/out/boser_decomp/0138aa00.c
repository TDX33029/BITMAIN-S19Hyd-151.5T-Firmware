// FUN_0138aa00 @ 0138aa00 size=100 calls_out=0 calls_in=4
// strings: 

void FUN_0138aa00(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if (*param_1 == 2) {
    if (param_2 == param_1[0xd]) {
      return;
    }
  }
  else {
    uVar1 = param_2;
    if ((*param_1 & 1) == 0) {
      if (param_2 <= param_1[1]) goto LAB_0138aa18;
      uVar1 = param_1[0xd];
    }
    if (param_1[1] <= uVar1) {
      param_1[2] = param_2;
      *param_1 = 1;
      return;
    }
  }
LAB_0138aa18:
  *param_1 = 0;
  param_1[1] = param_2;
  return;
}

