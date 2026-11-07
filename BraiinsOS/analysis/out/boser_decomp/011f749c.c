// FUN_011f749c @ 011f749c size=148 calls_out=7 calls_in=2
// strings: 

void FUN_011f749c(int *param_1)

{
  int *piVar1;
  
  if (*param_1 == 3) {
    piVar1 = param_1 + 1;
    FUN_019dd164(piVar1);
    if (*piVar1 != 2) {
      FUN_010a813c(piVar1);
    }
    FUN_019d87c0(param_1[8],param_1[9]);
    return;
  }
  FUN_019f6c28(param_1);
  if (*param_1 == 2) {
    return;
  }
  FUN_010a813c(param_1);
  FUN_019df838(param_1 + 7);
  if (param_1[10] != -1) {
    FUN_01bf01d6();
  }
  FUN_0179995c(param_1 + 7);
  return;
}

