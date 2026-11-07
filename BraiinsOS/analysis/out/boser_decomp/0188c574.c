// FUN_0188c574 @ 0188c574 size=112 calls_out=1 calls_in=1
// strings: 

void FUN_0188c574(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    puVar2 = (uint *)(param_1 + 0x18);
    do {
      uVar4 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar4 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar4 & 10) == 8) {
      (**(code **)(*(int *)(param_1 + 8) + 8))(*(undefined4 *)(param_1 + 0xc));
    }
    if ((uVar4 & 2) == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (iVar3 != 0) {
      FUN_01a69838();
      return;
    }
  }
  return;
}

