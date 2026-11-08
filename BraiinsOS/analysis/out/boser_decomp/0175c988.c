// FUN_0175c988 @ 0175c988 size=76 calls_out=3 calls_in=2
// strings: 

void FUN_0175c988(int *param_1)

{
  if (*param_1 == 1) {
    FUN_01139b38(param_1[1],param_1[2]);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  FUN_0175cb0c(param_1 + 0xc);
  if ((char)param_1[1] == '\x03') {
    return;
  }
  FUN_01706d0c(param_1 + 1);
  return;
}

