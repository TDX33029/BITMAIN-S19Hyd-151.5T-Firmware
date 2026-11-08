// FUN_019ee134 @ 019ee134 size=68 calls_out=3 calls_in=1
// strings: 

void FUN_019ee134(int *param_1)

{
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 != 0) {
    FUN_00b91e68(param_1[4],param_1[5]);
    return;
  }
  if (param_1[1] == 0) {
    FUN_0069263c((char)param_1[2],param_1[3]);
    return;
  }
  FUN_0134c054(param_1[3],param_1[1],4,0x20);
  return;
}

