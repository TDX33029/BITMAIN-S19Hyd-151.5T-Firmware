// FUN_00d0a8b8 @ 00d0a8b8 size=984 calls_out=11 calls_in=3
// strings: 

void FUN_00d0a8b8(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  if (*(char *)(param_1 + 0x32) == '\0') {
    piVar6 = (int *)param_1[0x30];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[0x30]);
    }
    piVar6 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*param_1);
    }
    iVar2 = param_1[0x31];
    if (iVar2 == 0) {
      return;
    }
    piVar6 = (int *)(iVar2 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
        puVar5 = (uint *)(iVar2 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar5 = (uint *)(iVar2 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar5;
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar4 = *(int *)(iVar2 + 0x18);
        *(undefined4 *)(iVar2 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar2 + 0x1c));
        }
      }
    }
    piVar6 = (int *)param_1[0x31];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar2 + -1;
    goto LAB_00d0ac90;
  }
  if (*(char *)(param_1 + 0x32) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 10)) {
  case 0:
    piVar6 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[4]);
    }
    piVar6 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[2]);
    }
  default:
    goto switchD_00d0a8e8_caseD_1;
  case 3:
    if (param_1[0xb] != 0) {
      FUN_00c8204c(param_1[0xb],param_1[0xc],1);
    }
    goto LAB_00d0ab50;
  case 4:
    FUN_00a07b4c(param_1 + 0x12);
    FUN_00d0aea8(param_1 + 0x10);
    FUN_00cef62c(param_1 + 0x2c);
    FUN_00badc78(param_1 + 0xb);
    break;
  case 5:
    if (param_1[0xb] != 0) {
      FUN_00c8204c(param_1[0xb],param_1[0xc],1);
    }
    break;
  case 6:
    uVar8 = param_1[0x12];
    puVar9 = (undefined4 *)param_1[0x13];
    pcVar3 = (code *)*puVar9;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar8);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(uVar8);
    }
    FUN_00badb28(param_1 + 0xb);
    FUN_00c822ec(param_1[9]);
  }
  FUN_00c822ec(param_1[8]);
LAB_00d0ab50:
  piVar6 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(param_1[6]);
  }
  piVar6 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(param_1[5]);
  }
switchD_00d0a8e8_caseD_1:
  iVar2 = param_1[0x31];
  if (iVar2 != 0) {
    piVar6 = (int *)(iVar2 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
        puVar5 = (uint *)(iVar2 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar5 = (uint *)(iVar2 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar5;
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar4 = *(int *)(iVar2 + 0x18);
        *(undefined4 *)(iVar2 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar2 + 0x1c));
        }
      }
    }
    piVar6 = (int *)param_1[0x31];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar2 + -1;
LAB_00d0ac90:
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078cf4c(param_1[0x31]);
      return;
    }
  }
  return;
}

