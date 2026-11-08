// FUN_0074acc0 @ 0074acc0 size=60 calls_out=2 calls_in=3
// strings: 

void FUN_0074acc0(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x22b) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0x22b) == '\x03') {
    FUN_0074b1e0(param_1 + 0x6e);
    *(undefined1 *)((int)param_1 + 0x8ad) = 0;
    return;
  }
  return;
}

