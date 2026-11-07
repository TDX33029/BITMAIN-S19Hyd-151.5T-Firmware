// FUN_009d6a4c @ 009d6a4c size=1304 calls_out=16 calls_in=2
// strings: 

void FUN_009d6a4c(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  
  uVar2 = *param_1;
  iVar5 = uVar2 - 2;
  if (uVar2 < 2) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
    if (uVar2 == 2) {
      return;
    }
    if ((char)param_1[0x30] != '\x06') {
      FUN_009d6730();
    }
    FUN_009d67f0(param_1 + 0x27);
    piVar4 = (int *)param_1[0x2e];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a8021c(param_1[0x2e]);
      }
    }
    FUN_017044f0(param_1);
    piVar4 = (int *)param_1[0x1c];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x1c],param_1[0x1d]);
      return;
    }
    return;
  }
  if ((iVar5 != 1) || ((char)param_1[0xf] == '\x03')) {
    return;
  }
  puVar3 = param_1 + 1;
  if ((char)param_1[0xf] != '\x04') {
    if ((char)param_1[0xf] == '\x02') {
      if (*puVar3 != 0) {
        FUN_01443048(*puVar3,param_1[2]);
      }
      if (*(char *)((int)param_1 + 0x19) == '\x02') {
        return;
      }
      FUN_014323b0(param_1 + 3);
      return;
    }
    FUN_00a85efc();
    if (*(char *)((int)param_1 + 0x35) != '\x02') {
      FUN_009d65c0(param_1 + 7);
    }
    FUN_0177266c(puVar3);
    if (param_1[0xe] + 1 < 2) {
      return;
    }
    piVar4 = (int *)(param_1[0xe] + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678();
      return;
    }
    return;
  }
  uVar2 = *puVar3;
  switch(*(undefined1 *)(uVar2 + 0xf1)) {
  case 0:
    FUN_017044f0(uVar2);
    FUN_0183d504(uVar2 + 0x70);
    piVar4 = *(int **)(uVar2 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(uVar2 + 0x90),*(undefined4 *)(uVar2 + 0x94));
    }
    piVar4 = *(int **)(uVar2 + 0xd8);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a8021c(*(undefined4 *)(uVar2 + 0xd8));
      }
    }
    FUN_009d67f0(uVar2 + 0xbc);
    goto LAB_009d6cf4;
  default:
    goto switchD_009d6aa0_caseD_1;
  case 3:
    if (*(char *)(uVar2 + 0x35c) == '\x03') {
      if (*(char *)(uVar2 + 0x348) == '\x03') {
        if (*(char *)(uVar2 + 0x33c) == '\x03') {
          FUN_0183d504(uVar2 + 0x2a8);
          *(undefined1 *)(uVar2 + 0x33d) = 0;
        }
        else if (*(char *)(uVar2 + 0x33c) == '\0') {
          FUN_0183d504(uVar2 + 0x228);
        }
        piVar4 = *(int **)(uVar2 + 0x1b0);
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(uVar2 + 0x1b0),*(undefined4 *)(uVar2 + 0x1b4));
          }
        }
        piVar4 = *(int **)(uVar2 + 0x1a8);
        *(undefined1 *)(uVar2 + 0x349) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(uVar2 + 0x1a8),*(undefined4 *)(uVar2 + 0x1ac));
        }
        *(undefined1 *)(uVar2 + 0x34a) = 0;
        FUN_009d72f0(*(undefined4 *)(uVar2 + 0x1a0),*(undefined4 *)(uVar2 + 0x1a4));
        *(undefined2 *)(uVar2 + 0x34b) = 0;
      }
      else if (*(char *)(uVar2 + 0x348) == '\0') {
        FUN_0183d504(uVar2 + 0x178);
        FUN_009d72f0(*(undefined4 *)(uVar2 + 0x188),*(undefined4 *)(uVar2 + 0x18c));
        piVar4 = *(int **)(uVar2 + 400);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(uVar2 + 400),*(undefined4 *)(uVar2 + 0x194));
        }
        piVar4 = *(int **)(uVar2 + 0x198);
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(uVar2 + 0x198),*(undefined4 *)(uVar2 + 0x19c));
          }
        }
      }
      *(undefined1 *)(uVar2 + 0x35d) = 0;
      FUN_008e00ec(uVar2 + 0x350);
      *(undefined1 *)(uVar2 + 0x35e) = 0;
    }
    else if (*(char *)(uVar2 + 0x35c) == '\0') {
      FUN_0183d504(uVar2 + 0xf8);
      piVar4 = *(int **)(uVar2 + 0x168);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(uVar2 + 0x168),*(undefined4 *)(uVar2 + 0x16c));
      }
      piVar4 = *(int **)(uVar2 + 0x170);
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(uVar2 + 0x170),*(undefined4 *)(uVar2 + 0x174));
        }
      }
    }
    break;
  case 4:
    *(undefined1 *)(uVar2 + 0xf5) = 0;
    FUN_008e039c(uVar2 + 0x104);
    break;
  case 5:
    if (*(char *)(uVar2 + 299) == '\0') {
      FUN_0183d504(uVar2 + 0xf8);
    }
    break;
  case 6:
    FUN_008e0464(uVar2 + 0xf8);
    *(undefined1 *)(uVar2 + 0xf3) = 0;
    FUN_008e00ec(uVar2 + 0xdc);
    goto LAB_009d6c74;
  case 7:
    FUN_008e0464(uVar2 + 0xf8);
    FUN_009d5b2c(uVar2 + 0xec);
    *(undefined2 *)(uVar2 + 0xf2) = 0;
    FUN_008e00ec(uVar2 + 0xdc);
LAB_009d6c74:
    *(undefined1 *)(uVar2 + 0xf4) = 0;
  }
  FUN_017044f0(uVar2);
  piVar4 = *(int **)(uVar2 + 0x90);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(uVar2 + 0x90),*(undefined4 *)(uVar2 + 0x94));
  }
  piVar4 = *(int **)(uVar2 + 0xd8);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a8021c(*(undefined4 *)(uVar2 + 0xd8));
    }
  }
  FUN_009d67f0(uVar2 + 0xbc);
LAB_009d6cf4:
  FUN_014323b0(uVar2 + 0x80);
switchD_009d6aa0_caseD_1:
  thunk_FUN_01be4678(uVar2);
  return;
}

