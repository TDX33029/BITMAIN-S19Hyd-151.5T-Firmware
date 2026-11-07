// FUN_011f6f44 @ 011f6f44 size=80 calls_out=2 calls_in=10
// strings: 

void FUN_011f6f44(int *param_1)

{
  FUN_011f745c(param_1 + 0xc);
  if (*param_1 != 2) {
    FUN_007372d8(param_1);
  }
  if (param_1[4] != 2) {
    FUN_007372d8();
  }
  if (param_1[8] == 2) {
    return;
  }
  FUN_007372d8(param_1 + 8);
  return;
}

