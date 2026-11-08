// FUN_0147c8b0 @ 0147c8b0 size=884 calls_out=4 calls_in=1
// strings: 

void FUN_0147c8b0(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int local_b0;
  int iStack_ac;
  
  cVar1 = (char)param_1[0x29];
  piVar4 = param_1 + 2;
  if (*param_1 == 0 && param_1[1] == 0) {
    if (cVar1 == '\x03') {
      iVar5 = param_1[0x28];
      if (iVar5 == 0) {
        return;
      }
      puVar3 = (uint *)(iVar5 + 0xb8);
      do {
        uVar6 = *puVar3;
        bVar2 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar2);
      *puVar3 = uVar6 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar6 & 10) == 8) {
        (**(code **)(*(int *)(iVar5 + 0xa8) + 8))(*(undefined4 *)(iVar5 + 0xac));
      }
      if ((uVar6 & 2) != 0) {
        FUN_016dd1aa(&local_b0,(undefined4 *)(iVar5 + 8),0xa0);
        *(undefined4 *)(iVar5 + 8) = 5;
        *(undefined4 *)(iVar5 + 0xc) = 0;
        if (local_b0 != 5 || iStack_ac != 0) {
          FUN_0146bde8(&local_b0);
        }
      }
      piVar4 = (int *)param_1[0x28];
      if (piVar4 == (int *)0x0) {
        return;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      goto LAB_0147cc00;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*piVar4 != 3 || param_1[3] != 0) goto LAB_0147cb40;
    iVar5 = param_1[4];
    if (iVar5 == 0) {
      return;
    }
    puVar3 = (uint *)(iVar5 + 0xb8);
    do {
      uVar6 = *puVar3;
      bVar2 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar2);
    *puVar3 = uVar6 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar6 & 10) == 8) {
      (**(code **)(*(int *)(iVar5 + 0xa8) + 8))(*(undefined4 *)(iVar5 + 0xac));
    }
    if ((uVar6 & 2) != 0) {
      FUN_016dd1aa(&local_b0,(undefined4 *)(iVar5 + 8),0xa0);
      *(undefined4 *)(iVar5 + 8) = 5;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      if (local_b0 != 5 || iStack_ac != 0) {
        FUN_0146bde8(&local_b0);
      }
    }
    piVar4 = (int *)param_1[4];
    if (piVar4 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar5 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      iVar5 = param_1[0x28];
      if (iVar5 == 0) {
        return;
      }
      puVar3 = (uint *)(iVar5 + 0xb8);
      do {
        uVar6 = *puVar3;
        bVar2 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar2);
      *puVar3 = uVar6 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar6 & 10) == 8) {
        (**(code **)(*(int *)(iVar5 + 0xa8) + 8))(*(undefined4 *)(iVar5 + 0xac));
      }
      if ((uVar6 & 2) != 0) {
        FUN_016dd1aa(&local_b0,(undefined4 *)(iVar5 + 8),0xa0);
        *(undefined4 *)(iVar5 + 8) = 5;
        *(undefined4 *)(iVar5 + 0xc) = 0;
        if (local_b0 != 5 || iStack_ac != 0) {
          FUN_0146bde8(&local_b0);
        }
      }
      piVar4 = (int *)param_1[0x28];
      if (piVar4 == (int *)0x0) {
        return;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
LAB_0147cc00:
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0149d868(param_1[0x28]);
        return;
      }
      return;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*piVar4 != 3 || param_1[3] != 0) {
LAB_0147cb40:
      FUN_01475c70(piVar4);
      return;
    }
    iVar5 = param_1[4];
    if (iVar5 == 0) {
      return;
    }
    puVar3 = (uint *)(iVar5 + 0xb8);
    do {
      uVar6 = *puVar3;
      bVar2 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar2);
    *puVar3 = uVar6 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar6 & 10) == 8) {
      (**(code **)(*(int *)(iVar5 + 0xa8) + 8))(*(undefined4 *)(iVar5 + 0xac));
    }
    if ((uVar6 & 2) != 0) {
      FUN_016dd1aa(&local_b0,(undefined4 *)(iVar5 + 8),0xa0);
      *(undefined4 *)(iVar5 + 8) = 5;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      if (local_b0 != 5 || iStack_ac != 0) {
        FUN_0146bde8(&local_b0);
      }
    }
    piVar4 = (int *)param_1[4];
    if (piVar4 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar5 + -1;
  }
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0149d868(param_1[4]);
    return;
  }
  return;
}

