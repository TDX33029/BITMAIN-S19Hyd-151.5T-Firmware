// FUN_017c2140 @ 017c2140 size=84 calls_out=1 calls_in=0
// strings: 

void FUN_017c2140(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
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
                    /* WARNING: Could not recover jumptable at 0x017c2190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(piVar2[2] + 0x10))(piVar2);
  return;
}

