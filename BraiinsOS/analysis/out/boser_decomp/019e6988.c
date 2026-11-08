// FUN_019e6988 @ 019e6988 size=76 calls_out=1 calls_in=3
// strings: 

void FUN_019e6988(int param_1,int *param_2)

{
  bool bVar1;
  
  if (param_1 == -0x80000000) {
    return;
  }
  if (param_1 != -0x7fffffff) {
    FUN_019bb7e0();
    return;
  }
  if (*param_2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(param_2);
    if (bVar1) {
      *param_2 = 0x84;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
                    /* WARNING: Could not recover jumptable at 0x019e69d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[2] + 0x10))(param_2);
  return;
}

