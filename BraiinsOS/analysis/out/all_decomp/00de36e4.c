// FUN_00de36e4 @ 00de36e4 size=308 calls_out=4 calls_in=3
// strings: 

void FUN_00de36e4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x45);
  if (cVar1 == '\x03') {
    if (*(int *)(param_1 + 0x48) == 0) {
      return;
    }
    FUN_00e44660(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),1);
    return;
  }
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 99) == '\x04') {
      if (*(char *)(param_1 + 0xb4) == '\x03') {
        cVar1 = *(char *)(param_1 + 0xb0);
        bVar4 = cVar1 == '\x03';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 0xac);
        }
        if (bVar4 && cVar1 == '\x03') {
          FUN_00de3884(param_1 + 0x74);
        }
      }
    }
    else if (*(char *)(param_1 + 99) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x98);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x94);
      }
      if (bVar4 && cVar1 == '\x03') {
        cVar1 = *(char *)(param_1 + 0x90);
        bVar4 = cVar1 == '\x03';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 0x8d);
        }
        if (bVar4 && cVar1 == '\x03') {
          if (*(int *)(param_1 + 0x78) != 0) {
            FUN_00e44660(*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),1);
          }
          *(undefined1 *)(param_1 + 0x8c) = 0;
        }
      }
    }
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x8c);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x88);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_00de3884(param_1 + 0x50);
    }
  }
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078e66c(*(undefined4 *)(param_1 + 0x28));
    }
  }
  FUN_00e44900(*(undefined4 *)(param_1 + 0x24));
  return;
}

