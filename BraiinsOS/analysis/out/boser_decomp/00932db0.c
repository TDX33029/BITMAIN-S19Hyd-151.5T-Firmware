// FUN_00932db0 @ 00932db0 size=28 calls_out=1 calls_in=1
// strings: 

void FUN_00932db0(int *param_1)

{
  if (*param_1 == 3 && param_1[1] == 0) {
    FUN_00927378(param_1 + 2);
    return;
  }
  if (*param_1 == 2 && param_1[1] == 0) {
    if (param_1[2] < 0) {
      return;
    }
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  }
  FUN_019bb7e0(param_1[0x66],param_1[0x67]);
  if (param_1[0x69] != -0x80000000) {
    FUN_019bb7e0(param_1[0x69],param_1[0x6a]);
  }
  if (param_1[0x6c] != -0x80000000) {
    FUN_019bb7e0(param_1[0x6c],param_1[0x6d]);
  }
  if (param_1[0x6f] != -0x80000000) {
    FUN_019bb7e0(param_1[0x6f],param_1[0x70]);
  }
  if (param_1[0x72] != -0x80000000) {
    FUN_019bb7e0(param_1[0x72],param_1[0x73]);
  }
  FUN_00b9c078(param_1 + 8);
  return;
}

