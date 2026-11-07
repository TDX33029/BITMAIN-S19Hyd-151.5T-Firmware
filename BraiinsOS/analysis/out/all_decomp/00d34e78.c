// FUN_00d34e78 @ 00d34e78 size=1036 calls_out=5 calls_in=2
// strings: 

void FUN_00d34e78(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\0') {
    FUN_00ac9c30(param_1);
    piVar3 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xc));
    }
    piVar3 = *(int **)(param_1 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    goto LAB_00d35018;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x40) == '\x03') {
      iVar4 = param_1 + 0x30;
LAB_00d34fbc:
      FUN_00ac9c30(iVar4);
    }
    else if (*(char *)(param_1 + 0x40) == '\0') {
      iVar4 = param_1 + 0x24;
      goto LAB_00d34fbc;
    }
    cVar1 = *(char *)(param_1 + 0x21);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x78) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x50);
      if (cVar1 == '\x04') {
        FUN_00cefb4c(param_1 + 0x54);
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 == '\0') {
            piVar3 = *(int **)(param_1 + 0x40);
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar3;
              bVar2 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar2);
            *piVar3 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00790cd0(*(undefined4 *)(param_1 + 0x40));
            }
            piVar3 = *(int **)(param_1 + 0x44);
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar3;
              bVar2 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar2);
            *piVar3 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00790cd0(*(undefined4 *)(param_1 + 0x44));
            }
            piVar3 = *(int **)(param_1 + 0x38);
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar3;
              bVar2 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar2);
            *piVar3 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0155edc8(*(undefined4 *)(param_1 + 0x38));
            }
          }
          goto LAB_00d35178;
        }
        FUN_00cefb4c(param_1 + 0x58);
      }
      if (*(char *)(param_1 + 0x51) != '\0') {
        piVar3 = *(int **)(param_1 + 0x48);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0155edc8(*(undefined4 *)(param_1 + 0x48));
        }
      }
      *(undefined1 *)(param_1 + 0x51) = 0;
      if (*(char *)(param_1 + 0x52) != '\0') {
        piVar3 = *(int **)(param_1 + 0x54);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(*(undefined4 *)(param_1 + 0x54));
        }
      }
      *(undefined1 *)(param_1 + 0x52) = 0;
    }
    else if (*(char *)(param_1 + 0x78) == '\0') {
      piVar3 = *(int **)(param_1 + 0x28);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x28));
      }
      piVar3 = *(int **)(param_1 + 0x30);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0x30));
      }
      piVar3 = *(int **)(param_1 + 0x34);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0x34));
      }
    }
LAB_00d35178:
    iVar4 = *(int *)(param_1 + 0x24);
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
      piVar3 = *(int **)(param_1 + 0x24);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078cf4c(*(undefined4 *)(param_1 + 0x24));
      }
    }
    *(undefined1 *)(param_1 + 0x22) = 0;
    cVar1 = *(char *)(param_1 + 0x21);
  }
  if (cVar1 == '\0') {
    return;
  }
  piVar3 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0xc));
  }
  piVar3 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
LAB_00d35018:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

