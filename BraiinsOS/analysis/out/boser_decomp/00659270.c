// FUN_00659270 @ 00659270 size=112 calls_out=3 calls_in=0
// strings: 

void FUN_00659270(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0134aee0(*param_1,param_1[1],4,4);
  FUN_016bcae0(param_1 + 3);
  FUN_0134aee0(param_1[6],param_1[7],4,4);
  piVar2 = (int *)param_1[10];
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
    FUN_018531c0(param_1[10],param_1[0xb]);
    return;
  }
  return;
}

