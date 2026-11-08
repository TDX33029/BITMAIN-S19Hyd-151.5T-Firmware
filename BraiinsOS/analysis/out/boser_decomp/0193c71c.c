// FUN_0193c71c @ 0193c71c size=68 calls_out=2 calls_in=46
// strings: 

void FUN_0193c71c(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  FUN_012cb6a8(piVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a384d0(*param_1);
    return;
  }
  return;
}

