// FUN_0177327c @ 0177327c size=132 calls_out=3 calls_in=5
// strings: 

void FUN_0177327c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if ((char)param_1[8] == '\x02') {
    return;
  }
  FUN_017721f4(param_1 + 5);
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01436864(param_1[4]);
    }
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_01771f3c(param_1);
  return;
}

