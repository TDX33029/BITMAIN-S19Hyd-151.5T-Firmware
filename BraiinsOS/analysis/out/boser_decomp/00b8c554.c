// FUN_00b8c554 @ 00b8c554 size=36 calls_out=2 calls_in=1
// strings: 

void FUN_00b8c554(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0xb7) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0xb7) == '\x03') {
    FUN_00b8c578(param_1 + 5);
    return;
  }
  return;
}

