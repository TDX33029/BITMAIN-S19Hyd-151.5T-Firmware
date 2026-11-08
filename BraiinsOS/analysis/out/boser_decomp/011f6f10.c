// FUN_011f6f10 @ 011f6f10 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_011f6f10(int *param_1)

{
  if ((char)param_1[0x34] == '\0') {
    if (*param_1 == 3) {
      FUN_0069263c((char)param_1[1],param_1[2]);
      return;
    }
  }
  else {
    if ((char)param_1[0x34] != '\x03') {
      return;
    }
    param_1 = param_1 + 0x18;
  }
  FUN_011f6f44(param_1);
  return;
}

