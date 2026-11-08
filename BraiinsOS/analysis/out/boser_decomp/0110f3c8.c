// FUN_0110f3c8 @ 0110f3c8 size=88 calls_out=1 calls_in=2
// strings: 

void FUN_0110f3c8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      FUN_00bd05a8(param_1 + 2);
      return;
    }
    return;
  }
  piVar2 = (int *)param_1[2];
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (bVar1) {
      *piVar2 = 0x84;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
                    /* WARNING: Could not recover jumptable at 0x0110f41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(piVar2[2] + 0x10))();
  return;
}

