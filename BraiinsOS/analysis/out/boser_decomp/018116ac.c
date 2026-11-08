// FUN_018116ac @ 018116ac size=84 calls_out=2 calls_in=1
// strings: 

void FUN_018116ac(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1 == 0) || (FUN_0143c520(param_2), param_2 == (int *)0x0)) {
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
    FUN_01436a38(param_2);
    return;
  }
  return;
}

