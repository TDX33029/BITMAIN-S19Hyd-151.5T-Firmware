// FUN_00b71be0 @ 00b71be0 size=88 calls_out=1 calls_in=84
// strings: 

void FUN_00b71be0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 4) != '\x03') {
    return;
  }
  piVar2 = (int *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x00b71c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(piVar2[2] + 0x10))();
  return;
}

