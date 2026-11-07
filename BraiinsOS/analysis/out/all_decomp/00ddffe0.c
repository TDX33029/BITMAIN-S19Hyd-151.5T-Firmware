// FUN_00ddffe0 @ 00ddffe0 size=152 calls_out=6 calls_in=2
// strings: 

void FUN_00ddffe0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x888) == '\0') {
    FUN_005bee90(param_1);
    piVar2 = *(int **)(param_1 + 0xe0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0xe0));
    }
    FUN_00d9e928(param_1 + 0xb0);
    return;
  }
  if (*(char *)(param_1 + 0x888) == '\x03') {
    FUN_005e5304(param_1 + 400);
    FUN_005c3320(param_1 + 400);
    *(undefined2 *)(param_1 + 0x889) = 0;
    *(undefined1 *)(param_1 + 0x88b) = 0;
    FUN_005c3a18(param_1 + 0x130);
    *(undefined2 *)(param_1 + 0x88c) = 0;
    return;
  }
  return;
}

