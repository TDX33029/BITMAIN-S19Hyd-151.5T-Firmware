// FUN_01116dcc @ 01116dcc size=92 calls_out=2 calls_in=0
// strings: 

void FUN_01116dcc(int *param_1)

{
  if ((char)param_1[0x21] == '\0') {
    if (*param_1 < 0) {
      return;
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if ((char)param_1[0x21] != '\x03') {
    return;
  }
  FUN_00ba6dc4(param_1 + 8);
  if (-1 < param_1[5]) {
    FUN_019bb7e0(param_1[5],param_1[6]);
  }
  *(undefined1 *)((int)param_1 + 0x85) = 0;
  return;
}

