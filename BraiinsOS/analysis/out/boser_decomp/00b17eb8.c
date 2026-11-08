// FUN_00b17eb8 @ 00b17eb8 size=116 calls_out=1 calls_in=1
// strings: 

void FUN_00b17eb8(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if ((*param_1 & 3) == 2) {
    FUN_019bb7e0(param_1[0x18],param_1[0x19]);
    (**(code **)(param_1[0x12] + 0x10))(param_1 + 0x15,param_1[0x13],param_1[0x14]);
    FUN_01a68db4(param_1 + 2);
    piVar2 = (int *)param_1[0x16];
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
      FUN_018531c0(param_1[0x16],param_1[0x17]);
      return;
    }
    return;
  }
  if (*param_1 == 3) {
    return;
  }
  FUN_0132b958(param_1[0x18],param_1[0x19],8,0x10);
  FUN_0132b958(param_1[0x1b],param_1[0x1c],8,0x10);
  if (param_1[6] == 2 && param_1[7] == 0) {
    return;
  }
  FUN_0132b958(param_1[10],param_1[0xb],8,8);
  return;
}

