// FUN_00805268 @ 00805268 size=952 calls_out=8 calls_in=2
// strings: 

void FUN_00805268(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  cVar1 = *(char *)(param_1 + 0x44);
  if (cVar1 == '\0') {
    FUN_007e5878(param_1);
    goto LAB_00805614;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 100) == '\x03') {
      iVar4 = param_1 + 0x54;
    }
    else {
      if (*(char *)(param_1 + 100) != '\0') goto LAB_00805608;
      iVar4 = param_1 + 0x48;
    }
    FUN_007e5878(iVar4);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x8c) == '\x03') {
      piVar3 = *(int **)(param_1 + 0x88);
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar3);
        if (!bVar2) goto LAB_008054a0;
        *piVar3 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_008054a0:
        (**(code **)(piVar3[2] + 0x10))();
      }
      piVar3 = *(int **)(param_1 + 0x80);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x80));
      }
      piVar3 = *(int **)(param_1 + 0x54);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*(undefined4 *)(param_1 + 0x54));
      }
    }
    else if (*(char *)(param_1 + 0x8c) == '\0') {
      piVar3 = *(int **)(param_1 + 0x4c);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x4c));
      }
      piVar3 = *(int **)(param_1 + 0x54);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*(undefined4 *)(param_1 + 0x54));
      }
      FUN_016dea68(*(undefined4 *)(param_1 + 0x60));
      piVar3 = *(int **)(param_1 + 0x58);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(*(undefined4 *)(param_1 + 0x58));
      }
      piVar3 = *(int **)(param_1 + 0x5c);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0127c778(*(undefined4 *)(param_1 + 0x5c));
      }
      FUN_016dea68(*(undefined4 *)(param_1 + 0x6c));
      piVar3 = *(int **)(param_1 + 100);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(*(undefined4 *)(param_1 + 100));
      }
      piVar3 = *(int **)(param_1 + 0x68);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0127c778(*(undefined4 *)(param_1 + 0x68));
      }
      FUN_016dea68(*(undefined4 *)(param_1 + 0x78));
      piVar3 = *(int **)(param_1 + 0x70);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(*(undefined4 *)(param_1 + 0x70));
      }
      piVar3 = *(int **)(param_1 + 0x74);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0127c778(*(undefined4 *)(param_1 + 0x74));
      }
    }
    iVar4 = *(int *)(param_1 + 0x48);
    if (iVar4 != 0) {
      piVar3 = (int *)(iVar4 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      DataMemoryBarrier(0xb);
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
          puVar6 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar2);
          *puVar6 = *puVar6 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar6 = (uint *)(iVar4 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar6;
          bVar2 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar2);
        *puVar6 = uVar7 | 2;
        DataMemoryBarrier(0xb);
        if (uVar7 == 0) {
          iVar5 = *(int *)(iVar4 + 0x18);
          *(undefined4 *)(iVar4 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar2);
          *puVar6 = *puVar6 & 0xfffffffd;
          if (iVar5 != 0) {
            (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar4 + 0x1c));
          }
        }
      }
      piVar3 = *(int **)(param_1 + 0x48);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078cf4c(*(undefined4 *)(param_1 + 0x48));
      }
    }
    *(undefined1 *)(param_1 + 0x46) = 0;
  }
LAB_00805608:
  if (*(char *)(param_1 + 0x45) == '\0') {
    return;
  }
LAB_00805614:
  FUN_007be6b0(param_1 + 0xc);
  return;
}

