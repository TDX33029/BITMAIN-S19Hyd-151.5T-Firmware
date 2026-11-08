// FUN_010422ac @ 010422ac size=208 calls_out=2 calls_in=0
// strings: 

void FUN_010422ac(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  
  puVar2 = *(uint **)(param_1 + 0xc);
  while (puVar2 != (uint *)0x0) {
    puVar5 = (uint *)puVar2[0xb];
    if ((*puVar2 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(puVar2[1]);
    }
    thunk_FUN_016d3fb4(puVar2);
    puVar2 = puVar5;
  }
  piVar6 = (int *)*(int *)(param_1 + 0x14);
  while (piVar6 != (int *)0x0) {
    iVar7 = *piVar6;
    piVar3 = (int *)piVar6[1];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar6[1]);
      }
    }
    thunk_FUN_016d3fb4(piVar6);
    piVar6 = (int *)iVar7;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01042374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
  return;
}

