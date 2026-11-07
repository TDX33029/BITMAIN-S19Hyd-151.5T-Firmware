// FUN_012d40d0 @ 012d40d0 size=68 calls_out=1 calls_in=64
// strings: 

void FUN_012d40d0(int param_1,undefined4 *param_2)

{
  if (param_1 != 0) {
    if ((code *)*param_2 != (code *)0x0) {
      (*(code *)*param_2)(param_1);
    }
    if (param_2[1] != 0) {
      thunk_FUN_01be4678(param_1);
      return;
    }
  }
  return;
}

