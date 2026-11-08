// FUN_00040238 @ 00040238  size=40  callers=1
// program: cgminer


void FUN_00040238(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    FUN_000495e4();
    return;
  }
  return;
}

