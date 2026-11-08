// FUN_01702e50 @ 01702e50 size=120 calls_out=4 calls_in=1
// strings: 

void FUN_01702e50(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x2ac) == '\0') {
    FUN_01703244(param_1);
    FUN_017034f0(param_1 + 0x294);
    FUN_01703470(param_1 + 0x290);
    return;
  }
  if (*(char *)(param_1 + 0x2ac) != '\x03') {
    return;
  }
  FUN_01703470(param_1 + 0x29c);
  piVar2 = *(int **)(param_1 + 0x298);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01703cd8(*(undefined4 *)(param_1 + 0x298));
    return;
  }
  return;
}

