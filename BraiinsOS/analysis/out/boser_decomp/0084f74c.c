// FUN_0084f74c @ 0084f74c size=56 calls_out=2 calls_in=3
// strings: 

void FUN_0084f74c(int *param_1)

{
  if ((char)param_1[0x1b] == '\0') {
    if (*param_1 == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if ((char)param_1[0x1b] == '\x03') {
    FUN_0084f784(param_1 + 5);
    return;
  }
  return;
}

