// FUN_007bfc84 @ 007bfc84 size=848 calls_out=5 calls_in=2
// strings: 

void FUN_007bfc84(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\0') {
    FUN_00b336f8(param_1);
    goto LAB_007bffc8;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x40) == '\x03') {
      iVar5 = param_1 + 0x30;
    }
    else {
      if (*(char *)(param_1 + 0x40) != '\0') goto LAB_007bffbc;
      iVar5 = param_1 + 0x24;
    }
    FUN_00b336f8(iVar5);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x44) == '\x03') {
      piVar3 = *(int **)(param_1 + 0x40);
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar3);
        if (!bVar2) goto LAB_007bfdb8;
        *piVar3 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_007bfdb8:
        (**(code **)(piVar3[2] + 0x10))();
      }
      piVar3 = *(int **)(param_1 + 0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x38));
      }
    }
    else if (*(char *)(param_1 + 0x44) == '\0') {
      piVar3 = *(int **)(param_1 + 0x28);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x28));
      }
      iVar5 = *(int *)(param_1 + 0x30);
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
        iVar7 = *(int *)(iVar5 + 8);
        *(undefined4 *)(iVar5 + 8) = 0;
        if (iVar7 == 0) {
          DataMemoryBarrier(0xb);
          *(undefined1 *)(iVar5 + 0x10) = 0;
          DataMemoryBarrier(0xb);
        }
        else {
          DataMemoryBarrier(0xb);
          *pcVar4 = '\0';
          DataMemoryBarrier(0xb);
          (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar5 + 0xc));
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
        iVar7 = *(int *)(iVar5 + 0x14);
        *(undefined4 *)(iVar5 + 0x14) = 0;
        if (iVar7 != 0) {
          (**(code **)(iVar7 + 0xc))(*(undefined4 *)(iVar5 + 0x18));
        }
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar5 + 0x1c) = 0;
        DataMemoryBarrier(0xb);
      }
      piVar3 = *(int **)(param_1 + 0x30);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089dea4(*(undefined4 *)(param_1 + 0x30));
      }
      piVar3 = *(int **)(param_1 + 0x34);
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar3);
        if (bVar2) {
          *piVar3 = 0x84;
          goto LAB_007bfec0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar3[2] + 0x10))();
    }
LAB_007bfec0:
    iVar5 = *(int *)(param_1 + 0x24);
    if (iVar5 != 0) {
      piVar3 = (int *)(iVar5 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar7 + -1;
      DataMemoryBarrier(0xb);
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar5 + 0x10)) {
          puVar6 = (uint *)(iVar5 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar2);
          *puVar6 = *puVar6 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar6 = (uint *)(iVar5 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar8 = *puVar6;
          bVar2 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar2);
        *puVar6 = uVar8 | 2;
        DataMemoryBarrier(0xb);
        if (uVar8 == 0) {
          iVar7 = *(int *)(iVar5 + 0x18);
          *(undefined4 *)(iVar5 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar2);
          *puVar6 = *puVar6 & 0xfffffffd;
          if (iVar7 != 0) {
            (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar5 + 0x1c));
          }
        }
      }
      piVar3 = *(int **)(param_1 + 0x24);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078cf4c(*(undefined4 *)(param_1 + 0x24));
      }
    }
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
LAB_007bffbc:
  if (*(char *)(param_1 + 0x21) == '\0') {
    return;
  }
LAB_007bffc8:
  FUN_007c0134(param_1 + 0xc);
  return;
}

