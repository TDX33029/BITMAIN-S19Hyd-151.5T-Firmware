// FUN_00640a08 @ 00640a08 size=700 calls_out=7 calls_in=4
// strings: 

void FUN_00640a08(int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\0') {
    piVar4 = *(int **)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    goto LAB_00640b2c;
  }
  if (cVar1 == '\x03') {
    uVar9 = *(undefined4 *)(param_1 + 0x20);
    puVar10 = *(undefined4 **)(param_1 + 0x24);
    pcVar8 = (code *)*puVar10;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar9);
    }
    if (puVar10[1] != 0) {
      thunk_FUN_016d3fb4(uVar9);
    }
    goto LAB_00640ae4;
  }
  if (cVar1 != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 == '\x04') {
    piVar4 = *(int **)(param_1 + 0x24);
    if (*piVar4 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(piVar4);
      if (bVar2) {
        *piVar4 = 0x84;
        goto LAB_00640b7c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar4[2] + 0x10))();
LAB_00640b7c:
    if (*(char *)(param_1 + 0x1d) != '\0') {
      piVar4 = *(int **)(param_1 + 0x24);
      if (*piVar4 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar4);
        if (bVar2) {
          *piVar4 = 0x84;
          goto LAB_00640bc0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar4[2] + 0x10))();
    }
LAB_00640bc0:
    piVar4 = (int *)(param_1 + 0x18);
    iVar7 = *piVar4;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    if (iVar7 != 0) {
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar7 + 0x10) < 0) {
        puVar5 = (uint *)(iVar7 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar2);
        *puVar5 = *puVar5 & 0x7fffffff;
        DataMemoryBarrier(0xb);
        iVar7 = *piVar4;
      }
      else {
        iVar7 = *piVar4;
      }
      if (iVar7 != 0) {
        do {
          while (bVar3 = FUN_00cefe20(piVar4), bVar3 == 2) {
            if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_0187bde8);
            }
            DataMemoryBarrier(0xb);
            if (*(int *)(*piVar4 + 0x10) == 0) goto LAB_00640c68;
            FUN_016da3a8();
          }
        } while ((bVar3 & 1) != 0);
LAB_00640c68:
        piVar6 = (int *)*piVar4;
        if (piVar6 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar6;
            bVar2 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar2);
          *piVar6 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0078cf4c(*piVar4);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined2 *)(param_1 + 0x1e) = 0;
    cVar1 = *(char *)(param_1 + 8);
  }
  else {
    if (cVar1 == '\x03') goto LAB_00640b7c;
    if (cVar1 == '\0') {
      piVar4 = *(int **)(param_1 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0x14));
      }
      piVar4 = *(int **)(param_1 + 0xc);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 != 1) goto LAB_00640ae4;
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*(undefined4 *)(param_1 + 0xc));
      cVar1 = *(char *)(param_1 + 8);
    }
    else {
LAB_00640ae4:
      cVar1 = *(char *)(param_1 + 8);
    }
  }
  if (cVar1 == '\0') {
    return;
  }
  piVar4 = *(int **)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar7 + -1;
LAB_00640b2c:
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}

