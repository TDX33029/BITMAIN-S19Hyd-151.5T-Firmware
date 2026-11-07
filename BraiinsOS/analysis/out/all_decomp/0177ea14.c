// FUN_0177ea14 @ 0177ea14 size=100 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_0177ea14(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  do {
    if (iVar2 == -1) {
      return 0;
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
  return 0;
}

