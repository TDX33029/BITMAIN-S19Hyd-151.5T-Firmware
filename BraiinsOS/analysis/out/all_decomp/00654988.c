// FUN_00654988 @ 00654988 size=512 calls_out=6 calls_in=36
// strings: 

void FUN_00654988(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\0') {
    piVar4 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[2]);
    }
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*param_1);
      return;
    }
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    piVar4 = (int *)param_1[6];
    if (*piVar4 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(piVar4);
      if (bVar2) {
        *piVar4 = 0x84;
        goto LAB_00654a4c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar4[2] + 0x10))();
  }
LAB_00654a4c:
  if (*(char *)((int)param_1 + 0x11) != '\0') {
    piVar4 = (int *)param_1[6];
    if (*piVar4 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(piVar4);
      if (bVar2) {
        *piVar4 = 0x84;
        goto LAB_00654a90;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar4[2] + 0x10))();
  }
LAB_00654a90:
  piVar4 = param_1 + 3;
  iVar5 = *piVar4;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  if (iVar5 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar5 + 0x10) < 0) {
      puVar6 = (uint *)(iVar5 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar2);
      *puVar6 = *puVar6 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar5 = *piVar4;
    }
    else {
      iVar5 = *piVar4;
    }
    if (iVar5 != 0) {
      do {
        while (bVar3 = FUN_00cefe20(piVar4), bVar3 == 2) {
          if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*piVar4 + 0x10) == 0) goto LAB_00654b38;
          FUN_016da3a8();
        }
      } while ((bVar3 & 1) != 0);
LAB_00654b38:
      piVar7 = (int *)*piVar4;
      if (piVar7 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*piVar4);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  return;
}

