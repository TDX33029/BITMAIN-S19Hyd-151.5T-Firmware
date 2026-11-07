// FUN_008f5814 @ 008f5814 size=3468 calls_out=12 calls_in=1
// strings: 

void FUN_008f5814(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  switch(*(undefined1 *)(param_1 + 0xf4)) {
  case 0:
    FUN_008d8460(param_1);
    FUN_008e9df8(*(undefined4 *)(param_1 + 0xd8));
    piVar6 = *(int **)(param_1 + 0xd8);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar11 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar11);
    *piVar6 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f2c4c(*(undefined4 *)(param_1 + 0xd8));
      return;
    }
    return;
  default:
    goto switchD_008f5830_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x110) == '\x04') {
      FUN_00a07b4c(param_1 + 0x118);
    }
    else if (*(char *)(param_1 + 0x110) == '\x03') {
      puVar10 = *(undefined4 **)(param_1 + 0x118);
      uVar9 = *(undefined4 *)(param_1 + 0x114);
      pcVar3 = (code *)*puVar10;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
    }
  case 4:
    goto switchD_008f5830_caseD_4;
  case 5:
    if (*(char *)(param_1 + 0x118) == '\x03') {
      puVar10 = *(undefined4 **)(param_1 + 0x114);
      uVar9 = *(undefined4 *)(param_1 + 0x110);
      pcVar3 = (code *)*puVar10;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
    }
    goto LAB_008f615c;
  case 6:
    if (*(char *)(param_1 + 0x110) == '\x04') {
      FUN_00a07b4c(param_1 + 0x118);
    }
    else if (*(char *)(param_1 + 0x110) == '\x03') {
      puVar10 = *(undefined4 **)(param_1 + 0x118);
      uVar9 = *(undefined4 *)(param_1 + 0x114);
      pcVar3 = (code *)*puVar10;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
    }
    if (*(undefined4 **)(param_1 + 0xec) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xec))();
    }
