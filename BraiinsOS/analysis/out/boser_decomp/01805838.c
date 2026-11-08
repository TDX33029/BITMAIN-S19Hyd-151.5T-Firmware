// FUN_01805838 @ 01805838 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_01805838(int param_1)

{
  if (*(char *)(param_1 + 0x23d) != '\x03') {
    return;
  }
  FUN_01a6bb88(param_1 + 0x130);
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_017d0c44();
  }
  *(undefined1 *)(param_1 + 0x23c) = 0;
  return;
}

