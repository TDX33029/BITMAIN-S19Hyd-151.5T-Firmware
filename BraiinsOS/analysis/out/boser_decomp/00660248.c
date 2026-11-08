// FUN_00660248 @ 00660248 size=144 calls_out=3 calls_in=6
// strings: 

void FUN_00660248(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0xc);
  puVar3 = (undefined4 *)(iVar4 + 4);
  for (iVar5 = *(int *)(param_1 + 0x10); iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_0134bd64(puVar3[-1],*puVar3);
    puVar3 = puVar3 + 3;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 8),iVar4,4,0xc);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),4,4);
  if (param_1 != -1) {
    piVar2 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(param_1);
      return;
    }
  }
  return;
}

