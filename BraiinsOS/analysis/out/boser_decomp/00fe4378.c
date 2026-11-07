// FUN_00fe4378 @ 00fe4378 size=60 calls_out=1 calls_in=119
// strings: 

void FUN_00fe4378(undefined4 param_1,undefined4 *param_2)

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

