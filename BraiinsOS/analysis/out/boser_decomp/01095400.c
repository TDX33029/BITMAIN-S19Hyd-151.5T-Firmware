// FUN_01095400 @ 01095400 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_01095400(int param_1)

{
  if (*(char *)(param_1 + 0x615) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x608),*(undefined4 *)(param_1 + 0x60c));
    return;
  }
  if (*(char *)(param_1 + 0x615) == '\x03') {
    FUN_01077260(param_1);
    *(undefined1 *)(param_1 + 0x614) = 0;
    return;
  }
  return;
}

