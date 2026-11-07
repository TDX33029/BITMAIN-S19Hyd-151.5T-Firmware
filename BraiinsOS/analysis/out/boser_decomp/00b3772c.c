// FUN_00b3772c @ 00b3772c size=108 calls_out=5 calls_in=0
// strings: 

void FUN_00b3772c(int *param_1)

{
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_019bb7e0(param_1[0x56],param_1[0x57]);
  FUN_00a9586c(param_1);
  FUN_00b9a82c(param_1 + 0x14);
  if (param_1[0x59] != -0x80000000) {
    FUN_0132b958(param_1[0x59],param_1[0x5a],8,0x18);
  }
  if (param_1[0x5c] == -0x80000000) {
    return;
  }
  FUN_00b375bc(param_1 + 0x5c);
  return;
}

