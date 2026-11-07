// FUN_0134bd64 @ 0134bd64 size=76 calls_out=1 calls_in=1025
// strings: 

void FUN_0134bd64(int param_1,undefined4 param_2)

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
    local_4 = 1;
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

