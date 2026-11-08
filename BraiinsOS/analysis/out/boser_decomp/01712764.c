// FUN_01712764 @ 01712764 size=128 calls_out=0 calls_in=11
// strings: 

uint FUN_01712764(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint *puVar4;
  
  puVar4 = (uint *)(param_1 + 0xb0);
  uVar2 = *(uint *)(param_1 + 0xb0);
  do {
    uVar1 = uVar2;
    if ((uVar1 & 4) != 0) break;
    uVar2 = *puVar4;
    if (uVar2 == uVar1) {
      DataMemoryBarrier(0xb);
      bVar3 = hasExclusiveAccess(puVar4);
      if ((bool)bVar3) {
        *puVar4 = uVar1 | 2;
      }
    }
    else {
      bVar3 = 0;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
  } while (!(bool)(bVar3 & 1));
  if ((uVar1 & 5) == 1) {
    (**(code **)(*(int *)(param_1 + 0xa8) + 8))(*(undefined4 *)(param_1 + 0xac));
  }
  return (uVar1 & 4) >> 2 ^ 1;
}

