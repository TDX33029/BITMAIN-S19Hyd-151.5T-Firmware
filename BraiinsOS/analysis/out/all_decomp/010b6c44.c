// FUN_010b6c44 @ 010b6c44 size=72 calls_out=3 calls_in=11
// strings: 

void FUN_010b6c44(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_010285f0();
  FUN_0102c440(param_1);
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0102a7d0(*param_1);
    return;
  }
  return;
}

