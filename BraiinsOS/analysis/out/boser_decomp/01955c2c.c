// FUN_01955c2c @ 01955c2c size=104 calls_out=3 calls_in=3
// strings: 

void FUN_01955c2c(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0xc;
  if (*piVar1 != 4) {
    FUN_019eaadc(piVar1);
    FUN_01955dec(piVar1);
  }
  if (*param_1 != 2) {
    FUN_01955d68(param_1);
  }
  if (param_1[4] != 2) {
    FUN_01955d68();
  }
  if (param_1[8] == 2) {
    return;
  }
  FUN_01955d68(param_1 + 8);
  return;
}

