// FUN_00a592c0 @ 00a592c0 size=328 calls_out=5 calls_in=2
// strings: 

void FUN_00a592c0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0xc0);
  bVar6 = cVar1 == '\x03';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x84);
  }
  if (!bVar6 || cVar1 != '\x03') goto LAB_00a592dc;
  cVar1 = *(char *)(param_1 + 0xbc);
  bVar6 = cVar1 != '\x03';
  if (!bVar6) {
    cVar1 = *(char *)(param_1 + 0xb8);
  }
  if (bVar6 || cVar1 != '\x03') goto LAB_00a592dc;
  iVar5 = *(int *)(param_1 + 0x98);
  pcVar4 = (char *)(iVar5 + 0xc);
  if (*pcVar4 == '\0') {
    bVar6 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar6) goto LAB_00a59328;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00a59328:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  piVar2 = (int *)(param_1 + 0x9c);
  if (*piVar2 == 0) {
    if (*(int **)(iVar5 + 0x10) == piVar2) {
      piVar3 = *(int **)(param_1 + 0xa0);
      *(int **)(iVar5 + 0x10) = piVar3;
      goto joined_r0x00a59388;
    }
  }
  else {
    piVar3 = *(int **)(param_1 + 0xa0);
    *(int **)(*piVar2 + 4) = piVar3;
joined_r0x00a59388:
    if (piVar3 == (int *)0x0) {
      if (*(int **)(iVar5 + 0x14) != piVar2) goto LAB_00a59398;
      *(int *)(iVar5 + 0x14) = *piVar2;
    }
    else {
      *piVar3 = *piVar2;
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
LAB_00a59398:
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar6 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar6) {
        *pcVar4 = '\0';
        goto LAB_00a593d8;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_00a593d8:
  if (*(int *)(param_1 + 0xa4) != 0) {
    (**(code **)(*(int *)(param_1 + 0xa4) + 0xc))(*(undefined4 *)(param_1 + 0xa8));
  }
LAB_00a592dc:
  FUN_00a07b4c(param_1);
  return;
}

