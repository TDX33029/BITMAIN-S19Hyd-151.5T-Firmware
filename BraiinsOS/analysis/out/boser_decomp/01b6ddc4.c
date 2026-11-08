// FUN_01b6ddc4 @ 01b6ddc4 size=96 calls_out=0 calls_in=3
// strings: 

void FUN_01b6ddc4(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  do {
    if (iVar2 == -1) {
      return;
    }
    DataMemoryBarrier(0xb);
    iVar1 = *param_1;
    bVar3 = false;
    if ((iVar1 == iVar2) && (bVar3 = (bool)hasExclusiveAccess(param_1), bVar3)) {
      *param_1 = iVar2 + 1;
    }
    DataMemoryBarrier(0xb);
    iVar2 = iVar1;
  } while (!bVar3);
  return;
}

