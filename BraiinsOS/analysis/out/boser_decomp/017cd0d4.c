// FUN_017cd0d4 @ 017cd0d4 size=164 calls_out=2 calls_in=1
// strings: 

void FUN_017cd0d4(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  puVar2 = (uint *)(param_1 + 8);
  do {
    uVar4 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar4 | 4;
  DataMemoryBarrier(0xb);
  if ((uVar4 & 10) == 8) {
    (**(code **)(param_1[4] + 8))(param_1[5]);
  }
  if ((uVar4 & 2) != 0) {
    iVar3 = param_1[2];
    param_1[2] = 0;
    if (iVar3 != 0 && param_1[3] != 0) {
      FUN_017c21dc(param_1[3]);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_017846cc(param_1);
    return;
  }
  return;
}

