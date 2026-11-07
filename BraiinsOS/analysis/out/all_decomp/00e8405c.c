// FUN_00e8405c @ 00e8405c size=132 calls_out=2 calls_in=2
// strings: 

void FUN_00e8405c(int *param_1)

{
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    FUN_00e841a0(param_1 + 7);
    return;
  }
  if (*(char *)((int)param_1 + 0x21) != '\x03') {
    return;
  }
  if (*(char *)((int)param_1 + 0x15) == '\x03') {
    if (*param_1 != 0) {
      FUN_00e44660(*param_1,param_1[1],1);
    }
    FUN_00e841a0(param_1 + 2);
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_00e841a0(param_1 + 4);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

