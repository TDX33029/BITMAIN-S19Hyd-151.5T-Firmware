// FUN_0185245c @ 0185245c size=152 calls_out=2 calls_in=3
// strings: 

void FUN_0185245c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x80);
  if ((uVar4 & 1) != 0) {
    (**(code **)(*(int *)(param_1 + 0x78) + 0xc))(*(undefined4 *)(param_1 + 0x7c));
  }
  if ((uVar4 & 8) != 0) {
    (**(code **)(*(int *)(param_1 + 0x70) + 0xc))(*(undefined4 *)(param_1 + 0x74));
  }
  if (*(int *)(param_1 + 8) != 4 || *(int *)(param_1 + 0xc) != 0) {
    FUN_0185255c((int *)(param_1 + 8));
  }
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

