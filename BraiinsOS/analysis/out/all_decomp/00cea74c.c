// FUN_00cea74c @ 00cea74c size=1840 calls_out=6 calls_in=1
// strings: 

void FUN_00cea74c(undefined1 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  switch(*param_1) {
  case 0:
    piVar7 = *(int **)(param_1 + 4);
    if (piVar7 != (int *)0x0) {
      puVar4 = (uint *)(piVar7 + 8);
      uVar6 = piVar7[8];
      do {
        while( true ) {
          uVar5 = uVar6;
          if ((uVar5 & 4) != 0) goto LAB_00cea7f4;
          uVar6 = *puVar4;
          if (uVar6 == uVar5) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar4);
        if (bVar1) {
          *puVar4 = uVar5 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_00cea7f4:
      if ((uVar5 & 5) == 1) {
        (**(code **)(piVar7[6] + 8))(piVar7[7]);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4380(*(undefined4 *)(param_1 + 4));
      }
    }
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 != 0) {
      piVar7 = (int *)(iVar2 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar3 + -1;
      DataMemoryBarrier(0xb);
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
          puVar4 = (uint *)(iVar2 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar1);
          *puVar4 = *puVar4 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar4 = (uint *)(iVar2 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar6 = *puVar4;
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = uVar6 | 2;
        DataMemoryBarrier(0xb);
        if (uVar6 == 0) {
          iVar3 = *(int *)(iVar2 + 0x18);
          *(undefined4 *)(iVar2 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar1);
          *puVar4 = *puVar4 & 0xfffffffd;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar2 + 0x1c));
          }
        }
      }
      piVar7 = *(int **)(param_1 + 8);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f23b4(*(undefined4 *)(param_1 + 8));
        return;
      }
    }
    break;
  case 1:
    piVar7 = *(int **)(param_1 + 4);
    if (piVar7 != (int *)0x0) {
      puVar4 = (uint *)(piVar7 + 6);
      uVar6 = piVar7[6];
      do {
        while( true ) {
          uVar5 = uVar6;
          if ((uVar5 & 4) != 0) goto LAB_00ceac30;
          uVar6 = *puVar4;
          if (uVar6 == uVar5) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar4);
        if (bVar1) {
          *puVar4 = uVar5 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_00ceac30:
      if ((uVar5 & 5) == 1) {
        (**(code **)(piVar7[4] + 8))(piVar7[5]);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0165863c(*(undefined4 *)(param_1 + 4));
        return;
      }
    }
    break;
  case 2:
    piVar7 = *(int **)(param_1 + 4);
    if (piVar7 == (int *)0x0) {
      return;
    }
    puVar4 = (uint *)(piVar7 + 8);
    uVar6 = piVar7[8];
    do {
      while( true ) {
        uVar5 = uVar6;
        if ((uVar5 & 4) != 0) goto LAB_00ceaa3c;
        uVar6 = *puVar4;
        if (uVar6 == uVar5) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar5 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00ceaa3c:
    if ((uVar5 & 5) == 1) {
      (**(code **)(piVar7[6] + 8))(piVar7[7]);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar2 + -1;
    goto LAB_00ceab10;
  case 3:
    piVar7 = *(int **)(param_1 + 4);
    if (piVar7 == (int *)0x0) {
      return;
    }
    puVar4 = (uint *)(piVar7 + 8);
    uVar6 = piVar7[8];
    do {
      while( true ) {
        uVar5 = uVar6;
        if ((uVar5 & 4) != 0) goto LAB_00ceaadc;
        uVar6 = *puVar4;
        if (uVar6 == uVar5) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar5 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00ceaadc:
    if ((uVar5 & 5) == 1) {
      (**(code **)(piVar7[6] + 8))(piVar7[7]);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar2 + -1;
LAB_00ceab10:
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4380(*(undefined4 *)(param_1 + 4));
      return;
    }
    break;
  case 4:
    piVar7 = *(int **)(param_1 + 4);
    if (piVar7 == (int *)0x0) {
      return;
    }
    puVar4 = (uint *)(piVar7 + 8);
    uVar6 = piVar7[8];
    do {
      while( true ) {
        uVar5 = uVar6;
        if ((uVar5 & 4) != 0) goto LAB_00cea99c;
        uVar6 = *puVar4;
        if (uVar6 == uVar5) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar5 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00cea99c:
    if ((uVar5 & 5) == 1) {
      (**(code **)(piVar7[6] + 8))(piVar7[7]);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar2 + -1;
    goto LAB_00cead18;
  case 5:
    piVar7 = *(int **)(param_1 + 4);
    if (piVar7 == (int *)0x0) {
      return;
    }
    puVar4 = (uint *)(piVar7 + 8);
    uVar6 = piVar7[8];
    do {
      while( true ) {
        uVar5 = uVar6;
        if ((uVar5 & 4) != 0) goto LAB_00ceace4;
        uVar6 = *puVar4;
        if (uVar6 == uVar5) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar5 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00ceace4:
    if ((uVar5 & 5) == 1) {
      (**(code **)(piVar7[6] + 8))(piVar7[7]);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar2 + -1;
LAB_00cead18:
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f2f58(*(undefined4 *)(param_1 + 4));
      return;
    }
    break;
  case 6:
    piVar7 = *(int **)(param_1 + 4);
    if (piVar7 != (int *)0x0) {
      puVar4 = (uint *)(piVar7 + 10);
      uVar6 = piVar7[10];
      do {
        while( true ) {
          uVar5 = uVar6;
          if ((uVar5 & 4) != 0) goto LAB_00cead98;
          uVar6 = *puVar4;
          if (uVar6 == uVar5) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar4);
        if (bVar1) {
          *puVar4 = uVar5 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_00cead98:
      if ((uVar5 & 5) == 1) {
        (**(code **)(piVar7[8] + 8))(piVar7[9]);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar2 + -1;
LAB_00ceadcc:
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f427c(*(undefined4 *)(param_1 + 4));
        return;
      }
      return;
    }
    break;
  case 7:
    piVar7 = *(int **)(param_1 + 4);
    if (piVar7 != (int *)0x0) {
      puVar4 = (uint *)(piVar7 + 10);
      uVar6 = piVar7[10];
      do {
        while( true ) {
          uVar5 = uVar6;
          if ((uVar5 & 4) != 0) goto LAB_00ceab90;
          uVar6 = *puVar4;
          if (uVar6 == uVar5) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar4);
        if (bVar1) {
          *puVar4 = uVar5 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_00ceab90:
      if ((uVar5 & 5) == 1) {
        (**(code **)(piVar7[8] + 8))(piVar7[9]);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar2 + -1;
      goto LAB_00ceadcc;
    }
    break;
  default:
    piVar7 = *(int **)(param_1 + 4);
    if (piVar7 != (int *)0x0) {
      puVar4 = (uint *)(piVar7 + 6);
      uVar6 = piVar7[6];
      do {
        while( true ) {
          uVar5 = uVar6;
          if ((uVar5 & 4) != 0) goto LAB_00ceae4c;
          uVar6 = *puVar4;
          if (uVar6 == uVar5) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar4);
        if (bVar1) {
          *puVar4 = uVar5 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_00ceae4c:
      if ((uVar5 & 5) == 1) {
        (**(code **)(piVar7[4] + 8))(piVar7[5]);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f3128(*(undefined4 *)(param_1 + 4));
        return;
      }
    }
  }
  return;
}

