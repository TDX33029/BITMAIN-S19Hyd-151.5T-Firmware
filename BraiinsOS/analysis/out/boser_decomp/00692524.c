// FUN_00692524 @ 00692524 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_00692524(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x90);
  if (*piVar2 == -4) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0;
        goto LAB_00692564;
      }
    } while (*piVar2 == -4);
  }
  ClearExclusiveLocal();
  FUN_0131c8c0();
LAB_00692564:
  FUN_00668cb0(param_1);
  return;
}

