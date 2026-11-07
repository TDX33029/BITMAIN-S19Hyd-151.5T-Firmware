// FUN_0147e308 @ 0147e308 size=1524 calls_out=10 calls_in=1
// strings: 

void FUN_0147e308(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  switch(*(undefined1 *)(param_1 + 0xed)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x60);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    }
    piVar2 = *(int **)(param_1 + 0x68);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
      }
    }
    uVar6 = *(undefined4 *)(param_1 + 0xac);
    puVar5 = *(undefined4 **)(param_1 + 0xb0);
    pcVar4 = (code *)*puVar5;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar6);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
    piVar2 = *(int **)(param_1 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
    }
    piVar2 = *(int **)(param_1 + 0xd4);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0149f9e0(*(undefined4 *)(param_1 + 0xd4));
      }
    }
    FUN_0147f1b4(param_1 + 0xb8);
    goto LAB_0147e728;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x350) == '\x03') {
      if (*(char *)(param_1 + 0x330) == '\x03') {
        if (*(char *)(param_1 + 0x2e4) == '\x03') {
          puVar5 = *(undefined4 **)(param_1 + 0x2c8);
          uVar6 = *(undefined4 *)(param_1 + 0x2c4);
          pcVar4 = (code *)*puVar5;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar6);
          }
          if (puVar5[1] != 0) {
            thunk_FUN_016d3fb4(uVar6);
          }
          *(undefined1 *)(param_1 + 0x2e5) = 0;
        }
        else if (*(char *)(param_1 + 0x2e4) == '\0') {
          puVar5 = *(undefined4 **)(param_1 + 700);
          uVar6 = *(undefined4 *)(param_1 + 0x2b8);
          pcVar4 = (code *)*puVar5;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar6);
          }
          if (puVar5[1] != 0) {
            thunk_FUN_016d3fb4(uVar6);
          }
        }
        piVar2 = *(int **)(param_1 + 0x300);
        if (piVar2 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar2;
            bVar1 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar1);
          *piVar2 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0089ddfc(*(undefined4 *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x304));
          }
        }
        piVar2 = *(int **)(param_1 + 0x2f8);
        *(undefined1 *)(param_1 + 0x32c) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(*(undefined4 *)(param_1 + 0x2f8),*(undefined4 *)(param_1 + 0x2fc));
        }
        *(undefined1 *)(param_1 + 0x32d) = 0;
        FUN_0147eef4(param_1 + 0x2f0);
        *(undefined2 *)(param_1 + 0x32e) = 0;
      }
      else if (*(char *)(param_1 + 0x330) == '\0') {
        puVar5 = *(undefined4 **)(param_1 + 0x324);
        uVar6 = *(undefined4 *)(param_1 + 800);
        pcVar4 = (code *)*puVar5;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar6);
        }
        if (puVar5[1] != 0) {
          thunk_FUN_016d3fb4(uVar6);
        }
        FUN_0147eef4(param_1 + 0x308);
        piVar2 = *(int **)(param_1 + 0x310);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(*(undefined4 *)(param_1 + 0x310),*(undefined4 *)(param_1 + 0x314));
        }
        piVar2 = *(int **)(param_1 + 0x2e8);
        if (piVar2 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar2;
            bVar1 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar1);
          *piVar2 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0089ddfc(*(undefined4 *)(param_1 + 0x2e8),*(undefined4 *)(param_1 + 0x2ec));
          }
        }
      }
      *(undefined1 *)(param_1 + 0x351) = 0;
      FUN_0147e08c(param_1 + 0x344);
      *(undefined1 *)(param_1 + 0x352) = 0;
    }
    else if (*(char *)(param_1 + 0x350) == '\0') {
      puVar5 = *(undefined4 **)(param_1 + 0x33c);
      uVar6 = *(undefined4 *)(param_1 + 0x338);
      pcVar4 = (code *)*puVar5;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar6);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
      piVar2 = *(int **)(param_1 + 0x158);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c));
      }
      piVar2 = *(int **)(param_1 + 0x160);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(*(undefined4 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x164));
        }
      }
    }
    break;
  case 4:
    *(undefined1 *)(param_1 + 0xf1) = 0;
    FUN_01475b10(param_1 + 0x104);
    break;
  case 5:
    if (*(char *)(param_1 + 0x127) == '\0') {
      puVar5 = *(undefined4 **)(param_1 + 0x114);
      uVar6 = *(undefined4 *)(param_1 + 0x110);
      pcVar4 = (code *)*puVar5;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar6);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
    }
    break;
  case 6:
    FUN_01440f70(*(undefined4 *)(param_1 + 0xf8));
    piVar2 = *(int **)(param_1 + 0xf8);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0149e848(*(undefined4 *)(param_1 + 0xf8));
      }
    }
    *(undefined1 *)(param_1 + 0xef) = 0;
    FUN_0147e08c(param_1 + 0xd8);
    goto LAB_0147e648;
  case 7:
    FUN_01440f70(*(undefined4 *)(param_1 + 0xf8));
    piVar2 = *(int **)(param_1 + 0xf8);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0149e848(*(undefined4 *)(param_1 + 0xf8));
      }
    }
    piVar2 = *(int **)(param_1 + 0xe8);
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      puVar5 = (undefined4 *)piVar2[1];
      pcVar4 = (code *)*puVar5;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar3);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(iVar3);
      }
    }
    thunk_FUN_016d3fb4(piVar2);
    *(undefined2 *)(param_1 + 0xee) = 0;
    FUN_0147e08c(param_1 + 0xd8);
LAB_0147e648:
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x60);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  }
  piVar2 = *(int **)(param_1 + 0x68);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    }
  }
  piVar2 = *(int **)(param_1 + 0x80);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  }
  piVar2 = *(int **)(param_1 + 0xd4);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149f9e0(*(undefined4 *)(param_1 + 0xd4));
    }
  }
  FUN_0147f1b4(param_1 + 0xb8);
LAB_0147e728:
  FUN_014217b4(param_1 + 0x70);
  return;
}

