// FUN_009c3ff0 @ 009c3ff0 size=156 calls_out=2 calls_in=0
// strings: 

void FUN_009c3ff0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1 + 1;
  piVar2 = param_1 + -2;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *(char *)piVar3 = '\x01';
  if ((char)iVar4 == '\0') {
    DataMemoryBarrier(0xb);
    piVar3 = (int *)(*param_1 + 0x18);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 1;
    if (iVar4 == -1) {
      FUN_016d6968(0xf0,piVar3,0x81,1);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0100ebe0();
    return;
  }
  return;
}

