// FUN_009d7384 @ 009d7384 size=72 calls_out=4 calls_in=2
// strings: 

void FUN_009d7384(int *param_1)

{
  if (*param_1 == 4 && param_1[1] == 0) {
    return;
  }
  FUN_009d7410(param_1);
  FUN_009d747c(param_1 + 0x58);
  if ((char)param_1[0x62] != '\x03') {
    FUN_01820460(param_1 + 0x5e);
  }
  FUN_008e09a8(param_1[99]);
  return;
}

