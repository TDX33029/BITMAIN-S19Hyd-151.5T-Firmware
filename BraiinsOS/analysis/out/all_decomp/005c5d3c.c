// FUN_005c5d3c @ 005c5d3c size=100 calls_out=2 calls_in=0
// strings: 

void FUN_005c5d3c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  piVar2 = piVar4 + 0x11;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_00e46e30(piVar4 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aab134(*param_1);
    return;
  }
  return;
}

