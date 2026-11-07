// FUN_0174afd4 @ 0174afd4 size=72 calls_out=1 calls_in=3
// strings: 

void FUN_0174afd4(int *param_1)

{
  bool bVar1;
  
  FUN_019f5854();
  if (*param_1 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = 0x84;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
                    /* WARNING: Could not recover jumptable at 0x0174b018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x10))(param_1);
  return;
}

