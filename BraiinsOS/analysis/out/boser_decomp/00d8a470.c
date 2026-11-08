// FUN_00d8a470 @ 00d8a470 size=80 calls_out=2 calls_in=2
// strings: 

void FUN_00d8a470(uint *param_1)

{
  if ((*param_1 & 7) == 3) {
    FUN_0132b958(param_1[2],param_1[3],8,0x48);
    FUN_0132b958(param_1[5],param_1[6],8,0x48);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_005f6588();
  return;
}

