// FUN_010a80ec @ 010a80ec size=80 calls_out=2 calls_in=1
// strings: 

void FUN_010a80ec(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[10] == '\x03') {
      FUN_019bb7e0(param_1[2],param_1[3]);
      return;
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[1] == -0x80000000) {
    FUN_0187266c((char)param_1[2],param_1[3]);
    return;
  }
  FUN_019bb7e0(param_1[1],param_1[2]);
  return;
}

