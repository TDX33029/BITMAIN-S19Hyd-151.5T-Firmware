// FUN_00c33f78 @ 00c33f78 size=60 calls_out=3 calls_in=1
// strings: 

void FUN_00c33f78(undefined4 *param_1)

{
  if (*(char *)(param_1 + 9) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
  }
  else {
    if (*(char *)(param_1 + 9) != '\x03') {
      return;
    }
    FUN_01139b38(param_1[7],param_1[8]);
  }
  FUN_006a41c0(param_1 + 3);
  return;
}

