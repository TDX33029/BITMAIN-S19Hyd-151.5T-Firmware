// FUN_01741b0c @ 01741b0c size=72 calls_out=2 calls_in=2
// strings: 

void FUN_01741b0c(uint *param_1)

{
  if ((char)param_1[0x29] == '\x03') {
    FUN_01741f74(param_1 + 0x28,3,*param_1 | param_1[1]);
    return;
  }
  if ((char)param_1[0x29] != '\0') {
    return;
  }
  if (param_1[2] == 3 && param_1[3] == 0) {
    FUN_01741f74(param_1 + 4);
    return;
  }
  FUN_01741b38();
  return;
}

