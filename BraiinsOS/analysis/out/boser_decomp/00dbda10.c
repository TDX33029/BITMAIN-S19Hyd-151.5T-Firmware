// FUN_00dbda10 @ 00dbda10 size=48 calls_out=2 calls_in=2
// strings: 

void FUN_00dbda10(int *param_1)

{
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 != 0) {
    FUN_00a1ed90(param_1 + 1);
    return;
  }
  if ((char)param_1[2] == '\x06') {
    return;
  }
  FUN_00db4764();
  return;
}

