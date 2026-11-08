// FUN_005f2078 @ 005f2078 size=64 calls_out=2 calls_in=6
// strings: 

void FUN_005f2078(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x03') {
    FUN_005f53e0(param_1 + 7);
    *(undefined1 *)((int)param_1 + 0x41) = 0;
    param_1 = param_1 + 4;
  }
  else if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

