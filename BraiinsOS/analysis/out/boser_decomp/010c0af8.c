// FUN_010c0af8 @ 010c0af8 size=76 calls_out=3 calls_in=0
// strings: 

void FUN_010c0af8(int *param_1)

{
  if (*param_1 == 3 && param_1[1] == 0) {
    FUN_005f6588(param_1 + 2);
    return;
  }
  FUN_0142e6dc(param_1);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_005f6588(param_1 + 0x12);
  }
  FUN_0178e884(param_1[0x2e]);
  return;
}

