// FUN_005fc7f0 @ 005fc7f0 size=196 calls_out=6 calls_in=2
// strings: 

void FUN_005fc7f0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x1f);
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x4c);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x48);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x28);
    }
  }
  else {
    if (cVar1 == '\x04') {
      FUN_0193eee4(param_1 + 0x20);
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_005f04f4(param_1 + 0x218);
      piVar2 = *(int **)(param_1 + 0x1ec);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0195b288(*(undefined4 *)(param_1 + 0x1ec));
      }
      if (*(int *)(param_1 + 0x128) != -0x80000000) {
        FUN_01a2affc();
      }
      *(undefined2 *)(param_1 + 0x1d) = 0;
    }
    if (*(char *)(param_1 + 0x1c) != '\0') {
      FUN_019f8c54(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    }
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}

