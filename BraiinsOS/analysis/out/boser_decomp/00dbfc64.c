// FUN_00dbfc64 @ 00dbfc64 size=144 calls_out=6 calls_in=0
// strings: 

void FUN_00dbfc64(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1[10] != -0x80000000) {
    puVar5 = param_1 + 4;
    FUN_00e7b37c(puVar5);
    piVar2 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011803e8(*puVar5);
    }
    FUN_007cde2c(param_1 + 7);
    FUN_006f66dc(param_1 + 10);
    return;
  }
  uVar3 = *param_1;
  iVar4 = param_1[1];
  FUN_00dc54cc(uVar3,iVar4);
  if (iVar4 == 0) {
    return;
  }
  thunk_FUN_01be4678(uVar3);
  return;
}

