// FUN_00741144 @ 00741144 size=128 calls_out=1 calls_in=5
// strings: 

void FUN_00741144(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 2) == '\0') {
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db648(*param_1);
      return;
    }
  }
  else if (*(char *)(param_1 + 2) == '\x03') {
    piVar2 = (int *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x007411c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(piVar2[2] + 0x10))();
    return;
  }
  return;
}

