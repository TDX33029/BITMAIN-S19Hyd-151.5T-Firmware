// FUN_013d5adc @ 013d5adc size=120 calls_out=0 calls_in=2
// strings: 

int FUN_013d5adc(int *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 4) == 0) {
    if (param_2 != *param_1) {
      return 0;
    }
    iVar1 = *(int *)(param_2 + 8);
    *param_1 = iVar1;
  }
  else {
    iVar1 = *(int *)(param_2 + 8);
    *(int *)(*(int *)(param_2 + 4) + 8) = iVar1;
  }
  if (iVar1 == 0) {
    if (param_2 != param_1[1]) {
      return 0;
    }
    param_1[1] = *(int *)(param_2 + 4);
  }
  else {
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  return param_2 + -8;
}

