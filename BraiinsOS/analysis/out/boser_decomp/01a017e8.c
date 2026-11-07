// FUN_01a017e8 @ 01a017e8 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_01a017e8(undefined4 *param_1)

{
  if (*(char *)(param_1 + 9) == '\0') {
    FUN_01139b38(*param_1,param_1[1]);
  }
  else {
    if (*(char *)(param_1 + 9) != '\x03') {
      return;
    }
    FUN_01139b38(param_1[7],param_1[8]);
  }
  FUN_0193c71c(param_1 + 2);
  return;
}

