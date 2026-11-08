// FUN_00d33464 @ 00d33464 size=1240 calls_out=8 calls_in=2
// strings: 

void FUN_00d33464(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint unaff_r6;
  bool bVar8;
  
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 == '\0') {
    FUN_00ac9c30(param_1);
    piVar2 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar4 + -1;
    goto LAB_00d338b8;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x3c) == '\x03') {
      iVar4 = param_1 + 0x2c;
LAB_00d33538:
      FUN_00ac9c30(iVar4);
    }
    else if (*(char *)(param_1 + 0x3c) == '\0') {
      iVar4 = param_1 + 0x20;
      goto LAB_00d33538;
    }
    cVar1 = *(char *)(param_1 + 0x1d);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xe4) == '\x03') {
      if (*(char *)(param_1 + 0xd8) != '\x03') {
        if (*(char *)(param_1 + 0xd8) == '\0') {
          piVar2 = *(int **)(param_1 + 0xd0);
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar2;
            bVar8 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar8);
          *piVar2 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f1030(*(undefined4 *)(param_1 + 0xd0));
          }
          piVar2 = *(int **)(param_1 + 0x30);
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar2;
            bVar8 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar8);
          *piVar2 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0155edc8(*(undefined4 *)(param_1 + 0x30));
          }
        }
        goto LAB_00d33794;
      }
      switch(*(undefined1 *)(param_1 + 0x50)) {
      case 0:
        puVar3 = (undefined4 *)(param_1 + 0x38);
        piVar2 = (int *)*puVar3;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar8 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar8);
        *piVar2 = iVar4 + -1;
        goto LAB_00d33744;
      default:
        goto switchD_00d335d8_caseD_1;
      case 3:
        if (*(char *)(param_1 + 0xc1) == '\x03') {
          FUN_00accc50(param_1 + 0x54);
        }
        break;
      case 4:
        if (*(char *)(param_1 + 0x89) == '\x03') {
          FUN_00cefb4c(param_1 + 0x5c);
          *(undefined1 *)(param_1 + 0x88) = 0;
        }
        break;
      case 5:
        cVar1 = *(char *)(param_1 + 0x5f);
        if (cVar1 != '\x05') {
          if (cVar1 == '\x04') {
            iVar4 = *(int *)(param_1 + 0x60);
            if (iVar4 != 0) {
              puVar6 = (uint *)(iVar4 + 0x18);
              do {
                unaff_r6 = *puVar6;
                bVar8 = (bool)hasExclusiveAccess(puVar6);
              } while (!bVar8);
              *puVar6 = unaff_r6 | 4;
              DataMemoryBarrier(0xb);
              if ((unaff_r6 & 10) == 8) {
                (**(code **)(*(int *)(iVar4 + 8) + 8))(*(undefined4 *)(iVar4 + 0xc));
              }
              if ((unaff_r6 & 2) != 0) {
                *(undefined1 *)(iVar4 + 0x1c) = 0;
              }
              piVar2 = *(int **)(param_1 + 0x60);
              if (piVar2 != (int *)0x0) {
                DataMemoryBarrier(0xb);
                do {
                  iVar4 = *piVar2;
                  bVar8 = (bool)hasExclusiveAccess(piVar2);
                } while (!bVar8);
                *piVar2 = iVar4 + -1;
                if (iVar4 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_0165863c(*(undefined4 *)(param_1 + 0x60));
                }
              }
            }
          }
          else {
            if (cVar1 != '\x03') break;
            FUN_00cea588(param_1 + 0x68);
          }
        }
        *(undefined1 *)(param_1 + 0x5d) = 0;
        bVar8 = *(char *)(param_1 + 0x5c) != '\0';
        if (bVar8) {
          unaff_r6 = *(uint *)(param_1 + 0x60);
        }
        if (bVar8 && unaff_r6 != 0) {
          puVar6 = (uint *)(unaff_r6 + 0x18);
          do {
            uVar7 = *puVar6;
            bVar8 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar8);
          *puVar6 = uVar7 | 4;
          DataMemoryBarrier(0xb);
          if ((uVar7 & 10) == 8) {
            (**(code **)(*(int *)(unaff_r6 + 8) + 8))(*(undefined4 *)(unaff_r6 + 0xc));
          }
          if ((uVar7 & 2) != 0) {
            *(undefined1 *)(unaff_r6 + 0x1c) = 0;
          }
          piVar2 = *(int **)(param_1 + 0x60);
          if (piVar2 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar2;
              bVar8 = (bool)hasExclusiveAccess(piVar2);
            } while (!bVar8);
            *piVar2 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0165863c(*(undefined4 *)(param_1 + 0x60));
            }
          }
        }
        *(undefined1 *)(param_1 + 0x5e) = 0;
        *(undefined1 *)(param_1 + 0x5c) = 0;
      }
      puVar3 = (undefined4 *)(param_1 + 0x48);
      piVar2 = (int *)*puVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar8 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar8);
      *piVar2 = iVar4 + -1;
LAB_00d33744:
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*puVar3);
      }
switchD_00d335d8_caseD_1:
      puVar3 = (undefined4 *)(param_1 + 0xd4);
      piVar2 = (int *)*puVar3;
      *(undefined1 *)(param_1 + 0xd9) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar8 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar8);
      *piVar2 = iVar4 + -1;
LAB_00d33780:
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1030(*puVar3);
      }
    }
    else if (*(char *)(param_1 + 0xe4) == '\0') {
      piVar2 = *(int **)(param_1 + 0x28);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar8 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar8);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x28));
      }
      puVar3 = (undefined4 *)(param_1 + 0xe0);
      piVar2 = (int *)*puVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar8 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar8);
      *piVar2 = iVar4 + -1;
      goto LAB_00d33780;
    }
LAB_00d33794:
    iVar4 = *(int *)(param_1 + 0x20);
    if (iVar4 != 0) {
      piVar2 = (int *)(iVar4 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar2;
        bVar8 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar8);
      *piVar2 = iVar5 + -1;
      DataMemoryBarrier(0xb);
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
          puVar6 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar8 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar8);
          *puVar6 = *puVar6 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar6 = (uint *)(iVar4 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar6;
          bVar8 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar8);
        *puVar6 = uVar7 | 2;
        DataMemoryBarrier(0xb);
        if (uVar7 == 0) {
          iVar5 = *(int *)(iVar4 + 0x18);
          *(undefined4 *)(iVar4 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar8 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar8);
          *puVar6 = *puVar6 & 0xfffffffd;
          if (iVar5 != 0) {
            (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar4 + 0x1c));
          }
        }
      }
      piVar2 = *(int **)(param_1 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar8 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar8);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078cf4c(*(undefined4 *)(param_1 + 0x20));
      }
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
    cVar1 = *(char *)(param_1 + 0x1d);
  }
  if (cVar1 == '\0') {
    return;
  }
  piVar2 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar8 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar8);
  *piVar2 = iVar4 + -1;
LAB_00d338b8:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

