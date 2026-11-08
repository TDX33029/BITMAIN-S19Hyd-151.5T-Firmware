// FUN_009de0e0 @ 009de0e0 size=196 calls_out=5 calls_in=2
// strings: 

void FUN_009de0e0(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 5);
  if (cVar1 == '\0') {
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0xf) == '\x03') {
        FUN_019e0ae8(param_1 + 7);
        if (param_1[0xb] != 0) {
          (**(code **)(param_1[0xb] + 0xc))(param_1[0xc]);
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_009de22c(param_1 + 0xe);
      FUN_009d4300(param_1 + 6);
    }
    FUN_009de31c(param_1 + 2);
    param_1 = param_1 + 1;
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a97528(*param_1);
    return;
  }
  return;
}

