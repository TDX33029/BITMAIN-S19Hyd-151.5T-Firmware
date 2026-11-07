// FUN_0143cacc @ 0143cacc size=224 calls_out=5 calls_in=0
// strings: 

void FUN_0143cacc(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  if (iVar2 < -0x7ffffffe) {
    FUN_019bb7e0(param_1[1],param_1[2]);
  }
  else if (iVar2 != -0x7ffffffe) {
    FUN_019bb7e0(iVar2,param_1[1]);
    FUN_0134aee0(param_1[3],param_1[4],2,8);
    if (param_1[0xb] != -0x80000000) {
      FUN_019bb7e0(param_1[0xb],param_1[0xc]);
    }
    iVar2 = param_1[9];
    FUN_018e349c(iVar2,param_1[10]);
    FUN_0134aee0(param_1[8],iVar2,4,0x10);
  }
  piVar3 = (int *)param_1[0x13];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa09c(param_1[0x13]);
  }
  piVar3 = (int *)param_1[0x14];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(param_1[0x14],param_1[0x15]);
    return;
  }
  return;
}

