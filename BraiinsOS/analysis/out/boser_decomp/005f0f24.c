// FUN_005f0f24 @ 005f0f24 size=76 calls_out=1 calls_in=6
// strings: 

void FUN_005f0f24(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x50);
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (bVar1) {
      *piVar2 = 0x84;
      goto LAB_005f0f64;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar2[2] + 0x10))();
LAB_005f0f64:
  FUN_01431b40(param_1);
  return;
}

