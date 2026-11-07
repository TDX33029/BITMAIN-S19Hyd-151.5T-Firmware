// FUN_00eb5ea4 @ 00eb5ea4 size=192 calls_out=4 calls_in=1
// strings: 

void FUN_00eb5ea4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  
  FUN_0164c938();
  if (*param_1 == 0) {
    piVar3 = param_1 + 5;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) {
      FUN_00eb5c44();
    }
  }
  if (param_1[6] == 0) {
    piVar3 = (int *)param_1[7];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(param_1[7]);
    }
  }
  else {
    piVar3 = (int *)param_1[7];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(param_1[7]);
    }
  }
  FUN_01650258();
  piVar3 = (int *)param_1[8];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01658d40(param_1[8]);
  }
  iVar2 = param_1[9];
  if (iVar2 != 0) {
    puVar4 = (uint *)(iVar2 + 0x18);
    do {
      uVar5 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar5 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar5 & 10) == 8) {
      (**(code **)(*(int *)(iVar2 + 8) + 8))(*(undefined4 *)(iVar2 + 0xc));
    }
    if ((uVar5 & 2) != 0) {
      *(undefined1 *)(iVar2 + 0x1c) = 0;
    }
    piVar3 = (int *)param_1[9];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0165863c(param_1[9]);
        return;
      }
      return;
    }
  }
  return;
}

