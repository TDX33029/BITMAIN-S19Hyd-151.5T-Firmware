// FUN_011f7430 @ 011f7430 size=44 calls_out=2 calls_in=1
// strings: 

void FUN_011f7430(int *param_1)

{
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_00b91e68(param_1[2],param_1[3]);
    return;
  }
  if ((char)param_1[2] == '\x04') {
    return;
  }
  FUN_0069263c((char)param_1[2],param_1[3]);
  return;
}

