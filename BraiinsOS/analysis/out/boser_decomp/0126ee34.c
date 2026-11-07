// FUN_0126ee34 @ 0126ee34 size=80 calls_out=3 calls_in=8
// strings: 

void FUN_0126ee34(int *param_1)

{
  if (*param_1 == 0) {
    FUN_0196afa8(param_1 + 1);
    if (param_1[4] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[4],param_1[5]);
    return;
  }
  if ((char)param_1[2] == '\x06') {
    return;
  }
  FUN_00e0febc(param_1 + 2);
  return;
}

