// FUN_00b21ad8 @ 00b21ad8 size=880 calls_out=3 calls_in=1
// strings: 

void FUN_00b21ad8(int param_1)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  byte *unaff_r6;
  uint uVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x104) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x18);
    if (cVar1 == '\x05') {
      FUN_00b21fcc(param_1 + 0x20);
      return;
    }
    if (cVar1 == '\x04') {
      cVar1 = *(char *)(param_1 + 0x37);
      if (cVar1 != '\x05') {
        if (cVar1 == '\x04') {
          iVar5 = *(int *)(param_1 + 0x38);
          if (iVar5 != 0) {
            puVar3 = (uint *)(iVar5 + 0x20);
            unaff_r6 = (byte *)(iVar5 + 8);
            do {
              uVar6 = *puVar3;
              bVar7 = (bool)hasExclusiveAccess(puVar3);
            } while (!bVar7);
            *puVar3 = uVar6 | 4;
            DataMemoryBarrier(0xb);
            if ((uVar6 & 10) == 8) {
              (**(code **)(*(int *)(iVar5 + 0x10) + 8))(*(undefined4 *)(iVar5 + 0x14));
            }
            if ((uVar6 & 2) != 0) {
              bVar2 = *unaff_r6;
              *(undefined1 *)(iVar5 + 8) = 2;
              if ((bVar2 & 0xfd) != 0) {
                (**(code **)**(undefined4 **)(iVar5 + 0xc))();
              }
            }
            piVar4 = *(int **)(param_1 + 0x38);
            if (piVar4 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar5 = *piVar4;
                bVar7 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar7);
              *piVar4 = iVar5 + -1;
              if (iVar5 == 1) {
                DataMemoryBarrier(0xb);
                FUN_008f2f58(*(undefined4 *)(param_1 + 0x38));
              }
            }
          }
        }
        else {
          if (cVar1 != '\x03') {
            return;
          }
          FUN_00b2246c(param_1 + 0x40);
        }
      }
      *(undefined1 *)(param_1 + 0x35) = 0;
      bVar7 = *(char *)(param_1 + 0x34) != '\0';
      if (bVar7) {
        unaff_r6 = *(byte **)(param_1 + 0x38);
      }
      if (bVar7 && unaff_r6 != (byte *)0x0) {
        puVar3 = (uint *)(unaff_r6 + 0x20);
        do {
          uVar6 = *puVar3;
          bVar7 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar7);
        *puVar3 = uVar6 | 4;
        DataMemoryBarrier(0xb);
        if ((uVar6 & 10) == 8) {
          (**(code **)(*(int *)(unaff_r6 + 0x10) + 8))(*(undefined4 *)(unaff_r6 + 0x14));
        }
        if ((uVar6 & 2) != 0) {
          bVar2 = unaff_r6[8];
          unaff_r6[8] = 2;
          if ((bVar2 & 0xfd) != 0) {
            (**(code **)**(undefined4 **)(unaff_r6 + 0xc))();
          }
        }
        piVar4 = *(int **)(param_1 + 0x38);
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar4;
            bVar7 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar7);
          *piVar4 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f2f58(*(undefined4 *)(param_1 + 0x38));
          }
        }
      }
    }
    else {
      if (cVar1 != '\x03') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0x37);
      if (cVar1 != '\x05') {
        if (cVar1 == '\x04') {
          iVar5 = *(int *)(param_1 + 0x40);
          if (iVar5 != 0) {
            puVar3 = (uint *)(iVar5 + 0x20);
            unaff_r6 = (byte *)(iVar5 + 8);
            do {
              uVar6 = *puVar3;
              bVar7 = (bool)hasExclusiveAccess(puVar3);
            } while (!bVar7);
            *puVar3 = uVar6 | 4;
            DataMemoryBarrier(0xb);
            if ((uVar6 & 10) == 8) {
              (**(code **)(*(int *)(iVar5 + 0x10) + 8))(*(undefined4 *)(iVar5 + 0x14));
            }
            if ((uVar6 & 2) != 0) {
              bVar2 = *unaff_r6;
              *(undefined1 *)(iVar5 + 8) = 2;
              if ((bVar2 & 0xfd) != 0) {
                (**(code **)**(undefined4 **)(iVar5 + 0xc))();
              }
            }
            piVar4 = *(int **)(param_1 + 0x40);
            if (piVar4 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar5 = *piVar4;
                bVar7 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar7);
              *piVar4 = iVar5 + -1;
              if (iVar5 == 1) {
                DataMemoryBarrier(0xb);
                FUN_008f2f58(*(undefined4 *)(param_1 + 0x40));
              }
            }
          }
        }
        else {
          if (cVar1 != '\x03') {
            return;
          }
          FUN_00b2246c(param_1 + 0x48);
        }
      }
      *(undefined1 *)(param_1 + 0x35) = 0;
      bVar7 = *(char *)(param_1 + 0x34) != '\0';
      if (bVar7) {
        unaff_r6 = *(byte **)(param_1 + 0x40);
      }
      if (bVar7 && unaff_r6 != (byte *)0x0) {
        puVar3 = (uint *)(unaff_r6 + 0x20);
        do {
          uVar6 = *puVar3;
          bVar7 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar7);
        *puVar3 = uVar6 | 4;
        DataMemoryBarrier(0xb);
        if ((uVar6 & 10) == 8) {
          (**(code **)(*(int *)(unaff_r6 + 0x10) + 8))(*(undefined4 *)(unaff_r6 + 0x14));
        }
        if ((uVar6 & 2) != 0) {
          bVar2 = unaff_r6[8];
          unaff_r6[8] = 2;
          if ((bVar2 & 0xfd) != 0) {
            (**(code **)**(undefined4 **)(unaff_r6 + 0xc))();
          }
        }
        piVar4 = *(int **)(param_1 + 0x40);
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar4;
            bVar7 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar7);
          *piVar4 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f2f58(*(undefined4 *)(param_1 + 0x40));
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x36) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  return;
}

