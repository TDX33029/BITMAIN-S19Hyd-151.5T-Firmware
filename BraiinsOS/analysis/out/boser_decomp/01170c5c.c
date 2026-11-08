// FUN_01170c5c @ 01170c5c size=48 calls_out=1 calls_in=1
// strings: 

void FUN_01170c5c(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 0xc))(param_1[1]);
  thunk_FUN_01be4678(param_1);
  return;
}

