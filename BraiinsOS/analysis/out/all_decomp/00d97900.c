// FUN_00d97900 @ 00d97900 size=184 calls_out=5 calls_in=8
// strings: 

void FUN_00d97900(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0xc;
  if (*piVar1 != 4) {
    FUN_00a7a2c8(piVar1);
    FUN_00a415f0(piVar1);
  }
  if (*param_1 != 2) {
    FUN_00a86e98(param_1);
    if (param_1[3] != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1);
  }
  piVar1 = param_1 + 4;
  if (*piVar1 != 2) {
    FUN_00a86e98(piVar1);
    if (param_1[7] != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(piVar1);
  }
  piVar1 = param_1 + 8;
  if (*piVar1 == 2) {
    return;
  }
  FUN_00a86e98(piVar1);
  if (param_1[0xb] != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(piVar1);
  return;
}

