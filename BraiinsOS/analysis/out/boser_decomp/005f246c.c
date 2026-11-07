// FUN_005f246c @ 005f246c size=44 calls_out=1 calls_in=4
// strings: 

void FUN_005f246c(int param_1)

{
  if (*(char *)(param_1 + 0xcb) == '\x03') {
    FUN_005f1a9c(param_1 + 4);
    *(undefined1 *)(param_1 + 0xca) = 0;
    *(undefined2 *)(param_1 + 200) = 0;
    return;
  }
  return;
}

