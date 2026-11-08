// FUN_01bef02c @ 01bef02c size=362 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_01bef02c(uint *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  
  if ((*param_1 & 0xf) == 0) {
    puVar3 = param_1 + 1;
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar3);
      uVar4 = *puVar3;
      if (uVar4 != 0) break;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
      if (bVar1) {
        *puVar3 = 0x10;
      }
      uVar4 = 0;
    } while (!bVar1);
    DataMemoryBarrier(0x1b);
    if (uVar4 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_01bef058(param_1,0);
  return uVar2;
}

