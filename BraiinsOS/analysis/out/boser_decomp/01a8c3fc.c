// FUN_01a8c3fc @ 01a8c3fc size=44 calls_out=2 calls_in=4
// strings: 

void FUN_01a8c3fc(short *param_1)

{
  if (*param_1 == 3) {
    FUN_00b76614(param_1 + 2);
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  FUN_01443048(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x16));
  return;
}

