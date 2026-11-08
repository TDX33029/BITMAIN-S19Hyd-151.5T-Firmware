// FUN_00c14bf0 @ 00c14bf0 size=144 calls_out=3 calls_in=2
// strings: 

void FUN_00c14bf0(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)((int)param_1 + 9) == '\x03') {
    FUN_01139b38(param_1[3],param_1[4]);
  }
  else {
    if (*(char *)((int)param_1 + 9) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x10) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xf);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xe);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 6);
      }
    }
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(*param_1);
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

