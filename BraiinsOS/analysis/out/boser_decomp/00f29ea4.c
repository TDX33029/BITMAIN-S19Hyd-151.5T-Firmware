// FUN_00f29ea4 @ 00f29ea4 size=64 calls_out=2 calls_in=4
// strings: 

void FUN_00f29ea4(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 2;
  if (*param_1 == 0 && param_1[1] == 0) {
    if ((char)*piVar1 == '\x04') {
      return;
    }
    FUN_0183a528(piVar1);
    return;
  }
  if (*piVar1 == 0) {
    return;
  }
  FUN_00f80320(*piVar1,param_1[3]);
  return;
}

