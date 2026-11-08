// FUN_0074c55c @ 0074c55c size=60 calls_out=2 calls_in=3
// strings: 

void FUN_0074c55c(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x1c1) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0x1c1) == '\x03') {
    FUN_0074b1e0(param_1 + 4);
    *(undefined1 *)((int)param_1 + 0x705) = 0;
    return;
  }
  return;
}

