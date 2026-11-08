// FUN_009200d0 @ 009200d0 size=108 calls_out=3 calls_in=6
// strings: 

void FUN_009200d0(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  uVar3 = *param_1;
  uVar2 = 4;
  if ((int)uVar3 < 0) {
    uVar2 = uVar3 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
  case 3:
    return;
  case 1:
    FUN_01443048(param_1[1],param_1[2]);
    return;
  case 2:
    piVar5 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    break;
  default:
    FUN_019bb7e0(uVar3,param_1[1]);
    return;
  }
  do {
    iVar4 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(param_1[1],param_1[2]);
    return;
  }
  return;
}

