// FUN_00f1d7fc @ 00f1d7fc size=200 calls_out=0 calls_in=1
// strings: 

uint FUN_00f1d7fc(uint *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((((*(double *)(param_1 + 6) == *(double *)(param_2 + 6)) &&
       (*(double *)(param_1 + 8) == *(double *)(param_2 + 8))) &&
      (*(double *)(param_1 + 10) == *(double *)(param_2 + 10))) &&
     (*(double *)(param_1 + 0xc) == *(double *)(param_2 + 0xc))) {
    if ((*param_1 & 1) == 0) {
      if (*param_2 != 0) {
        return 0;
      }
    }
    else {
      if (*param_2 == 0) {
        return 0;
      }
      if (*(double *)(param_1 + 2) != *(double *)(param_2 + 2)) {
        return 0;
      }
    }
    if (param_1[4] != 0) {
      if (param_2[4] == 0) {
        return 0;
      }
      return (uint)((float)param_1[5] == (float)param_2[5]);
    }
    uVar1 = param_2[4] ^ 1;
  }
  return uVar1;
}

