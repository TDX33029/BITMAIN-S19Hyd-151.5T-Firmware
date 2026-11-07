// FUN_010443cc @ 010443cc size=108 calls_out=3 calls_in=1
// strings: 

void FUN_010443cc(int param_1)

{
  if (*(char *)(param_1 + 0x94) != '\x03') {
    if (*(char *)(param_1 + 0x94) == '\0') {
      FUN_016dffb2(*(undefined4 *)(param_1 + 0x70));
    }
    FUN_00a07b4c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x90) == '\x03') {
    FUN_01044104(param_1 + 0x7c);
  }
  else if (*(char *)(param_1 + 0x90) == '\0') {
    FUN_016dffb2(*(undefined4 *)(param_1 + 0x78));
  }
  *(undefined1 *)(param_1 + 0x95) = 0;
  FUN_00a07b4c(param_1);
  return;
}

