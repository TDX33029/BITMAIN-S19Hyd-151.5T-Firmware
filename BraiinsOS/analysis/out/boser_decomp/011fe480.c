// FUN_011fe480 @ 011fe480 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_011fe480(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  FUN_019ed980();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db698(param_1);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db698(param_2);
    return;
  }
  return;
}

