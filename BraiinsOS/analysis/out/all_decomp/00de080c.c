// FUN_00de080c @ 00de080c size=356 calls_out=5 calls_in=5
// strings: 

void FUN_00de080c(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0x58);
  bVar6 = cVar1 == '\x03';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x1c);
  }
  if (!bVar6 || cVar1 != '\x03') goto LAB_00de0828;
  cVar1 = *(char *)(param_1 + 0x54);
  bVar6 = cVar1 != '\x03';
  if (!bVar6) {
    cVar1 = *(char *)(param_1 + 0x50);
  }
  if (bVar6 || cVar1 != '\x03') goto LAB_00de0828;
  iVar5 = *(int *)(param_1 + 0x30);
  pcVar4 = (char *)(iVar5 + 0xc);
  if (*pcVar4 == '\0') {
    bVar6 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar6) goto LAB_00de0890;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00de0890:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  piVar2 = (int *)(param_1 + 0x34);
  if (*piVar2 == 0) {
    if (*(int **)(iVar5 + 0x10) == piVar2) {
      piVar3 = *(int **)(param_1 + 0x38);
      *(int **)(iVar5 + 0x10) = piVar3;
      goto joined_r0x00de08f0;
    }
  }
  else {
    piVar3 = *(int **)(param_1 + 0x38);
    *(int **)(*piVar2 + 4) = piVar3;
joined_r0x00de08f0:
    if (piVar3 == (int *)0x0) {
      if (*(int **)(iVar5 + 0x14) != piVar2) goto LAB_00de0900;
      *(int *)(iVar5 + 0x14) = *piVar2;
    }
    else {
      *piVar3 = *piVar2;
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
LAB_00de0900:
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar6 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar6) {
        *pcVar4 = '\0';
        goto LAB_00de0940;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_00de0940:
  if (*(int *)(param_1 + 0x3c) != 0) {
    (**(code **)(*(int *)(param_1 + 0x3c) + 0xc))(*(undefined4 *)(param_1 + 0x40));
  }
LAB_00de0828:
  FUN_0163bdc0(param_1 + 0x60);
  if (*(int *)(param_1 + 0x70) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00de0848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x70) + 0xc))(*(undefined4 *)(param_1 + 0x74));
  return;
}

