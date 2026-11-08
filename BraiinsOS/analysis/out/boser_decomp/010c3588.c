// FUN_010c3588 @ 010c3588 size=44 calls_out=2 calls_in=1
// strings: 

void FUN_010c3588(uint *param_1)

{
  if ((*param_1 & 7) == 4) {
    return;
  }
  if (*param_1 == 3) {
    FUN_0132b958(param_1[2],param_1[3],8,0x78);
    return;
  }
  FUN_005f6588();
  return;
}

