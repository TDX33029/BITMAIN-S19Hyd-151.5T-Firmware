// FUN_00d34ddc @ 00d34ddc size=120 calls_out=1 calls_in=3
// strings: 

void FUN_00d34ddc(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x38) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x34);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x30);
    }
    if (bVar3 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x2c) != '\x03') {
        if (*(char *)(param_1 + 0x2c) == '\0') {
          FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
          return;
        }
        return;
      }
      piVar2 = *(int **)(param_1 + 0x28);
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar3 = (bool)hasExclusiveAccess(piVar2);
        if (bVar3) {
          *piVar2 = 0x84;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
                    /* WARNING: Could not recover jumptable at 0x00d34e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar2[2] + 0x10))();
      return;
    }
  }
  return;
}

