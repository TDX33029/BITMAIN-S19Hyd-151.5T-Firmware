// FUN_00a09fc0 @ 00a09fc0 size=376 calls_out=9 calls_in=2
// strings: 

void FUN_00a09fc0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0xc9);
  if (cVar1 == '\0') {
    FUN_00b43a70(param_1 + 0x60);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0xd8) == '\x04') {
      cVar1 = *(char *)(param_1 + 0x120);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0x11c);
      }
      if (bVar6 && cVar1 == '\x03') {
        FUN_00a09b58(param_1 + 0xe4);
      }
      FUN_00aa13c0(*(undefined4 *)(param_1 + 0xd4));
    }
    else if ((*(char *)(param_1 + 0xd8) == '\x03') && (*(int *)(param_1 + 0xdc) != 0)) {
      FUN_00aa0a58(*(int *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0),1);
    }
    goto LAB_00a0a110;
  }
  if (cVar1 != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0xf1) == '\x03') {
    FUN_00a0a1bc(param_1 + 0xd0);
    *(undefined1 *)(param_1 + 0xf0) = 0;
    goto LAB_00a0a110;
  }
  if (*(char *)(param_1 + 0xf1) != '\0') goto LAB_00a0a110;
  iVar5 = *(int *)(param_1 + 0xec);
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(iVar5 + 0x44);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    pcVar4 = (char *)(iVar5 + 0x10);
    if (*pcVar4 == '\0') {
      bVar6 = (bool)hasExclusiveAccess(pcVar4);
      if (!bVar6) goto LAB_00a0a0bc;
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00a0a0bc:
      FUN_01280da8(pcVar4);
    }
    FUN_0128236c(pcVar4);
    *(undefined1 *)(iVar5 + 0x2c) = 1;
    FUN_0072a978(iVar5 + 8,pcVar4);
  }
  piVar3 = *(int **)(param_1 + 0xec);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 0xec));
  }
LAB_00a0a110:
  FUN_00b43a70(param_1);
  *(undefined1 *)(param_1 + 200) = 0;
  return;
}

