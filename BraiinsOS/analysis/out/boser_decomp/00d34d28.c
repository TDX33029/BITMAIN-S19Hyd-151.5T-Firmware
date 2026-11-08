// FUN_00d34d28 @ 00d34d28 size=64 calls_out=2 calls_in=4
// strings: 

void FUN_00d34d28(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_006763fc();
  piVar2 = *(int **)(param_1 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00711acc(*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  return;
}

