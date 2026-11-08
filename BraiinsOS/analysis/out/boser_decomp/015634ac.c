// FUN_015634ac @ 015634ac size=208 calls_out=6 calls_in=2
// strings: 

void FUN_015634ac(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if ((iVar2 != 0) && (iVar4 = iVar2 * 0xc + 0xc, iVar2 + iVar4 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x20) - iVar4);
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if ((iVar2 != 0) && (iVar4 = iVar2 * 0x10 + 0x10, iVar2 + iVar4 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x50) - iVar4);
  }
  if (*(int *)(param_1 + 0x1c8) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1cc));
  }
  piVar3 = *(int **)(param_1 + 0x80);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  }
  FUN_01529ee0(param_1 + 0x88);
  FUN_0153a04c(param_1 + 0x118);
  FUN_0152a42c(param_1 + 0xb8);
  FUN_0152a42c(param_1 + 0xe8);
  return;
}

