// FUN_01bef6b0 @ 01bef6b0 size=176 calls_out=2 calls_in=4
// strings: 

void FUN_01bef6b0(uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar2 = FUN_01bef7fe();
  if (iVar2 == 0x10) {
    iVar2 = 100;
    do {
      if ((*param_1 == 0) || (param_1[1] != 0)) break;
      DataMemoryBarrier(0x1b);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    do {
      do {
        iVar2 = FUN_01bef7fe(param_1);
        if (iVar2 != 0x10) {
          return;
        }
        uVar3 = *param_1;
      } while ((uVar3 == 0) || ((uVar3 & 0x7fffffff) != 0x7fffffff));
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
        if (uVar3 != *param_1) goto LAB_01bef6e4;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = uVar3 | 0x80000000;
LAB_01bef6e4:
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

