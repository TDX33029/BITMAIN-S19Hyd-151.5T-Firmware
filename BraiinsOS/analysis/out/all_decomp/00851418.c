// FUN_00851418 @ 00851418 size=276 calls_out=7 calls_in=0
// strings: 

void FUN_00851418(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x60) == '\x03') {
      FUN_007da17c(param_1 + 0x24);
      *(undefined1 *)(param_1 + 0x61) = 0;
    }
    else if ((*(char *)(param_1 + 0x60) == '\0') && (*(int *)(param_1 + 0x14) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
    }
  }
  else if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x68) == '\x03') {
      FUN_00c83a14(param_1 + 0x18);
    }
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x38c4) == '\x03') {
      if (*(char *)(param_1 + 0x18) == '\x04') {
        FUN_008545bc(param_1 + 0x20);
        FUN_008b4548(*(undefined4 *)(param_1 + 0x14));
      }
      else if ((*(char *)(param_1 + 0x18) == '\x03') && (*(int *)(param_1 + 0x1c) != 0)) {
        FUN_008b472c(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),1);
      }
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    piVar3 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

