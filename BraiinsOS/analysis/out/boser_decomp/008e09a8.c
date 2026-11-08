// FUN_008e09a8 @ 008e09a8 size=64 calls_out=1 calls_in=2
// strings: 

void FUN_008e09a8(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = param_1[1];
  }
  if (*param_1 != 0 && iVar1 != 0) {
    (**(code **)(iVar1 + 0x10))(param_1 + 4,param_1[2],param_1[3]);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

