// FUN_019e0788 @ 019e0788 size=116 calls_out=0 calls_in=16
// strings: 

void FUN_019e0788(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  
  uVar1 = param_2[1];
  uVar3 = *param_2;
  puVar2 = (uint *)(param_1 + 8);
  DataMemoryBarrier(0xb);
  uVar6 = *(uint *)(param_1 + 8);
  do {
    if ((uint)(byte)uVar1 != (uVar6 & 0xffffff) >> 0x10) {
      return;
    }
    uVar4 = *puVar2;
    if (uVar4 == uVar6) {
      DataMemoryBarrier(0xb);
      bVar5 = (bool)hasExclusiveAccess(puVar2);
      if (bVar5) {
        *puVar2 = uVar6 & (uVar3 & 0x33 ^ 0xff003f);
      }
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    uVar6 = uVar4;
  } while (!bVar5);
  return;
}

