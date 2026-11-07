// FUN_005f5010 @ 005f5010 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_005f5010(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_012cb6a8();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a384d0(param_1);
    return;
  }
  return;
}

