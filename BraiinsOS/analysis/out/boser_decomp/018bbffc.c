// FUN_018bbffc @ 018bbffc size=136 calls_out=4 calls_in=0
// strings: 

void FUN_018bbffc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x350);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(*(undefined4 *)(param_1 + 0x350));
  }
  if (*(int *)(param_1 + 0x48) != -0x80000000) {
    FUN_018ba49c(param_1 + 0x40);
  }
  if (*(char *)(param_1 + 0x358) == '\0') {
    FUN_0134bd64(*(undefined4 *)(param_1 + 0x35c),*(undefined4 *)(param_1 + 0x360));
  }
  if (*(int *)(param_1 + 0x340) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x340),*(undefined4 *)(param_1 + 0x344));
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x36c),*(undefined4 *)(param_1 + 0x370),2,4);
  return;
}

