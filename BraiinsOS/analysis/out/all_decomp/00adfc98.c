// FUN_00adfc98 @ 00adfc98 size=756 calls_out=7 calls_in=3
// strings: 

void FUN_00adfc98(int *param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if ((char)param_1[0x27] != '\0') {
    if ((char)param_1[0x27] == '\x03') {
      FUN_00887914(param_1 + 0x20);
      return;
    }
    return;
  }
  cVar1 = (char)param_1[0xb];
  if (cVar1 == '\x04') {
    FUN_00a07b4c(param_1 + 0xc);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        iVar6 = param_1[2] + 1;
        iVar2 = param_1[1];
        while (iVar6 = iVar6 + -1, iVar6 != 0) {
          FUN_00ce1b8c(iVar2);
          iVar2 = iVar2 + 0xe0;
        }
        if (*param_1 != 0) {
          thunk_FUN_016d3fb4(param_1[1]);
        }
        iVar2 = param_1[3];
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x14);
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar4;
            bVar7 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar7);
          *piVar4 = iVar6 + -1;
          DataMemoryBarrier(0xb);
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
              puVar3 = (uint *)(iVar2 + 0x10);
              DataMemoryBarrier(0xb);
              do {
                bVar7 = (bool)hasExclusiveAccess(puVar3);
              } while (!bVar7);
              *puVar3 = *puVar3 & 0x7fffffff;
              DataMemoryBarrier(0xb);
            }
            puVar3 = (uint *)(iVar2 + 0x20);
            DataMemoryBarrier(0xb);
            do {
              uVar5 = *puVar3;
              bVar7 = (bool)hasExclusiveAccess(puVar3);
            } while (!bVar7);
            *puVar3 = uVar5 | 2;
            DataMemoryBarrier(0xb);
            if (uVar5 == 0) {
              iVar6 = *(int *)(iVar2 + 0x18);
              *(undefined4 *)(iVar2 + 0x18) = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar7 = (bool)hasExclusiveAccess(puVar3);
              } while (!bVar7);
              *puVar3 = *puVar3 & 0xfffffffd;
              if (iVar6 != 0) {
                (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar2 + 0x1c));
              }
            }
          }
          piVar4 = (int *)param_1[3];
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar4;
            bVar7 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar7);
          *piVar4 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f23b4(param_1[3]);
          }
        }
      }
      goto LAB_00adff80;
    }
    if ((char)param_1[0x16] == '\x03') {
      FUN_00ad7070(param_1 + 0x11);
    }
  }
  bVar7 = *(char *)((int)param_1 + 0x2d) != '\0';
  iVar2 = 0;
  if (bVar7) {
    iVar2 = param_1[8];
  }
  if (bVar7 && iVar2 != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  iVar2 = param_1[7];
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  if (iVar2 != 0) {
    piVar4 = (int *)(iVar2 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar7 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar7);
    *piVar4 = iVar6 + -1;
    DataMemoryBarrier(0xb);
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
        puVar3 = (uint *)(iVar2 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar7 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar7);
        *puVar3 = *puVar3 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar3 = (uint *)(iVar2 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar3;
        bVar7 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar7);
      *puVar3 = uVar5 | 2;
      DataMemoryBarrier(0xb);
      if (uVar5 == 0) {
        iVar6 = *(int *)(iVar2 + 0x18);
        *(undefined4 *)(iVar2 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar7 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar7);
        *puVar3 = *puVar3 & 0xfffffffd;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar2 + 0x1c));
        }
      }
    }
    piVar4 = (int *)param_1[7];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar7 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar7);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(param_1[7]);
    }
  }
  iVar6 = param_1[6] + 1;
  iVar2 = param_1[5];
  while (iVar6 = iVar6 + -1, iVar6 != 0) {
    FUN_00ce1b8c(iVar2);
    iVar2 = iVar2 + 0xe0;
  }
  if (param_1[4] != 0) {
    thunk_FUN_016d3fb4(param_1[5]);
    FUN_00ac9c30(param_1 + 0x24);
    return;
  }
LAB_00adff80:
  FUN_00ac9c30(param_1 + 0x24);
  return;
}

