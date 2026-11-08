// FUN_00b6a364 @ 00b6a364 size=116 calls_out=2 calls_in=0
// strings: 

void FUN_00b6a364(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)((int)param_1 + 0x15) == '\x03') {
    iVar4 = 8;
    FUN_01139b38(*param_1,param_1[1]);
  }
  else {
    iVar4 = 0x10;
    if (*(char *)((int)param_1 + 0x15) != '\0') {
      return;
    }
  }
  piVar2 = *(int **)((int)param_1 + iVar4);
  DataMemoryBarrier(0xb);
  *(undefined1 *)(piVar2 + 2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)((int)param_1 + iVar4));
    return;
  }
  return;
}

