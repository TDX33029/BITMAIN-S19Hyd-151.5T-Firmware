// FUN_005f0650 @ 005f0650 size=56 calls_out=2 calls_in=15
// strings: 

void FUN_005f0650(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\x03') {
    FUN_00b71be0(param_1 + 6);
    param_1 = param_1 + 3;
  }
  else if (*(char *)(param_1 + 0xb) != '\0') {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

