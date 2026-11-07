// FUN_018244e0 @ 018244e0 size=60 calls_out=1 calls_in=5
// strings: 

void FUN_018244e0(undefined4 param_1,undefined4 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1);
  return;
}

