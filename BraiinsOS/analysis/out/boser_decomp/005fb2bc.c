// FUN_005fb2bc @ 005fb2bc size=212 calls_out=2 calls_in=0
// strings: 

void FUN_005fb2bc(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar4;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  switch(*(undefined1 *)(param_1 + 0x1c)) {
  case 0:
  case 2:
    break;
  case 1:
    piVar4 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      iVar3 = *(int *)(param_1 + 0x20);
      piVar4 = *(int **)(iVar3 + 8);
      if (piVar4[0x13] != 0) {
        FUN_01443048(piVar4[0x13],piVar4[0x14],1,0,unaff_r4,unaff_r5);
      }
      if (*piVar4 != 2) {
        FUN_019bb7e0(piVar4[4],piVar4[5]);
      }
      thunk_FUN_01be4678(piVar4);
      if (iVar3 == -1) {
        return;
      }
      piVar4 = (int *)(iVar3 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_01be4678(iVar3);
        return;
      }
      return;
    }
    break;
  case 3:
    piVar4 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    iVar3 = *(int *)(param_1 + 0x20);
    FUN_00d47b64(*(undefined4 *)(iVar3 + 8));
    if (iVar3 == -1) {
      return;
    }
    piVar4 = (int *)(iVar3 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(iVar3);
      return;
    }
    return;
  default:
    piVar4 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013cdbf8(*(undefined4 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}

