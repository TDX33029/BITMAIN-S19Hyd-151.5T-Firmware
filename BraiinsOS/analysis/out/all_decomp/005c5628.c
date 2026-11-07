// FUN_005c5628 @ 005c5628 size=908 calls_out=13 calls_in=2
// strings: 

void FUN_005c5628(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int *local_30;
  int *local_2c;
  int *local_28;
  
  FUN_005c178c();
  piVar9 = *(int **)(param_1 + 0xf0);
  FUN_00ebf24c(piVar9);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar9;
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45090(*(undefined4 *)(param_1 + 0xf0));
  }
  iVar2 = *(int *)(param_1 + 0xf4);
  DataMemoryBarrier(0xb);
  piVar9 = (int *)(iVar2 + 0x84);
  do {
    iVar3 = *piVar9;
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 == 1) {
    FUN_005c9954(iVar2 + 0x20);
    puVar4 = (uint *)(iVar2 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar7 | 2;
    DataMemoryBarrier(0xb);
    if (uVar7 == 0) {
      iVar3 = *(int *)(iVar2 + 0x40);
      *(undefined4 *)(iVar2 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = 0;
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar2 + 0x44));
      }
    }
  }
  piVar9 = *(int **)(param_1 + 0xf4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar9;
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45090(*(undefined4 *)(param_1 + 0xf4));
  }
  puVar4 = *(uint **)(param_1 + 0xe0);
  iVar2 = *(int *)(param_1 + 0xec);
  puVar10 = puVar4 + 1;
  uVar7 = ~*puVar4 & 0x80808080;
  do {
    if (uVar7 == 0) {
      puVar6 = puVar10;
      if (iVar2 == 0) {
        FUN_00ee1460((undefined4 *)(param_1 + 0xe0));
        FUN_005c653c(param_1 + 0x60);
        piVar9 = *(int **)(param_1 + 0x100);
        local_28 = piVar9 + 0x20;
        if ((char)piVar9[0x1f] == '\0') {
          *(undefined1 *)(piVar9 + 0x1f) = 1;
        }
        FUN_01646818(local_28);
        FUN_0163b708(piVar9 + 0x18);
        local_2c = piVar9 + 8;
        local_30 = piVar9 + 0x1c;
        FUN_00ec8ca8(&local_30);
        FUN_00ec8ca8(&local_30);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar9;
          bVar1 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar1);
        *piVar9 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e45658(*(undefined4 *)(param_1 + 0x100));
        }
        iVar2 = *(int *)(param_1 + 0x104);
        DataMemoryBarrier(0xb);
        piVar9 = (int *)(iVar2 + 0x98);
        do {
          iVar3 = *piVar9;
          bVar1 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar1);
        *piVar9 = iVar3 + -1;
        DataMemoryBarrier(0xb);
        if (iVar3 == 1) {
          FUN_005c9e50(iVar2 + 0x20);
          puVar4 = (uint *)(iVar2 + 0x48);
          DataMemoryBarrier(0xb);
          do {
            uVar7 = *puVar4;
            bVar1 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar1);
          *puVar4 = uVar7 | 2;
          DataMemoryBarrier(0xb);
          if (uVar7 == 0) {
            iVar3 = *(int *)(iVar2 + 0x40);
            *(undefined4 *)(iVar2 + 0x40) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar4);
            } while (!bVar1);
            *puVar4 = 0;
            if (iVar3 != 0) {
              (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar2 + 0x44));
            }
          }
        }
        piVar9 = *(int **)(param_1 + 0x104);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar9;
          bVar1 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar1);
        *piVar9 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e45658(*(undefined4 *)(param_1 + 0x104));
        }
        piVar9 = *(int **)(param_1 + 0x148);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar9;
          bVar1 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar1);
        *piVar9 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078f324(*(undefined4 *)(param_1 + 0x148));
        }
        FUN_005c4f44(param_1 + 0x118);
        return;
      }
      do {
        puVar10 = puVar6 + 1;
        uVar7 = *puVar6;
        puVar4 = puVar4 + -0x30;
        puVar6 = puVar10;
      } while ((uVar7 & 0x80808080) == 0x80808080);
      uVar7 = uVar7 & 0x80808080 ^ 0x80808080;
    }
    uVar5 = LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                    uVar7 >> 0x18);
    uVar5 = puVar4[((uVar5 >> 3) * -2 - (uVar5 >> 3)) * 4 + -2];
    uVar7 = uVar7 - 1 & uVar7;
    puVar6 = (uint *)(uVar5 + 0x10);
    *(undefined1 *)(uVar5 + 0x14) = 1;
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar6;
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = uVar8 | 2;
    DataMemoryBarrier(0xb);
    if (uVar8 == 0) {
      iVar3 = *(int *)(uVar5 + 8);
      *(undefined4 *)(uVar5 + 8) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = *puVar6 & 0xfffffffd;
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(*(undefined4 *)(uVar5 + 0xc));
      }
    }
    iVar2 = iVar2 + -1;
  } while( true );
}

