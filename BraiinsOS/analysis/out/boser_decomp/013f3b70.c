// FUN_013f3b70 @ 013f3b70 size=32 calls_out=1 calls_in=1
// strings: 

void FUN_013f3b70(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  FUN_01406580();
  if (param_1 == 3) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
  }
  else {
    if (param_1 != 4) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_2);
    return;
  }
  return;
}

