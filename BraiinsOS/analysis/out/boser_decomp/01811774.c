// FUN_01811774 @ 01811774 size=104 calls_out=3 calls_in=0
// strings: 

void FUN_01811774(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01436864(*(undefined4 *)(param_1 + 0x2c));
    }
  }
  FUN_01811820(param_1);
  FUN_0178ead4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x018117d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x1c) + 0x10))
            (param_1 + 0x28,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return;
}

