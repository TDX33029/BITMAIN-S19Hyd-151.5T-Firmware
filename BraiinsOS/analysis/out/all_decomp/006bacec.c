// FUN_006bacec @ 006bacec size=192 calls_out=2 calls_in=0
// strings: 

void FUN_006bacec(int param_1,int param_2)

{
  bool bVar1;
  int extraout_r1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(param_1 + 0xc);
  while (piVar4 != (int *)0x0) {
    piVar3 = (int *)piVar4[4];
    if (*piVar4 != 0) {
      param_2 = piVar4[1];
    }
    if (*piVar4 != 0 && param_2 != 0) {
      thunk_FUN_016d3fb4();
    }
    thunk_FUN_016d3fb4(piVar4);
    param_2 = extraout_r1;
    piVar4 = piVar3;
  }
  piVar4 = (int *)*(int *)(param_1 + 0x14);
  while (piVar4 != (int *)0x0) {
    iVar5 = *piVar4;
    piVar3 = (int *)piVar4[1];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar4[1]);
      }
    }
    thunk_FUN_016d3fb4(piVar4);
    piVar4 = (int *)iVar5;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006bada4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
  return;
}

