// FUN_005f6438 @ 005f6438 size=68 calls_out=1 calls_in=71
// strings: 

void FUN_005f6438(int param_1,undefined4 *param_2)

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

