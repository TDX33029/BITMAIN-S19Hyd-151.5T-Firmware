// FUN_01bef8ee @ 01bef8ee size=6 calls_out=0 calls_in=5
// strings: 

void FUN_01bef8ee(uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar2 = FUN_01bef848();
  if (iVar2 == 0x10) {
    iVar2 = 100;
    do {
      if ((*param_1 == 0) || (param_1[1] != 0)) break;
      DataMemoryBarrier(0x1b);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    do {
      do {
        iVar2 = FUN_01bef848(param_1);
        if (iVar2 != 0x10) {
          return;
        }
        uVar3 = *param_1;
      } while (uVar3 == 0);
      puVar4 = param_1 + 1;
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar4);
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 + 1;
      DataMemoryBarrier(0x1b);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(param_1);
        if (uVar3 != *param_1) goto LAB_01bef78a;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = uVar3 | 0x80000000;
LAB_01bef78a:
      DataMemoryBarrier(0x1b);
      uVar3 = FUN_01bee1e4(param_1,uVar3 | 0x80000000,0,0,param_1[2] ^ 0x80);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar4);
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 - 1;
      DataMemoryBarrier(0x1b);
    } while ((uVar3 & 0xfffffffb) == 0);
  }
  return;
}

