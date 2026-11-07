// FUN_00bd0524 @ 00bd0524 size=108 calls_out=2 calls_in=2
// strings: 

void FUN_00bd0524(int *param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (*param_1 == 1) {
    FUN_00bd05a8(param_1 + 2);
  }
  else if (*param_1 == 0) {
    piVar2 = (int *)param_1[2];
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        goto LAB_00bd0584;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_00bd0584:
  FUN_005f3364(param_1 + 6);
  return;
}

