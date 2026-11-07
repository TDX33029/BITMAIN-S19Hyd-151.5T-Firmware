// FUN_0102d354 @ 0102d354 size=184 calls_out=6 calls_in=3
// strings: 

void FUN_0102d354(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0xf) == '\x03') {
    FUN_0102f53c(param_1 + 0x10);
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x60) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x5c);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x38);
      }
      if (bVar4 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x3c);
      }
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    *(undefined1 *)(param_1 + 0xc) = 0;
    FUN_014a632c(param_1 + 0x1c);
    FUN_0102f508(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  piVar2 = *(int **)(param_1 + 4);
  *(undefined1 *)(param_1 + 0xe) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00b8ec5c(*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}

