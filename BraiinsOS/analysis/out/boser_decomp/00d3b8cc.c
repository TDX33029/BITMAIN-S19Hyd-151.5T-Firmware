// FUN_00d3b8cc @ 00d3b8cc size=144 calls_out=1 calls_in=1
// strings: 

void FUN_00d3b8cc(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (param_1[0x18] != -0x80000000) {
    FUN_0132b958(param_1[0x18],param_1[0x19],8,0x28);
  }
  if (param_1[0x22] != -0x80000000) {
    FUN_0132b958(param_1[0x22],param_1[0x23],8,0x28);
  }
  if (param_1[0x2c] != -0x80000000) {
    FUN_0132b958(param_1[0x2c],param_1[0x2d],8,0x28);
  }
  if (param_1[0x36] == -0x80000000) {
    return;
  }
  FUN_0132b958(param_1[0x36],param_1[0x37],8,0x28);
  return;
}

