// FUN_00cb01b4 @ 00cb01b4 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00cb01b4(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  if (*(char *)(param_1 + 0xb) == '\x03') {
    FUN_00fe4378(param_1[9],param_1[10]);
    return;
  }
  return;
}

