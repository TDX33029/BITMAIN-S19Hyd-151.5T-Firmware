// FUN_011fd48c @ 011fd48c size=128 calls_out=0 calls_in=2
// strings: 

void FUN_011fd48c(int *param_1,int *param_2)

{
  bool bVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = 0x84;
      goto LAB_011fd4d0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(param_1[2] + 0x10))();
LAB_011fd4d0:
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
                    /* WARNING: Could not recover jumptable at 0x011fd508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[2] + 0x10))(param_2);
  return;
}

