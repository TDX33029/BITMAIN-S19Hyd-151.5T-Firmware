// FUN_0167a2fc @ 0167a2fc size=68 calls_out=1 calls_in=5
// strings: 

void FUN_0167a2fc(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x34) == '\x03' || *(char *)(param_1 + 0x34) == '\x02') {
    return;
  }
  piVar3 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    return;
  }
  return;
}

