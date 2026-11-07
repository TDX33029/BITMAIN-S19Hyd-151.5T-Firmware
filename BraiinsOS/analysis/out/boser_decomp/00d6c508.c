// FUN_00d6c508 @ 00d6c508 size=44 calls_out=2 calls_in=2
// strings: 

void FUN_00d6c508(uint *param_1)

{
  if ((*param_1 & 7) == 3) {
    FUN_0132b958(param_1[10],param_1[0xb],8,0x20);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_005f6588();
  return;
}

