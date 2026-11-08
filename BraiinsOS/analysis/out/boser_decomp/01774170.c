// FUN_01774170 @ 01774170 size=1408 calls_out=16 calls_in=2
// strings: 

void FUN_01774170(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined4 *puVar8;
  
  if (*param_1 == 1) {
    iVar6 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar6 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar6 != 0) {
      FUN_01443048(iVar6,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  uVar3 = param_1[2];
  if (uVar3 == 10 || uVar3 == 9) {
    return;
  }
  iVar6 = 1;
  if (5 < uVar3) {
    iVar6 = uVar3 - 6;
  }
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      return;
    }
    piVar4 = (int *)param_1[0x41];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017844e8(param_1[0x41]);
      }
    }
    FUN_0177266c(param_1 + 0x2e);
    FUN_017739b4(param_1 + 0x1e);
    FUN_01706d0c(param_1 + 0x36);
    piVar4 = (int *)param_1[0x18];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[0x18],param_1[0x19]);
      }
    }
    piVar4 = (int *)param_1[0x34];
    if (piVar4 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x34],param_1[0x35]);
      return;
    }
    return;
  }
  if (uVar3 == 5) {
LAB_017742b0:
    if ((char)param_1[0x11] == '\x02') {
      FUN_01773150(param_1[3]);
      return;
    }
    if ((char)param_1[0x11] == '\x03') {
      return;
    }
    FUN_017724dc();
    return;
  }
  iVar6 = uVar3 - 2;
  if (uVar3 < 2) {
    iVar6 = 0;
  }
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      return;
    }
    if (uVar3 == 2) {
      return;
    }
    iVar6 = param_1[0x28];
    if (iVar6 != 3) {
      if (iVar6 == 1) {
        puVar8 = (undefined4 *)param_1[0x2a];
        iVar6 = param_1[0x29];
        pcVar7 = (code *)*puVar8;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(iVar6);
        }
        if (puVar8[1] != 0) {
          thunk_FUN_01be4678(iVar6);
        }
      }
      else if (iVar6 == 0) {
        FUN_017739b4(param_1 + 0x34);
        FUN_01706d0c(param_1 + 0x29);
      }
    }
    FUN_01773bac(param_1 + 2);
    return;
  }
  if ((char)param_1[0x11] != '\x04') goto LAB_017742b0;
  iVar6 = param_1[3];
  cVar1 = *(char *)(iVar6 + 0xad);
  if (cVar1 == '\0') {
    piVar4 = *(int **)(iVar6 + 0x50);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(iVar6 + 0x50),*(undefined4 *)(iVar6 + 0x54));
      }
    }
    FUN_01139b38(*(undefined4 *)(iVar6 + 0x80),*(undefined4 *)(iVar6 + 0x84));
    piVar4 = *(int **)(iVar6 + 0x78);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(iVar6 + 0x78),*(undefined4 *)(iVar6 + 0x7c));
      }
    }
    piVar4 = *(int **)(iVar6 + 0xa8);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017844e8(*(undefined4 *)(iVar6 + 0xa8));
      }
    }
    FUN_01773d34(iVar6 + 0x8c);
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(iVar6 + 0x2f0) == '\x03') {
        if (*(char *)(iVar6 + 0x2d5) == '\x03') {
          if (*(char *)(iVar6 + 0x29c) == '\x03') {
            FUN_01139b38(*(undefined4 *)(iVar6 + 0x27c),*(undefined4 *)(iVar6 + 0x280));
            *(undefined1 *)(iVar6 + 0x29d) = 0;
          }
          else if (*(char *)(iVar6 + 0x29c) == '\0') {
            FUN_01139b38(*(undefined4 *)(iVar6 + 0x270),*(undefined4 *)(iVar6 + 0x274));
          }
          piVar4 = *(int **)(iVar6 + 0x2b0);
          if (piVar4 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar4;
              bVar2 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar2);
            *piVar4 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_018531c0(*(undefined4 *)(iVar6 + 0x2b0),*(undefined4 *)(iVar6 + 0x2b4));
            }
          }
          FUN_01772d3c(*(undefined4 *)(iVar6 + 0x2a8),*(undefined4 *)(iVar6 + 0x2ac));
          *(undefined1 *)(iVar6 + 0x2d4) = 0;
        }
        else if (*(char *)(iVar6 + 0x2d5) == '\0') {
          FUN_01139b38(*(undefined4 *)(iVar6 + 0x2c8),*(undefined4 *)(iVar6 + 0x2cc));
          FUN_01772d3c(*(undefined4 *)(iVar6 + 0x2b8),*(undefined4 *)(iVar6 + 700));
          piVar4 = *(int **)(iVar6 + 0x2a0);
          if (piVar4 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar4;
              bVar2 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar2);
            *piVar4 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_018531c0(*(undefined4 *)(iVar6 + 0x2a0),*(undefined4 *)(iVar6 + 0x2a4));
            }
          }
        }
        *(undefined1 *)(iVar6 + 0x2f1) = 0;
        FUN_01772778(iVar6 + 0x2e4);
        piVar4 = *(int **)(iVar6 + 0x108);
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(iVar6 + 0x108),*(undefined4 *)(iVar6 + 0x10c));
          }
        }
      }
      else if (*(char *)(iVar6 + 0x2f0) == '\0') {
        piVar4 = *(int **)(iVar6 + 0x108);
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(iVar6 + 0x108),*(undefined4 *)(iVar6 + 0x10c));
          }
        }
        FUN_01139b38(*(undefined4 *)(iVar6 + 0x2d8),*(undefined4 *)(iVar6 + 0x2dc));
      }
    }
    else {
      if (cVar1 != '\x04') goto LAB_017745ec;
      if (*(char *)(iVar6 + 0xd0) == '\0') {
        iVar5 = iVar6 + 0xc4;
LAB_01774528:
        FUN_01772778(iVar5);
      }
      else if ((*(char *)(iVar6 + 0xd0) == '\x03') && (*(char *)(iVar6 + 0xc0) != '\x02')) {
        iVar5 = iVar6 + 0xb8;
        goto LAB_01774528;
      }
      *(undefined2 *)(iVar6 + 0xae) = 0;
    }
    piVar4 = *(int **)(iVar6 + 0x50);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(iVar6 + 0x50),*(undefined4 *)(iVar6 + 0x54));
      }
    }
    piVar4 = *(int **)(iVar6 + 0x78);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(iVar6 + 0x78),*(undefined4 *)(iVar6 + 0x7c));
      }
    }
    piVar4 = *(int **)(iVar6 + 0xa8);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017844e8(*(undefined4 *)(iVar6 + 0xa8));
      }
    }
    FUN_01773d34(iVar6 + 0x8c);
  }
  FUN_014323b0(iVar6 + 0x68);
LAB_017745ec:
  thunk_FUN_01be4678(iVar6);
  return;
}

