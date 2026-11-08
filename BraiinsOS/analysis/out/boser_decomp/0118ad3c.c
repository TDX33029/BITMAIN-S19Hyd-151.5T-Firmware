// FUN_0118ad3c @ 0118ad3c size=96 calls_out=4 calls_in=1
// strings: 

void FUN_0118ad3c(int param_1)

{
  if (*(char *)(param_1 + 0xe8) == '\0') {
    FUN_005f649c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xe8) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0xe5) == '\x03') {
    if (*(int *)(param_1 + 0xd0) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
    }
    *(undefined1 *)(param_1 + 0xe4) = 0;
  }
  FUN_005f9d30(param_1 + 0xc0);
  FUN_005f32d0(param_1 + 0x40);
  return;
}

