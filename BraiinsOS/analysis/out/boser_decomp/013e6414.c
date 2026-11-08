// FUN_013e6414 @ 013e6414 size=76 calls_out=1 calls_in=8
// strings: 

void FUN_013e6414(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int local_8;
  int local_4;
  
  piVar2 = &local_8;
  if (param_1 == 0) {
    param_1 = 0;
    piVar2 = &local_4;
  }
  else {
    param_1 = param_1 * param_4;
    local_4 = param_3;
  }
  *piVar2 = param_1;
  iVar1 = 0;
  if (local_4 != 0) {
    iVar1 = local_8;
  }
  if (local_4 != 0 && iVar1 != 0) {
    thunk_FUN_01be4678(param_2);
    return;
  }
  return;
}

