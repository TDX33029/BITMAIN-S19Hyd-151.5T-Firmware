// FUN_00fc1c94 @ 00fc1c94 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_00fc1c94(int param_1)

{
  if (*(char *)(param_1 + 0x33c) == '\0') {
    FUN_00ebabdc(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x33c) == '\x03') {
    FUN_00fb9d74(param_1 + 0x120);
    *(undefined1 *)(param_1 + 0x33e) = 0;
    return;
  }
  return;
}

