// FUN_019fa784 @ 019fa784 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_019fa784(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] != 0) {
    FUN_00b91e68(param_1[6],param_1[7]);
    return;
  }
  if (param_1[3] == 0) {
    FUN_0069d8a4((char)param_1[4],param_1[5]);
    return;
  }
  FUN_0134c054(param_1[5],param_1[3],4,0x20);
  return;
}

