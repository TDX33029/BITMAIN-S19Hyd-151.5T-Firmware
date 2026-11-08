// FUN_005f9d80 @ 005f9d80 size=36 calls_out=2 calls_in=1
// strings: 

void FUN_005f9d80(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x1b) == '\0') {
    FUN_00b19860(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0x1b) == '\x03') {
    FUN_005f2f30(param_1 + 2);
    return;
  }
  return;
}

