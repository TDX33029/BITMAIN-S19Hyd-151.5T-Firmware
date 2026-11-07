// FUN_0133b35c @ 0133b35c size=180 calls_out=4 calls_in=1
// strings: 

void FUN_0133b35c(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = 0x16;
  if (1 < *param_1) {
    uVar2 = *param_1 - 2;
  }
  if (uVar2 < 0x16) {
    if ((1 << (uVar2 & 0xff) & 0x37ffefU) != 0) {
      return;
    }
    if (uVar2 == 4) {
      uVar2 = param_1[1];
      uVar4 = param_1[2];
    }
    else {
      FUN_013386bc(param_1[7],param_1[8]);
      uVar2 = param_1[4];
      uVar4 = param_1[5];
    }
    FUN_0134bd64(uVar2,uVar4);
    return;
  }
  FUN_0134bd64(param_1[3],param_1[4]);
  piVar3 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0134025c(param_1[6]);
  }
  FUN_0133af50(param_1[7]);
  if (param_1[8] == 0) {
    return;
  }
  FUN_013386bc(param_1[8],param_1[9]);
  return;
}

