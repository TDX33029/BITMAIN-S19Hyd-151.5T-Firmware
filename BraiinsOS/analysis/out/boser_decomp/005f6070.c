// FUN_005f6070 @ 005f6070 size=108 calls_out=2 calls_in=2
// strings: 

void FUN_005f6070(int *param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (*param_1 == 1) {
    FUN_005f3588(param_1 + 2);
  }
  else if (*param_1 == 0) {
    piVar2 = (int *)param_1[2];
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        goto LAB_005f60d0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_005f60d0:
  FUN_005f3364(param_1 + 6);
  return;
}

