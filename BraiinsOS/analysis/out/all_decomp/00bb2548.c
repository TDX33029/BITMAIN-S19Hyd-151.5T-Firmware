// FUN_00bb2548 @ 00bb2548 size=188 calls_out=1 calls_in=0
// strings: 

void FUN_00bb2548(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  puVar2 = (uint *)(param_1 + 6);
  uVar5 = param_1[6];
  do {
    while( true ) {
      uVar4 = uVar5;
      if ((uVar4 & 4) != 0) goto LAB_00bb25b4;
      uVar5 = *puVar2;
      if (uVar5 == uVar4) break;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
    if (bVar1) {
      *puVar2 = uVar4 | 2;
    }
    DataMemoryBarrier(0xb);
  } while (!bVar1);
LAB_00bb25b4:
  if ((uVar4 & 5) == 1) {
    (**(code **)(param_1[4] + 8))(param_1[5]);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0165863c(param_1);
    return;
  }
  return;
}

