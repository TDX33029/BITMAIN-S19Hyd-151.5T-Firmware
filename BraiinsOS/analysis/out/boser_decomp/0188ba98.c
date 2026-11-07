// FUN_0188ba98 @ 0188ba98 size=148 calls_out=2 calls_in=2
// strings: 

void FUN_0188ba98(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int local_b0;
  int iStack_ac;
  
  if (param_1 == 0) {
    return;
  }
  puVar2 = (uint *)(param_1 + 0xb8);
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 | 4;
  DataMemoryBarrier(0xb);
  if ((uVar3 & 10) == 8) {
    (**(code **)(*(int *)(param_1 + 0xa8) + 8))(*(undefined4 *)(param_1 + 0xac));
  }
  if ((uVar3 & 2) != 0) {
    FUN_01bed4e2(&local_b0,(undefined4 *)(param_1 + 8),0xa0);
    *(undefined4 *)(param_1 + 8) = 5;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (local_b0 != 5 || iStack_ac != 0) {
      FUN_01742448(&local_b0);
    }
  }
  return;
}

