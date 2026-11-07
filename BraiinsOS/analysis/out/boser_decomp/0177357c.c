// FUN_0177357c @ 0177357c size=132 calls_out=3 calls_in=5
// strings: 

void FUN_0177357c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 4 && param_1[1] == 0) {
    return;
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    param_1 = param_1 + 2;
  }
  else {
    if ((undefined1 *)param_1[0xd8] != &DAT_3b9aca00) {
      FUN_01771d60(param_1[0xde]);
    }
    piVar2 = (int *)param_1[0xe0];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01436864(param_1[0xe0]);
    }
  }
  FUN_01773714(param_1);
  return;
}

