// FUN_00f2e1dc @ 00f2e1dc size=44 calls_out=2 calls_in=2
// strings: 

void FUN_00f2e1dc(int param_1)

{
  if (*(char *)(param_1 + 0x95c) == '\0') {
    if (*(int *)(param_1 + 0x8a0) == -0x80000000) {
      return;
    }
    FUN_00f25e18();
    return;
  }
  if (*(char *)(param_1 + 0x95c) == '\x03') {
    FUN_00f2e208();
    return;
  }
  return;
}

