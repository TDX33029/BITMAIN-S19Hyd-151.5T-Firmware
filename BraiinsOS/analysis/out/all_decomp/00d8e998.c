// FUN_00d8e998 @ 00d8e998 size=216 calls_out=5 calls_in=1
// strings: 

void FUN_00d8e998(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x34);
  if (cVar1 == '\0') {
    FUN_00d8ffbc(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00d8ed84(param_1 + 0x38);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x60) == '\x03') {
      if (*(char *)(param_1 + 0x56) == '\x04') {
        if (*(int *)(param_1 + 0x58) != 0) {
          FUN_00e44660(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),1);
        }
        FUN_00e44900(*(undefined4 *)(param_1 + 0x4c));
      }
      else if ((*(char *)(param_1 + 0x56) == '\x03') && (*(int *)(param_1 + 0x58) != 0)) {
        FUN_00e44660(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),1);
      }
    }
  }
  piVar3 = *(int **)(param_1 + 0x30);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f324(*(undefined4 *)(param_1 + 0x30));
  }
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined2 *)(param_1 + 0x35) = 0;
  return;
}

