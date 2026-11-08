// FUN_0140b338 @ 0140b338 size=72 calls_out=2 calls_in=0
// strings: 

void FUN_0140b338(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
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
  FUN_01406bcc(param_2);
  return;
}

