// FUN_007ae0bc @ 007ae0bc size=76 calls_out=4 calls_in=1
// strings: 

void FUN_007ae0bc(int *param_1)

{
  int *piVar1;
  
  FUN_007af1e8(param_1);
  if (*param_1 != 0 || param_1[1] != 0) {
    piVar1 = param_1 + 2;
    if (*piVar1 == 0) {
      piVar1 = param_1 + 4;
    }
    FUN_01139b38(*piVar1,piVar1[1]);
  }
  FUN_01340e1c(param_1[0x40e]);
  FUN_019bb7e0(param_1[0x410],param_1[0x411]);
  return;
}

