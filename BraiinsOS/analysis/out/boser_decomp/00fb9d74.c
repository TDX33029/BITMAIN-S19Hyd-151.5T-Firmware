// FUN_00fb9d74 @ 00fb9d74 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00fb9d74(int param_1)

{
  if (*(char *)(param_1 + 0x214) == '\0') {
    FUN_00ebabdc(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x214) == '\x03') {
    FUN_00fb9f1c(param_1 + 0x120);
    *(undefined1 *)(param_1 + 0x215) = 0;
    return;
  }
  return;
}

