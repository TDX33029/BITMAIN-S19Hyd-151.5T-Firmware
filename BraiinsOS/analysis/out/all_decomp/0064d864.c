// FUN_0064d864 @ 0064d864 size=228 calls_out=2 calls_in=4
// strings: 

void FUN_0064d864(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0xf) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xe);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)((int)param_1 + 0x35);
      }
      if (bVar4 && cVar1 == '\x03') {
        if (param_1[8] != 0) {
          FUN_006f5fbc(param_1[8],param_1[9],1);
        }
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
      param_1 = param_1 + 4;
      piVar2 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
    }
    else {
      if (*(char *)(param_1 + 0xf) != '\0') {
        return;
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
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*param_1,param_1[1]);
    return;
  }
  return;
}

