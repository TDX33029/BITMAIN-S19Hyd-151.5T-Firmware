// FUN_0094afd4 @ 0094afd4 size=400 calls_out=2 calls_in=0
// strings: 

void FUN_0094afd4(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  undefined *local_18;
  undefined2 *local_14;
  
  piVar9 = *(int **)(param_1 + 0x28);
  if (piVar9 != (int *)&DAT_ffffffff) {
    iVar4 = *piVar9;
    do {
      if (iVar4 == 0) {
        return;
      }
      if (iVar4 < 0) {
        local_14 = &DAT_0132b6a0;
        local_18 = &DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_00590e5f,&local_18,&DAT_01d2e890);
      }
      iVar7 = *piVar9;
      if (iVar7 == iVar4) {
        bVar2 = (bool)hasExclusiveAccess(piVar9);
        if (bVar2) {
          *piVar9 = iVar4 + 1;
        }
        bVar3 = false;
        if (bVar2) {
          DataMemoryBarrier(0xb);
          bVar3 = true;
        }
      }
      else {
        bVar3 = false;
        ClearExclusiveLocal();
      }
      iVar4 = iVar7;
    } while (!bVar3);
    pcVar10 = (char *)(param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x2d) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar10;
      bVar3 = (bool)hasExclusiveAccess(pcVar10);
    } while (!bVar3);
    *pcVar10 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      piVar8 = piVar9 + 6;
      *(undefined4 *)(param_1 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = param_1 + 8;
      DataMemoryBarrier(0xb);
      *(int *)(iVar4 + 0x1c) = param_1 + 8;
      puVar5 = (uint *)(piVar9 + 5);
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar5;
        bVar3 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar3);
      *puVar5 = uVar6 | 2;
      DataMemoryBarrier(0xb);
      if (uVar6 == 0) {
        iVar4 = piVar9[3];
        piVar9[3] = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar3 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar3);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(piVar9[4]);
        }
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar9;
      bVar3 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar3);
    *piVar9 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a903d0(piVar9);
      return;
    }
  }
  return;
}

