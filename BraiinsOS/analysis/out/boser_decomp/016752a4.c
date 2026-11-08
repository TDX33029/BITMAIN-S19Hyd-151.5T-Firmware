// FUN_016752a4 @ 016752a4 size=108 calls_out=1 calls_in=1
// strings: 

void FUN_016752a4(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01670d04();
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01670d04(param_2);
    return;
  }
  return;
}

