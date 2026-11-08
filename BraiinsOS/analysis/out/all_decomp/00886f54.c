// FUN_00886f54 @ 00886f54 size=508 calls_out=2 calls_in=2
// strings: 

void FUN_00886f54(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 7) == '\0') {
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*param_1);
    }
    iVar5 = param_1[2];
    DataMemoryBarrier(0xb);
    pcVar4 = (char *)(iVar5 + 0x10);
    *(undefined1 *)(iVar5 + 0x22) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar4;
      bVar2 = (bool)hasExclusiveAccess(pcVar4);
    } while (!bVar2);
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar6 = *(int *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 8) = 0;
      if (iVar6 == 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar5 + 0x10) = 0;
        DataMemoryBarrier(0xb);
      }
      else {
        DataMemoryBarrier(0xb);
        *pcVar4 = '\0';
        DataMemoryBarrier(0xb);
        (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar5 + 0xc));
      }
    }
    pcVar4 = (char *)(iVar5 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar4;
      bVar2 = (bool)hasExclusiveAccess(pcVar4);
    } while (!bVar2);
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar6 = *(int *)(iVar5 + 0x14);
      *(undefined4 *)(iVar5 + 0x14) = 0;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar5 + 0x18));
      }
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar5 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
    }
    piVar3 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089dea4(param_1[2]);
    }
    piVar3 = (int *)param_1[3];
    if (*piVar3 != 0xcc) {
      ClearExclusiveLocal();
                    /* WARNING: Could not recover jumptable at 0x0088714c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar3[2] + 0x10))();
      return;
    }
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar3);
    if (bVar2) {
      *piVar3 = 0x84;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00887134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(piVar3[2] + 0x10))();
    return;
  }
  if (*(char *)(param_1 + 7) != '\x03') {
    return;
  }
  piVar3 = (int *)param_1[6];
  if (*piVar3 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar3);
    if (bVar2) {
      *piVar3 = 0x84;
      goto LAB_00887040;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar3[2] + 0x10))();
LAB_00887040:
  piVar3 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(param_1[4]);
    return;
  }
  return;
}

