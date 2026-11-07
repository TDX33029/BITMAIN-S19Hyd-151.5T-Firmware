// FUN_00bb8080 @ 00bb8080 size=60 calls_out=2 calls_in=8
// strings: 

void FUN_00bb8080(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00bb7e00(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00bb7f40(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

