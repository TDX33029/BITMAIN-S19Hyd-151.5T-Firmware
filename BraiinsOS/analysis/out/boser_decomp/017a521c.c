// FUN_017a521c @ 017a521c size=108 calls_out=3 calls_in=0
// strings: 

void FUN_017a521c(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  FUN_01a64e38();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013b86b8(param_1);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_017856cc(param_2);
    return;
  }
  return;
}

