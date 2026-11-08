// FUN_00eb5ba4 @ 00eb5ba4 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_00eb5ba4(int param_1)

{
  if (*(char *)(param_1 + 0x2611) != '\x03') {
    return;
  }
  FUN_00eb6448(param_1 + 0x38);
  FUN_00d78b84(param_1);
  if (*(int *)(param_1 + 0x1c) != 3) {
    FUN_00d78b84((int *)(param_1 + 0x1c));
  }
  *(undefined1 *)(param_1 + 0x2610) = 0;
  return;
}

