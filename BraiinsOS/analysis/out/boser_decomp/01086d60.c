// FUN_01086d60 @ 01086d60 size=84 calls_out=2 calls_in=2
// strings: 

void FUN_01086d60(int param_1)

{
  if (*(char *)(param_1 + 0x549) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x52c),*(undefined4 *)(param_1 + 0x530));
    if (*(int *)(param_1 + 0x468) != -0x80000000) {
      FUN_0193f164((int *)(param_1 + 0x468));
    }
    FUN_01086be0(param_1 + 0x520);
    return;
  }
  if (*(char *)(param_1 + 0x549) == '\x03') {
    FUN_01086ddc(param_1);
    *(undefined2 *)(param_1 + 0x546) = 0;
    *(undefined1 *)(param_1 + 0x548) = 0;
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x454),*(undefined4 *)(param_1 + 0x458));
    return;
  }
  return;
}

