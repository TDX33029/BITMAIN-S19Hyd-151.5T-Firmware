// FUN_00d791a0 @ 00d791a0 size=44 calls_out=2 calls_in=2
// strings: 

void FUN_00d791a0(uint *param_1)

{
  if ((*param_1 & 7) == 3) {
    FUN_0132b958(param_1[2],param_1[3],8,0x78);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_005f6588();
  return;
}

