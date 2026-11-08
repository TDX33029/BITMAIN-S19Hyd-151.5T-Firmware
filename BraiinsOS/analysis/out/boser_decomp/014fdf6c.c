// FUN_014fdf6c @ 014fdf6c size=164 calls_out=4 calls_in=2
// strings: 

void FUN_014fdf6c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 2) {
    piVar2 = (int *)param_1[0xe];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    iVar4 = 0x14;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01340158(param_1[0xe]);
    }
  }
  else {
    FUN_014fe07c(param_1 + 0x10);
    FUN_019bb7e0(param_1[4],param_1[5]);
    iVar4 = 0x34;
  }
  FUN_019bb7e0(*(undefined4 *)((int)param_1 + iVar4),((undefined4 *)((int)param_1 + iVar4))[1]);
  piVar2 = (int *)param_1[0x13];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0134020c(param_1[0x13]);
    return;
  }
  return;
}

