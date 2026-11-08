// FUN_0074ac60 @ 0074ac60 size=96 calls_out=1 calls_in=3
// strings: 

void FUN_0074ac60(undefined4 *param_1)

{
  int *piVar1;
  ushort uVar2;
  bool bVar3;
  
  uVar2 = (ushort)*(byte *)(param_1 + 0xc);
  if (uVar2 == 0) {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  bVar3 = uVar2 == 3;
  if (bVar3) {
    uVar2 = *(ushort *)(param_1 + 4);
  }
  if (bVar3 && uVar2 == 3) {
    piVar1 = (int *)param_1[5];
    if (*piVar1 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar3 = (bool)hasExclusiveAccess(piVar1);
      if (bVar3) {
        *piVar1 = 0x84;
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
                    /* WARNING: Could not recover jumptable at 0x0074acbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(piVar1[2] + 0x10))();
    return;
  }
  return;
}

