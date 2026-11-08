// FUN_018f6864 @ 018f6864 size=196 calls_out=7 calls_in=1
// strings: 

void FUN_018f6864(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1[0xd] != -0x80000000) {
    piVar2 = (int *)param_1[0xb];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa118(param_1[0xb]);
    }
    FUN_01af7ab4(param_1 + 0xd);
    FUN_0134bd64(param_1[0xd],param_1[0xe]);
    piVar2 = (int *)param_1[0xc];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa5c0(param_1[0xc]);
    }
    FUN_018fcdb0(param_1[6],param_1[7]);
    FUN_018fcdb0(param_1[8],param_1[9]);
  }
  FUN_01934184();
  FUN_0134aee0(*param_1,param_1[1],8,0x48);
  return;
}

