// FUN_00e33ef8 @ 00e33ef8 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00e33ef8(int param_1)

{
  if (*(char *)(param_1 + 0xcc) == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
    param_1 = param_1 + 0x60;
  }
  else if (*(char *)(param_1 + 0xcc) != '\0') {
    return;
  }
  FUN_00e34abc(param_1);
  return;
}

