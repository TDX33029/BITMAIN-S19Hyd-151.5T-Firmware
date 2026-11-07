// FUN_006b2478 @ 006b2478 size=404 calls_out=2 calls_in=1
// strings: 

void FUN_006b2478(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined *local_18;
  undefined4 *local_14;
  
  piVar10 = *(int **)(param_1 + 0x110);
  if (piVar10 != (int *)0xffffffff) {
    iVar6 = *piVar10;
    do {
      if (iVar6 == 0) {
        return;
      }
      if (iVar6 < 0) {
        local_14 = &DAT_0157d360;
        local_18 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00590e71,&local_18,&DAT_018ae288);
      }
      iVar5 = *piVar10;
      if (iVar5 == iVar6) {
        bVar2 = (bool)hasExclusiveAccess(piVar10);
        if (bVar2) {
          *piVar10 = iVar6 + 1;
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
      iVar6 = iVar5;
    } while (!bVar3);
    pcVar9 = (char *)(param_1 + 0x114);
    *(undefined1 *)(param_1 + 0x115) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar9;
      bVar3 = (bool)hasExclusiveAccess(pcVar9);
    } while (!bVar3);
    *pcVar9 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      piVar8 = piVar10 + 6;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = param_1 + 8;
      DataMemoryBarrier(0xb);
      *(int *)(iVar6 + 0x104) = param_1 + 8;
      puVar4 = (uint *)(piVar10 + 5);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar4;
        bVar3 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar3);
      *puVar4 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar6 = piVar10[3];
        piVar10[3] = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar3 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar3);
        *puVar4 = *puVar4 & 0xfffffffd;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(piVar10[4]);
        }
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar10;
      bVar3 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar3);
    *piVar10 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790f30(piVar10);
      return;
    }
  }
  return;
}

