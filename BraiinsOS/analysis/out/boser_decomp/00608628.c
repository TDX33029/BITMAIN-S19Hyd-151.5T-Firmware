// FUN_00608628 @ 00608628 size=92 calls_out=1 calls_in=0
// strings: 

void FUN_00608628(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_5f;
  
  local_5f = 0;
  local_68 = param_1;
  uStack_64 = param_2;
  piVar2 = (int *)FUN_010a27f4(&local_68);
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
                    /* WARNING: Could not recover jumptable at 0x00608680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(piVar2[2] + 0x10))();
  return;
}

