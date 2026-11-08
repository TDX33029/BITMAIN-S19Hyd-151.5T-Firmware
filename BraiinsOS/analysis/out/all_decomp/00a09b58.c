// FUN_00a09b58 @ 00a09b58 size=176 calls_out=2 calls_in=5
// strings: 

void FUN_00a09b58(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xc);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)((int)param_1 + 0x2d);
    }
    if (bVar4 && cVar1 == '\x03') {
      if (param_1[6] != 0) {
        FUN_00aa0a58(param_1[6],param_1[7],1);
      }
      *(undefined1 *)(param_1 + 0xb) = 0;
    }
    param_1 = param_1 + 2;
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*param_1,param_1[1]);
    return;
  }
  return;
}

