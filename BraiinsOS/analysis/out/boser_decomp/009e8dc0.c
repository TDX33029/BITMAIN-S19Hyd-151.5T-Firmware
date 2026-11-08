// FUN_009e8dc0 @ 009e8dc0 size=116 calls_out=5 calls_in=15
// strings: 

void FUN_009e8dc0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1[10] == -0x80000000) {
    FUN_009e8e9c(*param_1,param_1[1]);
    return;
  }
  puVar4 = param_1 + 4;
  FUN_0120954c(puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a903d0(*puVar4);
  }
  FUN_007bc1bc(param_1 + 7);
  FUN_007bc140(param_1 + 10);
  return;
}

