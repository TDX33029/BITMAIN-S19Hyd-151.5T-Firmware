// FUN_016a8eb0 @ 016a8eb0 size=152 calls_out=2 calls_in=2
// strings: 

void FUN_016a8eb0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0134aee0(*param_1,param_1[1],4,0x14);
  FUN_0134aee0(param_1[3],param_1[4],1,9);
  FUN_0134aee0(param_1[6],param_1[7],4,4);
  FUN_0134aee0(param_1[9],param_1[10],4,8);
  FUN_0134aee0(param_1[0xc],param_1[0xd],4,4);
  piVar2 = (int *)param_1[0xf];
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
    FUN_018531c0(param_1[0xf],param_1[0x10]);
    return;
  }
  return;
}

