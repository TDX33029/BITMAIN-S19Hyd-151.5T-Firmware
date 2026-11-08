// FUN_017e16dc @ 017e16dc size=76 calls_out=3 calls_in=0
// strings: 

void FUN_017e16dc(int *param_1)

{
  if (*param_1 == 0) {
    FUN_00b76614(param_1 + 1);
    return;
  }
  if (param_1[2] != 0) {
    thunk_FUN_01be4678(param_1[1]);
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_01443048(param_1[3],param_1[4]);
  return;
}

