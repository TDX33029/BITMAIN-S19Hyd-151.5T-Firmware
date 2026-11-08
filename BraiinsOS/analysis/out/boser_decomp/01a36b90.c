// FUN_01a36b90 @ 01a36b90 size=136 calls_out=1 calls_in=0
// strings: 

void FUN_01a36b90(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  puVar2 = (uint *)(param_1 + 6);
  do {
    uVar4 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar4 | 4;
  DataMemoryBarrier(0xb);
  if ((uVar4 & 10) == 8) {
    (**(code **)(param_1[2] + 8))(param_1[3]);
  }
  if ((uVar4 & 2) != 0) {
    *(undefined1 *)(param_1 + 7) = 2;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38e68(param_1);
    return;
  }
  return;
}

