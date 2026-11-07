// FUN_01219ff4 @ 01219ff4 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_01219ff4(int *param_1)

{
  if (*param_1 != -0x80000000) {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  if (param_1[1] != -0x80000000) {
    FUN_019bb7e0(param_1[1],param_1[2]);
  }
  FUN_0069d8a4((char)param_1[4],param_1[5]);
  return;
}

