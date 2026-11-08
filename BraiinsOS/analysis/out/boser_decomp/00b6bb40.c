// FUN_00b6bb40 @ 00b6bb40 size=112 calls_out=1 calls_in=16
// strings: 

void FUN_00b6bb40(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 7) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  if (*(char *)(param_1 + 7) != '\x03') {
    return;
  }
  piVar2 = (int *)param_1[6];
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
                    /* WARNING: Could not recover jumptable at 0x00b6bbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(piVar2[2] + 0x10))();
  return;
}

