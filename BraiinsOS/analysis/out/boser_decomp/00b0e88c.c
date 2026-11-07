// FUN_00b0e88c @ 00b0e88c size=92 calls_out=1 calls_in=1
// strings: 

void FUN_00b0e88c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  *param_1 = 0;
  if (piVar2 == (int *)0x0) {
    return;
  }
  FUN_019f5854(piVar2);
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
                    /* WARNING: Could not recover jumptable at 0x00b0e8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(piVar2[2] + 0x10))(piVar2);
  return;
}

