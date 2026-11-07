// FUN_0176e450 @ 0176e450 size=76 calls_out=0 calls_in=4
// strings: 

uint FUN_0176e450(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    uVar1 = param_1[3];
  }
  else {
    uVar1 = 0;
    if (*param_1 == 1) {
      uVar1 = param_1[3] - param_1[4];
      if ((uint)param_1[3] < (uint)param_1[4]) {
        uVar1 = 0;
      }
      if (param_1[5] != 0) {
        uVar1 = 0;
      }
    }
  }
  if ((uint)param_1[6] < uVar1) {
    uVar1 = param_1[6];
  }
  return uVar1;
}

