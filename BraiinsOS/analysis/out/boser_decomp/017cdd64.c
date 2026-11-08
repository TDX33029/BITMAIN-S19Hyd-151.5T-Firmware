// FUN_017cdd64 @ 017cdd64 size=156 calls_out=2 calls_in=1
// strings: 

void FUN_017cdd64(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 auStack_b0 [8];
  int local_a8;
  int local_a4;
  
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
    FUN_01bed4e2(auStack_b0,param_1 + 8,0xa0);
    *(undefined4 *)(param_1 + 0x10) = 5;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (local_a8 != 5 || local_a4 != 0) {
      FUN_017cca04(auStack_b0);
    }
  }
  return;
}

