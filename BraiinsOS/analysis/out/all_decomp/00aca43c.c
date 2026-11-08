// FUN_00aca43c @ 00aca43c size=1916 calls_out=6 calls_in=5
// strings: 

void FUN_00aca43c(undefined1 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *(int *)(param_1 + 4);
  switch(*param_1) {
  case 0:
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x20);
      uVar7 = *(uint *)(iVar2 + 0x20);
      do {
        while( true ) {
          uVar6 = uVar7;
          if ((uVar6 & 4) != 0) goto LAB_00aca4e4;
          uVar7 = *puVar5;
          if (uVar7 == uVar6) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar5);
        if (bVar1) {
          *puVar5 = uVar6 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_00aca4e4:
      if ((uVar6 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
      }
      piVar3 = *(int **)(param_1 + 4);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4380(*(undefined4 *)(param_1 + 4));
        }
      }
    }
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 != 0) {
      piVar3 = (int *)(iVar2 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      DataMemoryBarrier(0xb);
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
          puVar5 = (uint *)(iVar2 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar1);
          *puVar5 = *puVar5 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar5 = (uint *)(iVar2 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar5;
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = uVar7 | 2;
        DataMemoryBarrier(0xb);
        if (uVar7 == 0) {
          iVar4 = *(int *)(iVar2 + 0x18);
          *(undefined4 *)(iVar2 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar1);
          *puVar5 = *puVar5 & 0xfffffffd;
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar2 + 0x1c));
          }
        }
      }
      piVar3 = *(int **)(param_1 + 8);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f23b4(*(undefined4 *)(param_1 + 8));
        return;
      }
    }
    break;
  case 1:
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x18);
      uVar7 = *(uint *)(iVar2 + 0x18);
      do {
        while( true ) {
          uVar6 = uVar7;
          if ((uVar6 & 4) != 0) goto LAB_00aca948;
          uVar7 = *puVar5;
          if (uVar7 == uVar6) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar5);
        if (bVar1) {
          *puVar5 = uVar6 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_00aca948:
      if ((uVar6 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x10) + 8))(*(undefined4 *)(iVar2 + 0x14));
      }
      piVar3 = *(int **)(param_1 + 4);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0165863c(*(undefined4 *)(param_1 + 4));
          return;
        }
      }
    }
    break;
  case 2:
    if (iVar2 == 0) {
      return;
    }
    puVar5 = (uint *)(iVar2 + 0x20);
    uVar7 = *(uint *)(iVar2 + 0x20);
    do {
      while( true ) {
        uVar6 = uVar7;
        if ((uVar6 & 4) != 0) goto LAB_00aca73c;
        uVar7 = *puVar5;
        if (uVar7 == uVar6) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar5);
      if (bVar1) {
        *puVar5 = uVar6 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00aca73c:
    if ((uVar6 & 5) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
    }
    piVar3 = *(int **)(param_1 + 4);
    if (piVar3 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    goto LAB_00aca824;
  case 3:
    if (iVar2 == 0) {
      return;
    }
    puVar5 = (uint *)(iVar2 + 0x20);
    uVar7 = *(uint *)(iVar2 + 0x20);
    do {
      while( true ) {
        uVar6 = uVar7;
        if ((uVar6 & 4) != 0) goto LAB_00aca7e4;
        uVar7 = *puVar5;
        if (uVar7 == uVar6) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar5);
      if (bVar1) {
        *puVar5 = uVar6 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00aca7e4:
    if ((uVar6 & 5) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
    }
    piVar3 = *(int **)(param_1 + 4);
    if (piVar3 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
LAB_00aca824:
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4380(*(undefined4 *)(param_1 + 4));
      return;
    }
    break;
  case 4:
    if (iVar2 == 0) {
      return;
    }
    puVar5 = (uint *)(iVar2 + 0x20);
    uVar7 = *(uint *)(iVar2 + 0x20);
    do {
      while( true ) {
        uVar6 = uVar7;
        if ((uVar6 & 4) != 0) goto LAB_00aca694;
        uVar7 = *puVar5;
        if (uVar7 == uVar6) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar5);
      if (bVar1) {
        *puVar5 = uVar6 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00aca694:
    if ((uVar6 & 5) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
    }
    piVar3 = *(int **)(param_1 + 4);
    if (piVar3 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    goto LAB_00acaa44;
  case 5:
    if (iVar2 == 0) {
      return;
    }
    puVar5 = (uint *)(iVar2 + 0x20);
    uVar7 = *(uint *)(iVar2 + 0x20);
    do {
      while( true ) {
        uVar6 = uVar7;
        if ((uVar6 & 4) != 0) goto LAB_00acaa04;
        uVar7 = *puVar5;
        if (uVar7 == uVar6) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar5);
      if (bVar1) {
        *puVar5 = uVar6 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00acaa04:
    if ((uVar6 & 5) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
    }
    piVar3 = *(int **)(param_1 + 4);
    if (piVar3 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
LAB_00acaa44:
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f2f58(*(undefined4 *)(param_1 + 4));
      return;
    }
    break;
  case 6:
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x28);
      uVar7 = *(uint *)(iVar2 + 0x28);
      do {
        while( true ) {
          uVar6 = uVar7;
          if ((uVar6 & 4) != 0) goto LAB_00acaac0;
          uVar7 = *puVar5;
          if (uVar7 == uVar6) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar5);
        if (bVar1) {
          *puVar5 = uVar6 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_00acaac0:
      if ((uVar6 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x20) + 8))(*(undefined4 *)(iVar2 + 0x24));
      }
      piVar3 = *(int **)(param_1 + 4);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
LAB_00acab00:
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f427c(*(undefined4 *)(param_1 + 4));
          return;
        }
        return;
      }
    }
    break;
  case 7:
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x28);
      uVar7 = *(uint *)(iVar2 + 0x28);
      do {
        while( true ) {
          uVar6 = uVar7;
          if ((uVar6 & 4) != 0) goto LAB_00aca8a0;
          uVar7 = *puVar5;
          if (uVar7 == uVar6) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar5);
        if (bVar1) {
          *puVar5 = uVar6 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_00aca8a0:
      if ((uVar6 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x20) + 8))(*(undefined4 *)(iVar2 + 0x24));
      }
      piVar3 = *(int **)(param_1 + 4);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        goto LAB_00acab00;
      }
    }
    break;
  default:
    if (iVar2 != 0) {
      puVar5 = (uint *)(iVar2 + 0x18);
      uVar7 = *(uint *)(iVar2 + 0x18);
      do {
        while( true ) {
          uVar6 = uVar7;
          if ((uVar6 & 4) != 0) goto LAB_00acab7c;
          uVar7 = *puVar5;
          if (uVar7 == uVar6) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar5);
        if (bVar1) {
          *puVar5 = uVar6 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_00acab7c:
      if ((uVar6 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x10) + 8))(*(undefined4 *)(iVar2 + 0x14));
      }
      piVar3 = *(int **)(param_1 + 4);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f3128(*(undefined4 *)(param_1 + 4));
          return;
        }
      }
    }
  }
  return;
}

