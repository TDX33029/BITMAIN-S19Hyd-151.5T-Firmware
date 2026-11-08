// FUN_011ea5bc @ 011ea5bc size=104 calls_out=3 calls_in=2
// strings: 

void FUN_011ea5bc(int *param_1)

{
  if (*param_1 == 0) {
    if (*(char *)((int)param_1 + 0x5d) == '\x03') {
      FUN_01431b40(param_1 + 2);
    }
    else if (*(char *)((int)param_1 + 0x5d) != '\0') {
      return;
    }
    FUN_00a43aa8(param_1 + 0x16);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] == 0 && param_1[3] == 0) {
    return;
  }
  FUN_00b91e68(param_1[4],param_1[5]);
  return;
}