LAB_008f615c:
    iVar2 = *(int *)(param_1 + 0xe8);
    *(undefined1 *)(param_1 + 0xff) = 0;
    if (iVar2 != 0) {
      piVar6 = (int *)(iVar2 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar6;
        bVar11 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar11);
      *piVar6 = iVar4 + -1;
      DataMemoryBarrier(0xb);
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
          puVar5 = (uint *)(iVar2 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar11 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar11);
          *puVar5 = *puVar5 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar5 = (uint *)(iVar2 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar5;
          bVar11 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar11);
        *puVar5 = uVar7 | 2;
        DataMemoryBarrier(0xb);
        if (uVar7 == 0) {
          iVar4 = *(int *)(iVar2 + 0x18);
          *(undefined4 *)(iVar2 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar11 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar11);
          *puVar5 = *puVar5 & 0xfffffffd;
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar2 + 0x1c));
          }
        }
      }
      piVar6 = *(int **)(param_1 + 0xe8);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar6;
        bVar11 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar11);
      *piVar6 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f23b4(*(undefined4 *)(param_1 + 0xe8));
      }
    }
    iVar2 = *(int *)(param_1 + 0xe4);
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x20);
      uVar7 = *(uint *)(iVar2 + 0x20);
      do {
        while( true ) {
          uVar8 = uVar7;
          if ((uVar8 & 4) != 0) goto LAB_008f62c0;
          uVar7 = *puVar5;
          if (uVar7 == uVar8) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(puVar5);
        if (bVar11) {
          *puVar5 = uVar8 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar11);
LAB_008f62c0:
      if ((uVar8 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
      }
      piVar6 = *(int **)(param_1 + 0xe4);
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar6;
          bVar11 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar11);
        *piVar6 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4380(*(undefined4 *)(param_1 + 0xe4));
        }
      }
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
    if (*(char *)(param_1 + 0x30) != '\0') {
      FUN_00aca43c();
    }
    *(undefined1 *)(param_1 + 0x101) = 0;
    goto switchD_008f5830_caseD_4;
  case 7:
    if (*(char *)(param_1 + 0x13c) == '\x03') {
      uVar9 = *(undefined4 *)(param_1 + 0x128);
      FUN_00a07b4c(uVar9);
      goto LAB_008f64ac;
    }
    goto LAB_008f64b4;
  case 8:
    if (*(char *)(param_1 + 0x13c) == '\x03') {
      uVar9 = *(undefined4 *)(param_1 + 0x128);
      FUN_00a07b4c(uVar9);
      goto LAB_008f6498;
    }
    goto LAB_008f64a0;
  case 9:
    if (*(char *)(param_1 + 0x13c) == '\x03') {
      uVar9 = *(undefined4 *)(param_1 + 0x128);
      FUN_00a07b4c(uVar9);
      goto LAB_008f6484;
    }
    goto LAB_008f648c;
  case 10:
    if (*(char *)(param_1 + 0x13c) == '\x03') {
      uVar9 = *(undefined4 *)(param_1 + 0x128);
      FUN_00a07b4c(uVar9);
      goto LAB_008f6470;
    }
    goto LAB_008f6478;
  case 0xb:
    goto switchD_008f5830_caseD_b;
  case 0xc:
    puVar10 = *(undefined4 **)(param_1 + 0x10c);
    uVar9 = *(undefined4 *)(param_1 + 0x108);
    if ((code *)*puVar10 != (code *)0x0) {
      (*(code *)*puVar10)(uVar9);
    }
    goto LAB_008f5f78;
  case 0xd:
    FUN_008d8520(param_1 + 0x110);
    iVar2 = *(int *)(param_1 + 0x108);
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x18);
      uVar7 = *(uint *)(iVar2 + 0x18);
      do {
        while( true ) {
          uVar8 = uVar7;
          if ((uVar8 & 4) != 0) goto LAB_008f5ad0;
          uVar7 = *puVar5;
          if (uVar7 == uVar8) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(puVar5);
        if (bVar11) {
          *puVar5 = uVar8 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar11);
LAB_008f5ad0:
      if ((uVar8 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x10) + 8))(*(undefined4 *)(iVar2 + 0x14));
      }
      piVar6 = *(int **)(param_1 + 0x108);
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar6;
          bVar11 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar11);
        *piVar6 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0165863c(*(undefined4 *)(param_1 + 0x108));
        }
      }
    }
    *(undefined1 *)(param_1 + 0xfe) = 0;
    break;
  case 0xe:
    if (*(char *)(param_1 + 0x118) == '\x04') {
      FUN_00a07b4c(param_1 + 0x120);
    }
    else if (*(char *)(param_1 + 0x118) == '\x03') {
      puVar10 = *(undefined4 **)(param_1 + 0x120);
      uVar9 = *(undefined4 *)(param_1 + 0x11c);
      pcVar3 = (code *)*puVar10;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
    }
    iVar2 = *(int *)(param_1 + 0x108);
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x20);
      uVar7 = *(uint *)(iVar2 + 0x20);
      do {
        while( true ) {
          uVar8 = uVar7;
          if ((uVar8 & 4) != 0) goto LAB_008f60d0;
          uVar7 = *puVar5;
          if (uVar7 == uVar8) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(puVar5);
        if (bVar11) {
          *puVar5 = uVar8 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar11);
LAB_008f60d0:
      if ((uVar8 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
      }
      piVar6 = *(int **)(param_1 + 0x108);
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar6;
          bVar11 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar11);
        *piVar6 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4380(*(undefined4 *)(param_1 + 0x108));
        }
      }
    }
    *(undefined1 *)(param_1 + 0xfd) = 0;
    break;
  case 0xf:
    if (*(char *)(param_1 + 0x118) == '\x04') {
      FUN_00a07b4c(param_1 + 0x120);
    }
    else if (*(char *)(param_1 + 0x118) == '\x03') {
      puVar10 = *(undefined4 **)(param_1 + 0x120);
      uVar9 = *(undefined4 *)(param_1 + 0x11c);
      pcVar3 = (code *)*puVar10;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
    }
    iVar2 = *(int *)(param_1 + 0x108);
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x20);
      uVar7 = *(uint *)(iVar2 + 0x20);
      do {
        while( true ) {
          uVar8 = uVar7;
          if ((uVar8 & 4) != 0) goto LAB_008f6000;
          uVar7 = *puVar5;
          if (uVar7 == uVar8) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(puVar5);
        if (bVar11) {
          *puVar5 = uVar8 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar11);
LAB_008f6000:
      if ((uVar8 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
      }
      piVar6 = *(int **)(param_1 + 0x108);
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar6;
          bVar11 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar11);
        *piVar6 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4380(*(undefined4 *)(param_1 + 0x108));
        }
      }
    }
    *(undefined1 *)(param_1 + 0xfc) = 0;
    break;
  case 0x10:
    if (*(char *)(param_1 + 0x130) == '\x03') {
      puVar10 = *(undefined4 **)(param_1 + 0x124);
      uVar9 = *(undefined4 *)(param_1 + 0x120);
      pcVar3 = (code *)*puVar10;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
    }
    iVar2 = *(int *)(param_1 + 0x108);
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x20);
      uVar7 = *(uint *)(iVar2 + 0x20);
      do {
        while( true ) {
          uVar8 = uVar7;
          if ((uVar8 & 4) != 0) goto LAB_008f5c0c;
          uVar7 = *puVar5;
          if (uVar7 == uVar8) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(puVar5);
        if (bVar11) {
          *puVar5 = uVar8 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar11);
LAB_008f5c0c:
      if ((uVar8 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
      }
      piVar6 = *(int **)(param_1 + 0x108);
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar6;
          bVar11 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar11);
        *piVar6 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f2f58(*(undefined4 *)(param_1 + 0x108));
        }
      }
    }
    *(undefined1 *)(param_1 + 0xfb) = 0;
    break;
  case 0x11:
    cVar1 = *(char *)(param_1 + 0x191);
    if (cVar1 == '\x05') {
      if (*(char *)(param_1 + 0x1b8) == '\x03') {
        puVar10 = *(undefined4 **)(param_1 + 0x1ac);
        uVar9 = *(undefined4 *)(param_1 + 0x1a8);
        if ((code *)*puVar10 != (code *)0x0) {
          (*(code *)*puVar10)(uVar9);
        }
LAB_008f636c:
        if (puVar10[1] != 0) {
          thunk_FUN_016d3fb4(uVar9);
        }
      }
    }
    else if (cVar1 == '\x04') {
      FUN_00a07b4c(param_1 + 0x198);
    }
    else {
      bVar11 = cVar1 == '\x03';
      if (bVar11) {
        cVar1 = *(char *)(param_1 + 0x1b8);
      }
      if (bVar11 && cVar1 == '\x03') {
        puVar10 = *(undefined4 **)(param_1 + 0x1ac);
        uVar9 = *(undefined4 *)(param_1 + 0x1a8);
        if ((code *)*puVar10 != (code *)0x0) {
          (*(code *)*puVar10)(uVar9);
        }
        goto LAB_008f636c;
      }
    }
    iVar2 = *(int *)(param_1 + 0x108);
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x20);
      uVar7 = *(uint *)(iVar2 + 0x20);
      do {
        while( true ) {
          uVar8 = uVar7;
          if ((uVar8 & 4) != 0) goto LAB_008f63e8;
          uVar7 = *puVar5;
          if (uVar7 == uVar8) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(puVar5);
        if (bVar11) {
          *puVar5 = uVar8 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar11);
LAB_008f63e8:
      if ((uVar8 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
      }
      piVar6 = *(int **)(param_1 + 0x108);
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar6;
          bVar11 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar11);
        *piVar6 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f2f58(*(undefined4 *)(param_1 + 0x108));
        }
      }
    }
    *(undefined1 *)(param_1 + 0xfa) = 0;
    break;
  case 0x12:
    if (*(char *)(param_1 + 0x11c) == '\x03') {
      puVar10 = *(undefined4 **)(param_1 + 0x118);
      uVar9 = *(undefined4 *)(param_1 + 0x114);
      pcVar3 = (code *)*puVar10;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
    }
    iVar2 = *(int *)(param_1 + 0x108);
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x28);
      uVar7 = *(uint *)(iVar2 + 0x28);
      do {
        while( true ) {
          uVar8 = uVar7;
          if ((uVar8 & 4) != 0) goto LAB_008f5efc;
          uVar7 = *puVar5;
          if (uVar7 == uVar8) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(puVar5);
        if (bVar11) {
          *puVar5 = uVar8 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar11);
LAB_008f5efc:
      if ((uVar8 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x20) + 8))(*(undefined4 *)(iVar2 + 0x24));
      }
      piVar6 = *(int **)(param_1 + 0x108);
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar6;
          bVar11 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar11);
        *piVar6 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f427c(*(undefined4 *)(param_1 + 0x108));
        }
      }
    }
    *(undefined1 *)(param_1 + 0xf9) = 0;
    break;
  case 0x13:
    if (*(char *)(param_1 + 0x11c) == '\x03') {
      puVar10 = *(undefined4 **)(param_1 + 0x118);
      uVar9 = *(undefined4 *)(param_1 + 0x114);
      pcVar3 = (code *)*puVar10;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
    }
    iVar2 = *(int *)(param_1 + 0x108);
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x28);
      uVar7 = *(uint *)(iVar2 + 0x28);
      do {
        while( true ) {
          uVar8 = uVar7;
          if ((uVar8 & 4) != 0) goto LAB_008f5df8;
          uVar7 = *puVar5;
          if (uVar7 == uVar8) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(puVar5);
        if (bVar11) {
          *puVar5 = uVar8 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar11);
LAB_008f5df8:
      if ((uVar8 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x20) + 8))(*(undefined4 *)(iVar2 + 0x24));
      }
      piVar6 = *(int **)(param_1 + 0x108);
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar6;
          bVar11 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar11);
        *piVar6 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f427c(*(undefined4 *)(param_1 + 0x108));
        }
      }
    }
    *(undefined1 *)(param_1 + 0xf8) = 0;
    break;
  case 0x14:
    cVar1 = *(char *)(param_1 + 0x120);
    bVar11 = cVar1 == '\x03';
    if (bVar11) {
      cVar1 = *(char *)(param_1 + 0x11c);
    }
    if (bVar11 && cVar1 == '\x03') {
      puVar10 = *(undefined4 **)(param_1 + 0x118);
      uVar9 = *(undefined4 *)(param_1 + 0x114);
      if ((code *)*puVar10 != (code *)0x0) {
        (*(code *)*puVar10)(uVar9);
      }
      goto LAB_008f5f78;
    }
    goto switchD_008f5830_caseD_b;
  case 0x15:
    cVar1 = *(char *)(param_1 + 0x120);
    bVar11 = cVar1 == '\x03';
    if (bVar11) {
      cVar1 = *(char *)(param_1 + 0x11c);
    }
    if (bVar11 && cVar1 == '\x03') {
      puVar10 = *(undefined4 **)(param_1 + 0x118);
      uVar9 = *(undefined4 *)(param_1 + 0x114);
      if ((code *)*puVar10 != (code *)0x0) {
        (*(code *)*puVar10)(uVar9);
      }
      goto LAB_008f5f78;
    }
    goto switchD_008f5830_caseD_b;
  case 0x16:
    puVar10 = *(undefined4 **)(param_1 + 0x10c);
    uVar9 = *(undefined4 *)(param_1 + 0x108);
    if ((code *)*puVar10 != (code *)0x0) {
      (*(code *)*puVar10)(uVar9);
    }
