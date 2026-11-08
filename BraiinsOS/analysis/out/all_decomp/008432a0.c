// FUN_008432a0 @ 008432a0 size=492 calls_out=5 calls_in=1
// strings: 

void FUN_008432a0(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x808) == '\0') {
    FUN_00843d10(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x808) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x7fc) == '\x03') {
    FUN_007da17c(param_1 + 0x7c0);
    *(undefined1 *)(param_1 + 0x7fd) = 0;
    piVar3 = *(int **)(param_1 + 0x804);
    if (*piVar3 != 0xcc) goto LAB_00843338;
LAB_008432f4:
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar3);
    if (bVar2) {
      *piVar3 = 0x84;
      goto LAB_00843348;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x7fc) == '\0') && (*(int *)(param_1 + 0x7b0) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x7b4));
    }
    piVar3 = *(int **)(param_1 + 0x804);
    if (*piVar3 == 0xcc) goto LAB_008432f4;
LAB_00843338:
    ClearExclusiveLocal();
  }
  (**(code **)(piVar3[2] + 0x10))();
LAB_00843348:
  iVar6 = *(int *)(param_1 + 0x800);
  *(undefined4 *)(param_1 + 0x809) = 0;
  DataMemoryBarrier(0xb);
  pcVar4 = (char *)(iVar6 + 0x10);
  *(undefined1 *)(iVar6 + 0x22) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar4;
    bVar2 = (bool)hasExclusiveAccess(pcVar4);
  } while (!bVar2);
  *pcVar4 = '\x01';
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
      *pcVar4 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar6 + 0xc));
    }
  }
  pcVar4 = (char *)(iVar6 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar4;
    bVar2 = (bool)hasExclusiveAccess(pcVar4);
  } while (!bVar2);
  *pcVar4 = '\x01';
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
  piVar3 = *(int **)(param_1 + 0x800);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089dea4(*(undefined4 *)(param_1 + 0x800));
  }
  piVar3 = *(int **)(param_1 + 0x7a4);
  *(undefined1 *)(param_1 + 0x80d) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x7a4));
  }
  *(undefined4 *)(param_1 + 0x80e) = 0;
  return;
}

