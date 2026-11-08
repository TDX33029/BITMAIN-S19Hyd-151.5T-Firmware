// FUN_005e5304 @ 005e5304 size=1460 calls_out=8 calls_in=5
// strings: 

undefined1 FUN_005e5304(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar2 = iVar2 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar2,param_1);
  }
  cVar1 = *(char *)(param_1 + 0xd4);
  if (cVar1 == '\0') {
    piVar7 = *(int **)(param_1 + 0x60);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar7;
      bVar11 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar11);
    *piVar7 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0x60));
    }
    FUN_005c4f44(param_1 + 0x30);
    uVar6 = 0xf;
    puVar4 = (uint *)(param_1 + 0x98);
    uVar8 = *puVar4;
    if ((int)uVar8 < 0) {
      uVar6 = uVar8 ^ 0x80000000;
    }
    if (uVar6 == 0x17) {
      if (*(int *)(param_1 + 0x9c) != 0) {
        puVar4 = (uint *)(param_1 + 0xa0);
        goto LAB_005e5500;
      }
    }
    else {
      if (uVar6 != 0xf) {
        if (uVar6 != 0xe) goto LAB_005e5508;
        puVar4 = (uint *)(param_1 + 0x9c);
        uVar8 = *puVar4;
      }
      if (uVar8 != 0) {
        thunk_FUN_016d3fb4(puVar4[1]);
      }
      if (puVar4[3] != 0) {
        thunk_FUN_016d3fb4(puVar4[4]);
      }
      if ((puVar4[6] & 0x7fffffff) != 0) {
        puVar4 = puVar4 + 7;
LAB_005e5500:
        thunk_FUN_016d3fb4(*puVar4);
      }
    }
LAB_005e5508:
    iVar2 = *(int *)(param_1 + 0xd0);
    DataMemoryBarrier(0xb);
    piVar7 = (int *)(iVar2 + 0x98);
    do {
      iVar3 = *piVar7;
      bVar11 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar11);
    *piVar7 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      FUN_005c9e50(iVar2 + 0x20);
      puVar4 = (uint *)(iVar2 + 0x48);
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar4;
        bVar11 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar11);
      *puVar4 = uVar8 | 2;
      DataMemoryBarrier(0xb);
      if (uVar8 == 0) {
        iVar3 = *(int *)(iVar2 + 0x40);
        *(undefined4 *)(iVar2 + 0x40) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar11 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar11);
        *puVar4 = 0;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar2 + 0x44));
        }
      }
    }
    piVar7 = *(int **)(param_1 + 0xd0);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar7;
      bVar11 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar11);
    *piVar7 = iVar2 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      uVar9 = *(undefined4 *)(param_1 + 0xdc);
      puVar10 = *(undefined4 **)(param_1 + 0xe0);
      pcVar5 = (code *)*puVar10;
      switch(*(undefined4 *)(param_1 + 0xd8)) {
      case 0:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 1:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 2:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 3:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 4:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 5:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 6:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 7:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 8:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 9:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 10:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0xb:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0xc:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0xd:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0xe:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0xf:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0x10:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0x11:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0x12:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0x13:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0x14:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0x15:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0x16:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      case 0x17:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
        break;
      default:
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar9);
        }
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
    }
    else {
      if (cVar1 != '\x04') goto LAB_005e58a8;
      if (*(char *)(param_1 + 0x6ec) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x6e4);
        bVar11 = cVar1 == '\x03';
        if (bVar11) {
          cVar1 = *(char *)(param_1 + 0x6c0);
        }
        if (bVar11 && cVar1 == '\x04') {
          FUN_0163c790(param_1 + 0x6c4);
          if (*(int *)(param_1 + 0x6c8) != 0) {
            (**(code **)(*(int *)(param_1 + 0x6c8) + 0xc))(*(undefined4 *)(param_1 + 0x6cc));
          }
        }
        FUN_005c6cb0(param_1 + 0x3c0);
        *(undefined1 *)(param_1 + 0x6ed) = 0;
      }
      else if (*(char *)(param_1 + 0x6ec) == '\0') {
        FUN_005c6cb0(param_1 + 0xd8);
      }
    }
    iVar2 = *(int *)(param_1 + 0xd0);
    piVar7 = (int *)(iVar2 + 0x98);
    *(undefined1 *)(param_1 + 0xd5) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar7;
      bVar11 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar11);
    *piVar7 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      FUN_005c9e50(iVar2 + 0x20);
      puVar4 = (uint *)(iVar2 + 0x48);
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar4;
        bVar11 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar11);
      *puVar4 = uVar8 | 2;
      DataMemoryBarrier(0xb);
      if (uVar8 == 0) {
        iVar3 = *(int *)(iVar2 + 0x40);
        *(undefined4 *)(iVar2 + 0x40) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar11 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar11);
        *puVar4 = 0;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar2 + 0x44));
        }
      }
    }
    piVar7 = *(int **)(param_1 + 0xd0);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar7;
      bVar11 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar11);
    *piVar7 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45658(*(undefined4 *)(param_1 + 0xd0));
  }
LAB_005e58a8:
  piVar7 = *(int **)(param_1 + 0x6f0);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar7;
    bVar11 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar11);
  *piVar7 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01626f40(*(undefined4 *)(param_1 + 0x6f0));
  }
  if (*(uint *)(param_1 + 8) != 2) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar2 = iVar2 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar2,param_1);
  }
  return DAT_018dd947;
}

