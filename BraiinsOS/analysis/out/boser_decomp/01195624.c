// FUN_01195624 @ 01195624 size=64 calls_out=1 calls_in=1
// strings: 

void FUN_01195624(uint *param_1)

{
  if (*param_1 - 3 < 2) {
    return;
  }
  if (*param_1 < 2) {
    FUN_019bb7e0(param_1[1],param_1[2]);
    param_1 = param_1 + 4;
  }
  else {
    param_1 = param_1 + 1;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

