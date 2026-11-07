// FUN_00f2d00c @ 00f2d00c size=36 calls_out=2 calls_in=2
// strings: 

void FUN_00f2d00c(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0xb) == '\x03') {
    FUN_00f2d030(param_1 + 5);
    return;
  }
  return;
}

