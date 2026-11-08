// FUN_00740fb8 @ 00740fb8 size=40 calls_out=2 calls_in=2
// strings: 

void FUN_00740fb8(int *param_1)

{
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_00b91bd8();
    return;
  }
  if ((char)param_1[2] == '\x04') {
    return;
  }
  FUN_0069263c((char)param_1[2],param_1[3]);
  return;
}

