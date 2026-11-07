// FUN_00b14180 @ 00b14180 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_00b14180(int *param_1)

{
  if (*param_1 < -0x7ffffffe) {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_019bb7e0(param_1[3],param_1[4]);
  FUN_019bb7e0(param_1[6],param_1[7]);
  FUN_006a41c0(param_1 + 9);
  return;
}

