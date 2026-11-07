// FUN_019bb7e0 @ 019bb7e0 size=76 calls_out=1 calls_in=2774
// strings: 

void FUN_019bb7e0(int param_1,undefined4 param_2)

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

