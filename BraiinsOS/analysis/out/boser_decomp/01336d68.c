// FUN_01336d68 @ 01336d68 size=160 calls_out=4 calls_in=0
// strings: 

void FUN_01336d68(int *param_1)

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
    piVar2 = (int *)param_1[0x10];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016bbfc4(param_1[0x10]);
    }
    FUN_01336ea4(param_1[0x11]);
    FUN_0134bd64(param_1[4],param_1[5]);
    iVar4 = 0x34;
  }
  FUN_0134bd64(*(undefined4 *)((int)param_1 + iVar4),((undefined4 *)((int)param_1 + iVar4))[1]);
  return;
}

