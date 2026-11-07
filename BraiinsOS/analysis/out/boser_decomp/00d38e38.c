// FUN_00d38e38 @ 00d38e38 size=172 calls_out=3 calls_in=8
// strings: 

void FUN_00d38e38(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  FUN_0119423c(piVar4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  FUN_011dfe70(iVar2 + 0x20);
  if (*(int *)(iVar2 + 0x40) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x40) + 0xc))(*(undefined4 *)(iVar2 + 0x44));
  }
  if (iVar2 == -1) {
    return;
  }
  piVar4 = (int *)(iVar2 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar2);
    return;
  }
  return;
}

