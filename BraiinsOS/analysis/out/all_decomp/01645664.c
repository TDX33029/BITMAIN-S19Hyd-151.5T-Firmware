// FUN_01645664 @ 01645664 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_01645664(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(param_2);
      return;
    }
  }
  else if (param_1 != 2) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(param_2);
      return;
    }
    return;
  }
  return;
}

