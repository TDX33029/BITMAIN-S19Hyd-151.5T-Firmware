// FUN_00a15dd0 @ 00a15dd0 size=112 calls_out=2 calls_in=0
// strings: 

void FUN_00a15dd0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x48) != '\x03') {
    return;
  }
  if ((*(char *)(param_1 + 0x3c) == '\x03') && (*(int *)(param_1 + 0x28) != 0)) {
    FUN_00aa190c(*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),1);
  }
  piVar2 = *(int **)(param_1 + 0x44);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078ecac(*(undefined4 *)(param_1 + 0x44));
    return;
  }
  return;
}

