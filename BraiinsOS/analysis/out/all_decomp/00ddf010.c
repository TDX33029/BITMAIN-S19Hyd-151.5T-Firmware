// FUN_00ddf010 @ 00ddf010 size=488 calls_out=2 calls_in=1
// strings: 

void FUN_00ddf010(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x490) == '\0') {
    FUN_005c4b54(param_1);
    iVar3 = *(int *)(param_1 + 0x480);
    if (iVar3 != 0) {
      puVar4 = (uint *)(iVar3 + 0x18);
      uVar6 = *(uint *)(iVar3 + 0x18);
      do {
        while( true ) {
          uVar5 = uVar6;
          if ((uVar5 & 4) != 0) goto LAB_00ddf0c4;
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
LAB_00ddf0c4:
      if ((uVar5 & 5) == 1) {
        (**(code **)(*(int *)(iVar3 + 0x10) + 8))(*(undefined4 *)(iVar3 + 0x14));
      }
      piVar2 = *(int **)(param_1 + 0x480);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0165863c(*(undefined4 *)(param_1 + 0x480));
          return;
        }
        return;
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0x490) != '\x03') {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x48c);
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (bVar1) {
      *piVar2 = 0x84;
      goto LAB_00ddf130;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar2[2] + 0x10))();
LAB_00ddf130:
  iVar3 = *(int *)(param_1 + 0x484);
  if (iVar3 != 0) {
    puVar4 = (uint *)(iVar3 + 0x18);
    uVar6 = *(uint *)(iVar3 + 0x18);
    do {
      while( true ) {
        uVar5 = uVar6;
        if ((uVar5 & 4) != 0) goto LAB_00ddf198;
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
LAB_00ddf198:
    if ((uVar5 & 5) == 1) {
      (**(code **)(*(int *)(iVar3 + 0x10) + 8))(*(undefined4 *)(iVar3 + 0x14));
    }
    piVar2 = *(int **)(param_1 + 0x484);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0165863c(*(undefined4 *)(param_1 + 0x484));
      }
    }
  }
  FUN_005c4b54(param_1 + 0x240);
  return;
}

