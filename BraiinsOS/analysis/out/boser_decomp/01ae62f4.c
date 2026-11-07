// FUN_01ae62f4 @ 01ae62f4 size=84 calls_out=2 calls_in=1
// strings: 

void FUN_01ae62f4(int *param_1)

{
  if (*param_1 != 0) {
    if (param_1[1] == -0x80000000) {
      if (param_1[2] != -0x80000000) {
        FUN_0134bd64(param_1[2],param_1[3]);
      }
      FUN_0069d8a4((char)param_1[5],param_1[6]);
      return;
    }
    FUN_0134bd64(param_1[1],param_1[2]);
  }
  FUN_0134bd64(param_1[4],param_1[5]);
  return;
}

