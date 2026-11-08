// FUN_01ae4abc @ 01ae4abc size=100 calls_out=2 calls_in=1
// strings: 

void FUN_01ae4abc(int *param_1)

{
  if (*param_1 == 0) {
    FUN_0134bd64(param_1[4],param_1[5]);
    return;
  }
  if (param_1[1] != -0x80000000) {
    FUN_0134bd64(param_1[1],param_1[2]);
    FUN_0134bd64(param_1[4],param_1[5]);
    return;
  }
  if (param_1[2] != -0x80000000) {
    FUN_0134bd64(param_1[2],param_1[3]);
  }
  FUN_0069d8a4((char)param_1[5],param_1[6]);
  return;
}

