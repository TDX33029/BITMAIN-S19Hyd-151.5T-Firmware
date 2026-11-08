// FUN_0193eee4 @ 0193eee4 size=124 calls_out=4 calls_in=8
// strings: 

void FUN_0193eee4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x10) == '\x04') {
    if (*(char *)(param_1 + 0x1c) == '\x04') {
      FUN_005f1388(param_1 + 0x20);
    }
    FUN_005fb2fc(param_1 + 0x170);
    return;
  }
  if (*(char *)(param_1 + 0x10) != '\x05') {
    return;
  }
  FUN_0193f350(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38f34(*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

