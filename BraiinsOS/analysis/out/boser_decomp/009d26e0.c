// FUN_009d26e0 @ 009d26e0 size=84 calls_out=1 calls_in=1
// strings: 

void FUN_009d26e0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  if (*param_1 != 0 || param_1[1] != 0) {
    uVar1 = (uint)*(byte *)(param_1 + 10);
    bVar4 = uVar1 == 0;
    if (bVar4) {
      uVar1 = param_1[2];
    }
    if (bVar4 && uVar1 == 0) {
      piVar3 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar4 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar4);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a95f90(param_1[3]);
        return;
      }
      return;
    }
  }
  return;
}

