// FUN_0118eb98 @ 0118eb98 size=172 calls_out=6 calls_in=1
// strings: 

void FUN_0118eb98(uint *param_1)

{
  if ((*param_1 & 3) != 2) {
    if (*param_1 == 3) {
      return;
    }
    if (param_1[6] != 0x80000000) {
      FUN_019bb7e0(param_1[6],param_1[7]);
    }
    if (param_1[9] != 0x80000000) {
      FUN_019bb7e0(param_1[9],param_1[10]);
    }
    if (param_1[0xc] != 0x80000000) {
      FUN_019bb7e0(param_1[0xc],param_1[0xd]);
    }
  }
  if (param_1[0xb0] != 0x80000000) {
    FUN_0132b958(param_1[0xb0],param_1[0xb1],8,0x30);
  }
  FUN_00855f74(param_1 + 0xb3);
  FUN_00855fc4(param_1 + 0x30);
  if (param_1[0x46] != 2 || param_1[0x47] != 0) {
    FUN_00b9a764();
  }
  FUN_00856028(param_1 + 0xaa);
  FUN_019bb7e0(param_1[0xad],param_1[0xae]);
  return;
}