LAB_008f5f78:
    if (puVar10[1] != 0) {
      thunk_FUN_016d3fb4(uVar9);
    }
    goto switchD_008f5830_caseD_b;
  case 0x17:
    FUN_008d8520(param_1 + 0x108);
    goto switchD_008f5830_caseD_b;
  }
  if (7 < *(byte *)(param_1 + 200) - 1) {
    FUN_00aca43c();
  }
  *(undefined1 *)(param_1 + 0xf6) = 0;
switchD_008f5830_caseD_b:
  uVar9 = *(undefined4 *)(param_1 + 0x98);
  FUN_00a07b4c(uVar9);
LAB_008f6470:
  thunk_FUN_016d3fb4(uVar9);
LAB_008f6478:
  uVar9 = *(undefined4 *)(param_1 + 0x80);
  FUN_00a07b4c(uVar9);
LAB_008f6484:
  thunk_FUN_016d3fb4(uVar9);
LAB_008f648c:
  uVar9 = *(undefined4 *)(param_1 + 0x68);
  FUN_00a07b4c(uVar9);
LAB_008f6498:
  thunk_FUN_016d3fb4(uVar9);
LAB_008f64a0:
  uVar9 = *(undefined4 *)(param_1 + 0x50);
  FUN_00a07b4c(uVar9);
