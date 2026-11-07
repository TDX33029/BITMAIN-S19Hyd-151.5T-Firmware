// FUN_007c0134 @ 007c0134 size=332 calls_out=1 calls_in=4
// strings: 

void FUN_007c0134(int *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_1;
  DataMemoryBarrier(0xb);
  pcVar3 = (char *)(iVar6 + 0x10);
  *(undefined1 *)(iVar6 + 0x22) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar3;
    bVar2 = (bool)hasExclusiveAccess(pcVar3);
  } while (!bVar2);
  *pcVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar5 = *(int *)(iVar6 + 8);
    *(undefined4 *)(iVar6 + 8) = 0;
    if (iVar5 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar6 + 0x10) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *pcVar3 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar6 + 0xc));
    }
  }
  pcVar3 = (char *)(iVar6 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar3;
    bVar2 = (bool)hasExclusiveAccess(pcVar3);
  } while (!bVar2);
  *pcVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar5 = *(int *)(iVar6 + 0x14);
    *(undefined4 *)(iVar6 + 0x14) = 0;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar6 + 0x18));
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar6 + 0x1c) = 0;
    DataMemoryBarrier(0xb);
  }
  piVar4 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089dea4(*param_1);
  }
  piVar4 = (int *)param_1[1];
  if (*piVar4 != 0xcc) {
    ClearExclusiveLocal();
                    /* WARNING: Could not recover jumptable at 0x007c0278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(piVar4[2] + 0x10))();
    return;
  }
  DataMemoryBarrier(0xb);
  bVar2 = (bool)hasExclusiveAccess(piVar4);
  if (bVar2) {
    *piVar4 = 0x84;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007c0264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(piVar4[2] + 0x10))();
  return;
}

