// FUN_018f2d80 @ 018f2d80 size=60 calls_out=1 calls_in=13
// strings: 

void FUN_018f2d80(undefined4 param_1,undefined4 *param_2)

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

