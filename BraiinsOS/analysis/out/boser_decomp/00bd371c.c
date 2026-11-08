// FUN_00bd371c @ 00bd371c size=112 calls_out=2 calls_in=2
// strings: 

void FUN_00bd371c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_005f76e0(param_1 + 3);
    return;
  }
  if (*(char *)(param_1 + 8) != '\x03') {
    return;
  }
  piVar2 = (int *)param_1[7];
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
                    /* WARNING: Could not recover jumptable at 0x00bd3788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(piVar2[2] + 0x10))();
  return;
}

