// FUN_00b195e4 @ 00b195e4 size=188 calls_out=4 calls_in=1
// strings: 

void FUN_00b195e4(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if ((*param_1 & 7) == 3) {
    FUN_0132b958(param_1[8],param_1[9],8,0x48);
    FUN_0132b958(param_1[0xb],param_1[0xc],8,0xc0);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_019bb7e0(param_1[0x16],param_1[0x17]);
  (**(code **)(param_1[0x10] + 0x10))(param_1 + 0x13,param_1[0x11],param_1[0x12]);
  FUN_01a68db4(param_1);
  piVar2 = (int *)param_1[0x14];
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
    FUN_018531c0(param_1[0x14],param_1[0x15]);
    return;
  }
  return;
}

