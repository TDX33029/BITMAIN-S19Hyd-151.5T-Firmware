// FUN_0193cfd0 @ 0193cfd0 size=1196 calls_out=10 calls_in=5
// strings: 

void FUN_0193cfd0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 8) == '\x04') {
    switch(*(undefined1 *)(param_1 + 0x101)) {
    case 0:
      FUN_005fb2fc(param_1 + 0x5c);
      return;
    default:
      goto switchD_0193cff8_caseD_1;
    case 3:
      cVar1 = *(char *)(param_1 + 0x130);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 300);
      }
      if (bVar7 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x10c);
      }
      break;
    case 4:
      FUN_01139b38(*(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x108));
      FUN_019f8c54(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
      break;
    case 5:
      cVar1 = *(char *)(param_1 + 0x130);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 300);
      }
      if (bVar7 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x10c);
      }
      break;
    case 6:
      puVar6 = *(undefined4 **)(param_1 + 0x108);
      uVar5 = *(undefined4 *)(param_1 + 0x104);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar5);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_01be4678(uVar5);
      }
      FUN_019f8c54(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4));
      break;
    case 7:
      cVar1 = *(char *)(param_1 + 0x130);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 300);
      }
      if (bVar7 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x10c);
      }
      break;
    case 8:
      FUN_01139b38(*(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x108));
      FUN_019f8c54(*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc0));
      break;
    case 9:
      cVar1 = *(char *)(param_1 + 0x130);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 300);
      }
      if (bVar7 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x10c);
      }
      break;
    case 10:
      FUN_01139b38(*(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x108));
      FUN_019f8c54(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
      break;
    case 0xb:
      cVar1 = *(char *)(param_1 + 0x130);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 300);
      }
      if (bVar7 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x10c);
      }
      break;
    case 0xc:
      FUN_01139b38(*(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x108));
      FUN_019f8c54(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd8));
      break;
    case 0xd:
      cVar1 = *(char *)(param_1 + 0x130);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 300);
      }
      if (bVar7 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x10c);
      }
      break;
    case 0xe:
      FUN_01139b38(*(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x108));
      FUN_019f8c54(*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4));
      break;
    case 0xf:
      cVar1 = *(char *)(param_1 + 0x130);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 300);
      }
      if (bVar7 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x10c);
      }
      break;
    case 0x10:
      if (*(char *)(param_1 + 0x159) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x130);
        bVar7 = cVar1 == '\x03';
        if (bVar7) {
          cVar1 = *(char *)(param_1 + 300);
        }
        if (bVar7 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0x10c);
        }
        piVar2 = *(int **)(param_1 + 0x148);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar7 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar7);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38404(*(undefined4 *)(param_1 + 0x148));
        }
        piVar2 = *(int **)(param_1 + 0x144);
        *(undefined1 *)(param_1 + 0x154) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar7 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar7);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(*(undefined4 *)(param_1 + 0x144));
        }
        *(undefined1 *)(param_1 + 0x155) = 0;
        FUN_0193c71c(param_1 + 0x140);
        *(undefined1 *)(param_1 + 0x156) = 0;
        FUN_0193c71c(param_1 + 0x13c);
        *(undefined1 *)(param_1 + 0x157) = 0;
        FUN_0193c71c(param_1 + 0x138);
        *(undefined1 *)(param_1 + 0x158) = 0;
      }
      FUN_019f8c54(*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xf0));
    }
    piVar2 = *(int **)(param_1 + 0xa0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a39504(*(undefined4 *)(param_1 + 0xa0));
    }
    piVar2 = *(int **)(param_1 + 0x9c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x9c));
    }
    piVar2 = *(int **)(param_1 + 0x98);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x98));
    }
    piVar2 = *(int **)(param_1 + 0x94);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x94));
    }
    piVar2 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x90));
    }
    piVar2 = *(int **)(param_1 + 0x8c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x8c));
    }
    piVar2 = *(int **)(param_1 + 0x88);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x88));
    }
    piVar2 = *(int **)(param_1 + 0x84);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38f34(*(undefined4 *)(param_1 + 0x84));
    }
    if (*(char *)(param_1 + 0xf8) != '\0') {
      FUN_005fb2fc(param_1 + 0x34);
    }
    piVar2 = *(int **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0xf8) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x10));
    }
    piVar2 = *(int **)(param_1 + 0x30);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar7 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar7);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38404(*(undefined4 *)(param_1 + 0x30));
      }
    }
    *(undefined4 *)(param_1 + 0xfd) = 0;
    *(undefined4 *)(param_1 + 0xf9) = 0;
  }
switchD_0193cff8_caseD_1:
  return;
}

