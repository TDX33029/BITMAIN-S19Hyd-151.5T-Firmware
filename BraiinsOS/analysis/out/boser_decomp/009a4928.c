// FUN_009a4928 @ 009a4928 size=148 calls_out=6 calls_in=0
// strings: 

void FUN_009a4928(int *param_1)

{
  FUN_0145742c(param_1 + 0x2b);
  if (-1 < param_1[0x22]) {
    FUN_019bb7e0(param_1[0x22],param_1[0x23]);
  }
  if (param_1[0x25] != -0x80000000) {
    FUN_019bb7e0(param_1[0x25],param_1[0x26]);
  }
  if (param_1[0x28] != -0x80000000) {
    FUN_019bb7e0(param_1[0x28],param_1[0x29]);
  }
  if ((char)param_1[8] != '\x06') {
    FUN_00db4764();
  }
  if ((char)param_1[0xe] != '\x06') {
    FUN_00db4764();
  }
  FUN_00949b70(param_1 + 0x2e);
  FUN_0094a27c(param_1 + 0x14);
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

