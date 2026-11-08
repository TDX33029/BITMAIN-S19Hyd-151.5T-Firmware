// FUN_0071102c @ 0071102c size=100 calls_out=2 calls_in=0
// strings: 

void FUN_0071102c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0xd4);
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0xd1);
  }
  if (!bVar4 || cVar1 != '\x03') {
    return;
  }
  FUN_00711a8c(param_1 + 0xa4);
  piVar2 = *(int **)(param_1 + 0xc4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790c08(*(undefined4 *)(param_1 + 0xc4));
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return;
}

