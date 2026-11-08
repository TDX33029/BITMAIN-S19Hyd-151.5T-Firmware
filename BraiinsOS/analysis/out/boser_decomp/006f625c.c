// FUN_006f625c @ 006f625c size=224 calls_out=3 calls_in=1
// strings: 

void FUN_006f625c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*param_1 == 0) {
    piVar2 = (int *)param_1[0x11];
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_1[0x11],param_1[0x12]);
      }
    }
    FUN_006f6418(param_1 + 3);
    iVar4 = 0x2c;
    FUN_00b96a8c(param_1 + 6);
  }
  else {
    piVar2 = (int *)param_1[0x13];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[0x13],param_1[0x14]);
    }
    piVar2 = (int *)param_1[0xf];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[0xf],param_1[0x10]);
    }
    iVar4 = 0x20;
    FUN_00b96a8c(param_1 + 3);
  }
  puVar3 = (undefined4 *)((int)param_1 + iVar4);
  uVar5 = puVar3[1];
  FUN_006f6128(uVar5,puVar3[2]);
  FUN_0134aee0(*puVar3,uVar5,4,0x5c);
  return;
}

