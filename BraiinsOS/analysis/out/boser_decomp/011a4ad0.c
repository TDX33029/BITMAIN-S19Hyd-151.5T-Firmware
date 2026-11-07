// FUN_011a4ad0 @ 011a4ad0 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_011a4ad0(int param_1)

{
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0xac) == '\x03') {
    FUN_011c5fe8(param_1 + 0x40);
  }
  FUN_0132b958(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),4,0xc);
  return;
}

