// FUN_0143ea24 @ 0143ea24 size=176 calls_out=3 calls_in=7
// strings: 

void FUN_0143ea24(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint local_c0 [42];
  
  do {
    FUN_01405abc(local_c0,param_1 + 0x70,param_1 + 0x20);
    uVar2 = local_c0[0];
    FUN_0143eb3c(local_c0);
  } while ((uVar2 & 6) != 4);
  iVar3 = *(int *)(param_1 + 0x74);
  do {
    iVar3 = *(int *)(iVar3 + 0xa84);
    thunk_FUN_016d3fb4();
  } while (iVar3 != 0);
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  }
  if (param_1 != -1) {
    piVar4 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(param_1);
    }
  }
  return;
}

