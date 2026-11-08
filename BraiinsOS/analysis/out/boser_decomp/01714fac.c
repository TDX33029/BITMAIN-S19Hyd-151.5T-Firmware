// FUN_01714fac @ 01714fac size=120 calls_out=1 calls_in=2
// strings: 

void FUN_01714fac(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    puVar2 = (uint *)(param_1 + 0x20);
    do {
      uVar4 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar4 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar4 & 10) == 8) {
      (**(code **)(*(int *)(param_1 + 0x10) + 8))(*(undefined4 *)(param_1 + 0x14));
    }
    if ((uVar4 & 2) == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 0;
    if (iVar3 != 0 && *(int *)(param_1 + 0xc) != 0) {
      FUN_01702f28(*(int *)(param_1 + 0xc));
      return;
    }
  }
  return;
}

