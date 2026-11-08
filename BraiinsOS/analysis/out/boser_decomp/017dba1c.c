// FUN_017dba1c @ 017dba1c size=164 calls_out=6 calls_in=0
// strings: 

void FUN_017dba1c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (*(char *)(param_1 + 0xe) == '\x02') {
    piVar4 = (int *)*param_1;
    if (*piVar4 != 0) {
      FUN_01443048(*piVar4,piVar4[1]);
    }
    if (*(char *)((int)piVar4 + 0x15) != '\x02') {
      FUN_014323b0(piVar4 + 2);
    }
  }
  else {
    FUN_01816794(param_1);
    FUN_0177262c(param_1 + 6);
    FUN_0177266c(param_1);
    piVar4 = (int *)param_1[0xd];
    if ((int)piVar4 + 1U < 2) {
      return;
    }
    piVar2 = piVar4 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
  }
  thunk_FUN_01be4678(piVar4);
  return;
}

