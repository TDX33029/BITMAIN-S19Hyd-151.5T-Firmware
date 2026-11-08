// FUN_00b6d8ec @ 00b6d8ec size=56 calls_out=3 calls_in=2
// strings: 

void FUN_00b6d8ec(int *param_1)

{
  if ((char)param_1[0x85] == '\0') {
    if (*param_1 == 3) {
      FUN_0187266c((char)param_1[1],param_1[2]);
      return;
    }
    FUN_011f6f44();
    return;
  }
  if ((char)param_1[0x85] == '\x03') {
    FUN_00b6d988(param_1 + 0x30);
    return;
  }
  return;
}

