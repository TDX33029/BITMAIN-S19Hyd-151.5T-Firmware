// FUN_0175ce6c @ 0175ce6c size=72 calls_out=4 calls_in=2
// strings: 

void FUN_0175ce6c(int *param_1)

{
  if (*param_1 == 4 && param_1[1] == 0) {
    return;
  }
  FUN_0175cef8(param_1);
  FUN_0172eeb4(param_1 + 0x58);
  if ((char)param_1[0x62] != '\x03') {
    FUN_01820460(param_1 + 0x5e);
  }
  FUN_0184c690(param_1[99]);
  return;
}

