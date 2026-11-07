// FUN_01432e80 @ 01432e80 size=60 calls_out=1 calls_in=1
// strings: 

void FUN_01432e80(short *param_1)

{
  if (*param_1 == 2) {
    FUN_0185401c((char)param_1[2],*(undefined4 *)(param_1 + 4));
  }
  if (param_1[0x10] == 2) {
    FUN_0185401c((char)param_1[0x12],*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

