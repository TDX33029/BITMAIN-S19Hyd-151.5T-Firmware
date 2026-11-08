// FUN_005f0608 @ 005f0608 size=60 calls_out=2 calls_in=7
// strings: 

void FUN_005f0608(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x1d) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0x1d) == '\x03') {
    FUN_005f1364(param_1 + 7);
    *(undefined1 *)((int)param_1 + 0x75) = 0;
    return;
  }
  return;
}

