// FUN_017126e4 @ 017126e4 size=128 calls_out=0 calls_in=3
// strings: 

uint FUN_017126e4(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint *puVar4;
  
  puVar4 = (uint *)(param_1 + 0x68);
  uVar2 = *(uint *)(param_1 + 0x68);
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
    (**(code **)(*(int *)(param_1 + 0x60) + 8))(*(undefined4 *)(param_1 + 100));
  }
  return (uVar1 & 4) >> 2 ^ 1;
}

