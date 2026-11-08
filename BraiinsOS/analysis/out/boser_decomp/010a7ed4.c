// FUN_010a7ed4 @ 010a7ed4 size=104 calls_out=3 calls_in=9
// strings: 

void FUN_010a7ed4(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0xc;
  if (*piVar1 != 4) {
    FUN_019eaadc(piVar1);
    FUN_011f749c(piVar1);
  }
  if (*param_1 != 2) {
    FUN_007372d8(param_1);
  }
  if (param_1[4] != 2) {
    FUN_007372d8();
  }
  if (param_1[8] == 2) {
    return;
  }
  FUN_007372d8(param_1 + 8);
  return;
}

