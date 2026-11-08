// FUN_015d243c @ 015d243c size=48 calls_out=2 calls_in=3
// strings: 

void FUN_015d243c(int *param_1)

{
  int iVar1;
  
  FUN_015d14b0(param_1 + 3);
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = param_1[1];
  }
  if (*param_1 != 0 && iVar1 != 0) {
    thunk_FUN_01be4678(param_1[2]);
    return;
  }
  return;
}

