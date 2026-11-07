// FUN_00db1ffc @ 00db1ffc size=80 calls_out=3 calls_in=2
// strings: 

void FUN_00db1ffc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 + 0x10);
  FUN_00e7b678(puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fb98(*puVar4);
  }
  FUN_007cde2c(param_1 + 0x1c);
  return;
}

