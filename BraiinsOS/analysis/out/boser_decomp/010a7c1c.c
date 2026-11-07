// FUN_010a7c1c @ 010a7c1c size=36 calls_out=2 calls_in=2
// strings: 

void FUN_010a7c1c(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0xb1) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0xb1) == '\x03') {
    FUN_010a7c40(param_1 + 5);
    return;
  }
  return;
}

