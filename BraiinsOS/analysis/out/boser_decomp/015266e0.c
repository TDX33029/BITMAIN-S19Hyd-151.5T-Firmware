// FUN_015266e0 @ 015266e0 size=412 calls_out=6 calls_in=0
// strings: 

void FUN_015266e0(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = *param_1;
  iVar4 = 4;
  if (2 < uVar2) {
    iVar4 = uVar2 - 3;
  }
  switch(iVar4) {
  case 0:
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    break;
  case 1:
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    break;
  case 2:
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0167a290(param_1[1],param_1[2]);
    }
    piVar3 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar2 = param_1[3];
    uVar5 = param_1[4];
    goto LAB_015267e8;
  case 3:
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    break;
  default:
    if (uVar2 == 2) {
      piVar3 = (int *)param_1[0xe];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar6 + -1;
      iVar4 = 0x14;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01340158(param_1[0xe]);
      }
    }
    else {
      FUN_0152665c(param_1[0x10],param_1[0x11]);
      FUN_019bb7e0(param_1[4],param_1[5]);
      iVar4 = 0x34;
    }
    FUN_019bb7e0(*(undefined4 *)((int)param_1 + iVar4),((undefined4 *)((int)param_1 + iVar4))[1]);
    piVar3 = (int *)param_1[0x13];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0134020c(param_1[0x13]);
      return;
    }
    return;
  }
  if (iVar4 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  uVar2 = param_1[1];
  uVar5 = param_1[2];
LAB_015267e8:
  FUN_0070451c(uVar2,uVar5);
  return;
}

