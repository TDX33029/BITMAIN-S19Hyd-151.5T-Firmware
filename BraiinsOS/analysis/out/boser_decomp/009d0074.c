// FUN_009d0074 @ 009d0074 size=100 calls_out=3 calls_in=2
// strings: 

void FUN_009d0074(int *param_1)

{
  if ((*param_1 == 0 && param_1[1] == 0) || ((char)param_1[0x67] != '\x03')) {
    return;
  }
  FUN_008b6720(param_1 + 0x37);
  if ((char)param_1[0x25] == '\x03') {
    FUN_009cfe40(param_1 + 2);
  }
  FUN_019bb7e0(param_1[0x33],param_1[0x34]);
  if (param_1[0x30] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x30],param_1[0x31]);
  return;
}

