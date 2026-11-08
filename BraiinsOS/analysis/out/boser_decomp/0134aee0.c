// FUN_0134aee0 @ 0134aee0 size=88 calls_out=1 calls_in=937
// strings: 

void FUN_0134aee0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int local_10;
  int local_c;
  
  iVar1 = 0;
  piVar2 = &local_c;
  if ((param_4 != 0) && (param_1 != 0)) {
    iVar1 = param_1 * param_4;
    piVar2 = &local_10;
    local_c = param_3;
  }
  *piVar2 = iVar1;
  iVar1 = 0;
  if (local_c != 0) {
    iVar1 = local_10;
  }
  if (local_c != 0 && iVar1 != 0) {
    thunk_FUN_01be4678(param_2);
    return;
  }
  return;
}

