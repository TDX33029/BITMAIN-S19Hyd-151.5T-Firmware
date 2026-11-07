// FUN_01039ab0 @ 01039ab0 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_01039ab0(undefined4 *param_1)

{
  if (*(char *)(param_1 + 6) == '\x03') {
    FUN_01139b38(param_1[4],param_1[5]);
  }
  else if (*(char *)(param_1 + 6) != '\0') {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

