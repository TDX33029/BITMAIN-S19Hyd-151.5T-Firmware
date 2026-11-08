// FUN_00a57840 @ 00a57840 size=28 calls_out=2 calls_in=5
// strings: 

void FUN_00a57840(int *param_1)

{
  if (*param_1 == 0x1d && param_1[1] == 0) {
    FUN_009200d0(param_1 + 2);
    return;
  }
  FUN_00a57044();
  return;
}

