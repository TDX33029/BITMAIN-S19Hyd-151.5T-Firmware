// FUN_005f3800 @ 005f3800 size=32 calls_out=2 calls_in=4
// strings: 

void FUN_005f3800(int *param_1)

{
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_00b91bd8();
    return;
  }
  if ((char)param_1[2] == '\x04') {
    return;
  }
  FUN_0183a528();
  return;
}

