// FUN_01214c9c @ 01214c9c size=100 calls_out=1 calls_in=3
// strings: 

void FUN_01214c9c(int *param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 - 2U < 2) {
    return;
  }
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005342b4,0x79,&DAT_01d307b8);
  }
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
                    /* WARNING: Could not recover jumptable at 0x01214ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x10))();
  return;
}

