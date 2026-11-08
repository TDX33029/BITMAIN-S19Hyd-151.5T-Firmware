// FUN_00a1e4d0 @ 00a1e4d0 size=116 calls_out=5 calls_in=2
// strings: 

void FUN_00a1e4d0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1[10] == -0x80000000) {
    FUN_009ea494(*param_1,param_1[1]);
    return;
  }
  puVar4 = param_1 + 4;
  FUN_009cf73c(puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a95404(*puVar4);
  }
  FUN_007cde2c(param_1 + 7);
  FUN_006f66dc(param_1 + 10);
  return;
}

