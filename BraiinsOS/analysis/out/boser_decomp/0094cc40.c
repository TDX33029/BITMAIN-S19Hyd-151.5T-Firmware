// FUN_0094cc40 @ 0094cc40 size=92 calls_out=5 calls_in=1
// strings: 

void FUN_0094cc40(int *param_1)

{
  if (*param_1 != 8) {
    FUN_00949b58(param_1);
  }
  if ((char)param_1[0x5e] != '\x06') {
    FUN_00db4764();
  }
  FUN_01ad7110(param_1 + 0x6c);
  FUN_01ad71c4(param_1 + 0x6f);
  if (param_1[100] == 0) {
    return;
  }
  FUN_01ada488(param_1 + 100);
  return;
}

