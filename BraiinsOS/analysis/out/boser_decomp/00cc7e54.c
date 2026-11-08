// FUN_00cc7e54 @ 00cc7e54 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_00cc7e54(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0xb) == '\x03') {
    FUN_00fe4378(param_1[9],param_1[10]);
  }
  else if (*(char *)(param_1 + 0xb) != '\0') {
    return;
  }
  FUN_019bb7e0(param_1[5],param_1[6]);
  return;
}

