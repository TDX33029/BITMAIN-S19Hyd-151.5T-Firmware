// FUN_01895edc @ 01895edc size=52 calls_out=2 calls_in=0
// strings: 

void FUN_01895edc(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0xc));
  return;
}

