// FUN_01505754 @ 01505754 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_01505754(undefined4 *param_1,byte *param_2,int param_3)

{
  if (param_3 != 0) {
    param_3 = param_3 * 0x14;
    do {
      if (0xe < *param_2) {
        if (*param_2 != 0x10) {
          FUN_014976a0(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
          return;
        }
        if (*(short *)(param_2 + 0x10) == 0x28) break;
      }
      param_3 = param_3 + -0x14;
      param_2 = param_2 + 0x14;
    } while (param_3 != 0);
  }
  *param_1 = 0x80000000;
  return;
}

