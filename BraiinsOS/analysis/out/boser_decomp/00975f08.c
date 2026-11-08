// FUN_00975f08 @ 00975f08 size=120 calls_out=6 calls_in=0
// strings: 

void FUN_00975f08(int *param_1)

{
  if (*param_1 == 3) {
    FUN_00949bc0(param_1 + 1);
    return;
  }
  FUN_019bb7e0(param_1[0x20],param_1[0x21]);
  FUN_019bb7e0(param_1[0x23],param_1[0x24]);
  FUN_0196afa8(param_1 + 0x29);
  if ((char)param_1[0x12] != '\x06') {
    FUN_00db4764();
  }
  FUN_019bb7e0(param_1[0x26],param_1[0x27]);
  FUN_00975fd8(param_1);
  if (param_1[0x18] == 0) {
    return;
  }
  FUN_01ada488(param_1 + 0x18);
  return;
}

