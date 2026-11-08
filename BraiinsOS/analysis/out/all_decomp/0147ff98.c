// FUN_0147ff98 @ 0147ff98 size=164 calls_out=2 calls_in=0
// strings: 

void FUN_0147ff98(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = *(int **)(param_1 + 0xc);
  while (piVar2 != (int *)0x0) {
    piVar2 = (int *)*piVar2;
    thunk_FUN_016d3fb4();
  }
  piVar2 = (int *)*(int *)(param_1 + 0x14);
  while (piVar2 != (int *)0x0) {
    iVar5 = *piVar2;
    piVar3 = (int *)piVar2[1];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar2[1]);
      }
    }
    thunk_FUN_016d3fb4(piVar2);
    piVar2 = (int *)iVar5;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01480034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
  return;
}

