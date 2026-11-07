// FUN_010a7e9c @ 010a7e9c size=56 calls_out=3 calls_in=2
// strings: 

void FUN_010a7e9c(int *param_1)

{
  if ((char)param_1[0x85] == '\0') {
    if (*param_1 == 3) {
      FUN_0187266c((char)param_1[1],param_1[2]);
      return;
    }
    FUN_010a7ed4();
    return;
  }
  if ((char)param_1[0x85] == '\x03') {
    FUN_010a8010(param_1 + 0x30);
    return;
  }
  return;
}

