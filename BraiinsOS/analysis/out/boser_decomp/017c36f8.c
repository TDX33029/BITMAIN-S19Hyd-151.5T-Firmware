// FUN_017c36f8 @ 017c36f8 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_017c36f8(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 2;
  if (*piVar1 == 4 && param_1[3] == 0) {
    FUN_0142e6dc();
    FUN_0178e884(param_1[0x14]);
    FUN_017c37dc(param_1 + 0x16);
    return;
  }
  FUN_0178e78c(*param_1);
  if (*piVar1 == 3 && param_1[3] == 0) {
    return;
  }
  FUN_017c3a0c(piVar1);
  return;
}

