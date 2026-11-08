// FUN_010e8b98 @ 010e8b98 size=116 calls_out=4 calls_in=1
// strings: 

void FUN_010e8b98(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x7c4) == '\0') {
    FUN_010e8c70(param_1);
    piVar2 = *(int **)(param_1 + 200);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00711acc(*(undefined4 *)(param_1 + 200));
    }
    FUN_005f3030(param_1 + 0x7b0);
    return;
  }
  if (*(char *)(param_1 + 0x7c4) == '\x03') {
    FUN_010e8cd4(param_1 + 0xf0);
    *(undefined1 *)(param_1 + 0x7c5) = 0;
    return;
  }
  return;
}

