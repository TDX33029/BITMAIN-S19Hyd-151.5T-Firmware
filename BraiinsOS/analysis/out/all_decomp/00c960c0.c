// FUN_00c960c0 @ 00c960c0 size=184 calls_out=7 calls_in=3
// strings: 

void FUN_00c960c0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0xf8) != '\0') {
    if (*(char *)(param_1 + 0xf8) == '\x03') {
      FUN_009726a8(param_1 + 0x10);
      return;
    }
    return;
  }
  FUN_005e6cdc(param_1);
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1);
  piVar2 = *(int **)(param_1 + 0xf0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fa8e94(*(undefined4 *)(param_1 + 0xf0));
  }
  puVar4 = (undefined4 *)(param_1 + 0xf4);
  FUN_01663cc4(*puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar4);
    return;
  }
  return;
}

