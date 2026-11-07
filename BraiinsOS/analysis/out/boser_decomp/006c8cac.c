// FUN_006c8cac @ 006c8cac size=168 calls_out=8 calls_in=5
// strings: 

void FUN_006c8cac(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_006c487c(param_1 + 0x78);
  FUN_006c4b58(param_1 + 0x84);
  FUN_006b36a8(param_1 + 0x38);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  if (*(int *)(param_1 + 0x90) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  }
  if (*(int *)(param_1 + 0x9c) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
  }
  FUN_0141fb8c(param_1 + 0x58);
  FUN_006b3d8c(param_1 + 0x28);
  FUN_006b4178(param_1 + 8);
  if (param_1 != -1) {
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
  }
  return;
}

