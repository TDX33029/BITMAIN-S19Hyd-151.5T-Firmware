// FUN_005f1364 @ 005f1364 size=36 calls_out=2 calls_in=6
// strings: 

void FUN_005f1364(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0x15) == '\x03') {
    FUN_005f2078(param_1 + 4);
    return;
  }
  return;
}

