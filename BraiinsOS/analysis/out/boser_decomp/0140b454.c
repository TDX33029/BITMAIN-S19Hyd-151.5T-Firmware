// FUN_0140b454 @ 0140b454 size=80 calls_out=2 calls_in=0
// strings: 

void FUN_0140b454(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  if (param_1 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c();
    }
  }
  FUN_01406bcc(param_2);
  return;
}

