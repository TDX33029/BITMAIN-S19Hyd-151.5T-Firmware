// FUN_016bca08 @ 016bca08 size=104 calls_out=2 calls_in=0
// strings: 

void FUN_016bca08(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0134aee0(*param_1,param_1[1],4,4);
  FUN_0134aee0(param_1[3],param_1[4],4,4);
  piVar2 = (int *)param_1[7];
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(param_1[7],param_1[8]);
    return;
  }
  return;
}

