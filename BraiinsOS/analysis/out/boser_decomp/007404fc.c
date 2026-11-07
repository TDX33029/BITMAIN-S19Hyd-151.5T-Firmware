// FUN_007404fc @ 007404fc size=40 calls_out=2 calls_in=1
// strings: 

void FUN_007404fc(int *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  if (*param_1 == 2) {
    FUN_00b91bd8(param_1 + 2);
    return;
  }
  FUN_0069263c((char)param_1[1],param_1[2]);
  return;
}

