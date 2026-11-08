// FUN_01715128 @ 01715128 size=148 calls_out=2 calls_in=1
// strings: 

void FUN_01715128(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int local_68;
  int iStack_64;
  
  if (param_1 == 0) {
    return;
  }
  puVar2 = (uint *)(param_1 + 0x70);
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 | 4;
  DataMemoryBarrier(0xb);
  if ((uVar3 & 10) == 8) {
    (**(code **)(*(int *)(param_1 + 0x60) + 8))(*(undefined4 *)(param_1 + 100));
  }
  if ((uVar3 & 2) != 0) {
    FUN_01bed4e2(&local_68,(undefined4 *)(param_1 + 8),0x58);
    *(undefined4 *)(param_1 + 8) = 4;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (local_68 != 4 || iStack_64 != 0) {
      FUN_01712c88(&local_68);
    }
  }
  return;
}

