// FUN_01206518 @ 01206518 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_01206518(int *param_1)

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
    FUN_0121cc30(param_1);
    return;
  }
  return;
}