LAB_008f64ac:
  thunk_FUN_016d3fb4(uVar9);
LAB_008f64b4:
  iVar2 = *(int *)(param_1 + 0xe0);
  if (iVar2 != 0) {
    piVar6 = (int *)(iVar2 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar11 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar11);
    *piVar6 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
        puVar5 = (uint *)(iVar2 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar11 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar11);
        *puVar5 = *puVar5 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar5 = (uint *)(iVar2 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar5;
        bVar11 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar11);
      *puVar5 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar4 = *(int *)(iVar2 + 0x18);
        *(undefined4 *)(iVar2 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar11 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar11);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar2 + 0x1c));
        }
      }
    }
    piVar6 = *(int **)(param_1 + 0xe0);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar11 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar11);
    *piVar6 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*(undefined4 *)(param_1 + 0xe0));
    }
  }
switchD_008f5830_caseD_4:
  FUN_008e9df8(*(undefined4 *)(param_1 + 0xdc));
  piVar6 = *(int **)(param_1 + 0xdc);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar6;
    bVar11 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar11);
  *piVar6 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f2c4c(*(undefined4 *)(param_1 + 0xdc));
  }
  if (*(char *)(param_1 + 0xf7) != '\0') {
    FUN_008d8460(param_1 + 0x10);
  }
  *(undefined1 *)(param_1 + 0xf7) = 0;
switchD_008f5830_caseD_1:
  return;
}

