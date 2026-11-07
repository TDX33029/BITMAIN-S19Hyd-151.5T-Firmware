// FUN_007dcf10 @ 007dcf10 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_007dcf10(int *param_1)

{
  if ((char)param_1[0x47] != '\x03') {
    return;
  }
  if ((char)param_1[0x42] == '\x03') {
    FUN_007d42e4(param_1 + 6);
  }
  else if (((char)param_1[0x42] == '\0') && (*param_1 != 0)) {
    thunk_FUN_016d3fb4(param_1[1]);
    *(undefined1 *)((int)param_1 + 0x11b) = 0;
    return;
  }
  *(undefined1 *)((int)param_1 + 0x11b) = 0;
  return;
}

