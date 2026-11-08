// FUN_00b16250 @ 00b16250 size=144 calls_out=6 calls_in=2
// strings: 

void FUN_00b16250(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1[10] != -0x80000000) {
    puVar5 = param_1 + 4;
    FUN_0120954c(puVar5);
    piVar2 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a903d0(*puVar5);
    }
    FUN_007bc1bc(param_1 + 7);
    FUN_007bc140(param_1 + 10);
    return;
  }
  uVar3 = *param_1;
  iVar4 = param_1[1];
  FUN_00b16360(uVar3,iVar4);
  if (iVar4 == 0) {
    return;
  }
  thunk_FUN_01be4678(uVar3);
  return;
}

