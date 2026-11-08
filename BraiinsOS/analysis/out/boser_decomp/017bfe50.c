// FUN_017bfe50 @ 017bfe50 size=1380 calls_out=15 calls_in=2
// strings: 

void FUN_017bfe50(int *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int unaff_r4;
  undefined4 *puVar7;
  bool bVar8;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    bVar8 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r4 = param_1[4];
      bVar8 = unaff_r4 == 0;
    }
    if (!bVar8) {
      puVar7 = (undefined4 *)param_1[5];
      pcVar6 = (code *)*puVar7;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(unaff_r4);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_01be4678(unaff_r4);
        return;
      }
    }
    return;
  }
  uVar2 = param_1[2];
  if (uVar2 == 10 || uVar2 == 9) {
    return;
  }
  iVar5 = 1;
  if (5 < uVar2) {
    iVar5 = uVar2 - 6;
  }
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      return;
    }
    piVar3 = (int *)param_1[0x41];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar8 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar8);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017844e8(param_1[0x41]);
      }
    }
    FUN_0177266c(param_1 + 0x2e);
    FUN_017739b4(param_1 + 0x1e);
    FUN_01706d0c(param_1 + 0x36);
    piVar3 = (int *)param_1[0x18];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar8 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar8);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[0x18],param_1[0x19]);
      }
    }
    piVar3 = (int *)param_1[0x34];
    if (piVar3 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar8 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar8);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x34],param_1[0x35]);
      return;
    }
    return;
  }
  if (uVar2 == 5) {
LAB_017bfe34:
    if ((char)param_1[0x11] == '\x02') {
      FUN_017851fc();
      return;
    }
    if ((char)param_1[0x11] == '\x03') {
      return;
    }
    FUN_017724dc();
    return;
  }
  iVar5 = uVar2 - 2;
  if (uVar2 < 2) {
    iVar5 = 0;
  }
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      return;
    }
    if (uVar2 == 2) {
      return;
    }
    iVar5 = param_1[0x28];
    if (iVar5 != 3) {
      if (iVar5 == 1) {
        iVar5 = param_1[0x29];
        puVar7 = (undefined4 *)param_1[0x2a];
        pcVar6 = (code *)*puVar7;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(iVar5);
        }
        if (puVar7[1] != 0) {
          thunk_FUN_01be4678(iVar5);
        }
      }
      else if (iVar5 == 0) {
        FUN_017739b4(param_1 + 0x34);
        FUN_01706d0c(param_1 + 0x29);
      }
    }
    FUN_01773bac(param_1 + 2);
    return;
  }
  if ((char)param_1[0x11] != '\x04') goto LAB_017bfe34;
  iVar5 = param_1[3];
  cVar1 = *(char *)(iVar5 + 0xad);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(iVar5 + 0x50);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar8 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar8);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(iVar5 + 0x50),*(undefined4 *)(iVar5 + 0x54));
      }
    }
    FUN_01139b38(*(undefined4 *)(iVar5 + 0x80),*(undefined4 *)(iVar5 + 0x84));
    piVar3 = *(int **)(iVar5 + 0x78);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar8 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar8);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(iVar5 + 0x78),*(undefined4 *)(iVar5 + 0x7c));
      }
    }
    piVar3 = *(int **)(iVar5 + 0xa8);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar8 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar8);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017844e8(*(undefined4 *)(iVar5 + 0xa8));
      }
    }
    FUN_01773d34(iVar5 + 0x8c);
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(iVar5 + 0x2f0) == '\x03') {
        if (*(char *)(iVar5 + 0x2d5) == '\x03') {
          if (*(char *)(iVar5 + 0x29c) == '\x03') {
            FUN_01139b38(*(undefined4 *)(iVar5 + 0x27c),*(undefined4 *)(iVar5 + 0x280));
            *(undefined1 *)(iVar5 + 0x29d) = 0;
          }
          else if (*(char *)(iVar5 + 0x29c) == '\0') {
            FUN_01139b38(*(undefined4 *)(iVar5 + 0x270),*(undefined4 *)(iVar5 + 0x274));
          }
          piVar3 = *(int **)(iVar5 + 0x2b0);
          if (piVar3 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar3;
              bVar8 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar8);
            *piVar3 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_018531c0(*(undefined4 *)(iVar5 + 0x2b0),*(undefined4 *)(iVar5 + 0x2b4));
            }
          }
          FUN_01772d3c(*(undefined4 *)(iVar5 + 0x2a8),*(undefined4 *)(iVar5 + 0x2ac));
          *(undefined1 *)(iVar5 + 0x2d4) = 0;
        }
        else if (*(char *)(iVar5 + 0x2d5) == '\0') {
          FUN_01139b38(*(undefined4 *)(iVar5 + 0x2c8),*(undefined4 *)(iVar5 + 0x2cc));
          FUN_01772d3c(*(undefined4 *)(iVar5 + 0x2b8),*(undefined4 *)(iVar5 + 700));
          piVar3 = *(int **)(iVar5 + 0x2a0);
          if (piVar3 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar3;
              bVar8 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar8);
            *piVar3 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_018531c0(*(undefined4 *)(iVar5 + 0x2a0),*(undefined4 *)(iVar5 + 0x2a4));
            }
          }
        }
        *(undefined1 *)(iVar5 + 0x2f1) = 0;
        FUN_01772778(iVar5 + 0x2e4);
        piVar3 = *(int **)(iVar5 + 0x108);
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar8 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar8);
          *piVar3 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(iVar5 + 0x108),*(undefined4 *)(iVar5 + 0x10c));
          }
        }
      }
      else if (*(char *)(iVar5 + 0x2f0) == '\0') {
        piVar3 = *(int **)(iVar5 + 0x108);
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar8 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar8);
          *piVar3 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(iVar5 + 0x108),*(undefined4 *)(iVar5 + 0x10c));
          }
        }
        FUN_01139b38(*(undefined4 *)(iVar5 + 0x2d8),*(undefined4 *)(iVar5 + 0x2dc));
      }
    }
    else {
      if (cVar1 != '\x04') goto LAB_017bf8d8;
      if (*(char *)(iVar5 + 0xd0) == '\0') {
        iVar4 = iVar5 + 0xc4;
LAB_017bf814:
        FUN_01772778(iVar4);
      }
      else if ((*(char *)(iVar5 + 0xd0) == '\x03') && (*(char *)(iVar5 + 0xc0) != '\x02')) {
        iVar4 = iVar5 + 0xb8;
        goto LAB_017bf814;
      }
      *(undefined2 *)(iVar5 + 0xae) = 0;
    }
    piVar3 = *(int **)(iVar5 + 0x50);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar8 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar8);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(iVar5 + 0x50),*(undefined4 *)(iVar5 + 0x54));
      }
    }
    piVar3 = *(int **)(iVar5 + 0x78);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar8 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar8);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(iVar5 + 0x78),*(undefined4 *)(iVar5 + 0x7c));
      }
    }
    piVar3 = *(int **)(iVar5 + 0xa8);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar8 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar8);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017844e8(*(undefined4 *)(iVar5 + 0xa8));
      }
    }
    FUN_01773d34(iVar5 + 0x8c);
  }
  FUN_014323b0(iVar5 + 0x68);
LAB_017bf8d8:
  thunk_FUN_01be4678(iVar5);
  return;
}

