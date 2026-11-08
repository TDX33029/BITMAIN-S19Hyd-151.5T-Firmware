// FUN_018dc124 @ 018dc124 size=140 calls_out=4 calls_in=1
// strings: 

void FUN_018dc124(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0xb4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(*(undefined4 *)(param_1 + 0xb4));
  }
  if (*(undefined1 **)(param_1 + 0x88) != &DAT_3b9aca00) {
    iVar3 = param_1;
    if (*(int *)(param_1 + 0x28) == -0x80000000) {
      iVar3 = param_1 + 0x10;
    }
    FUN_018c4448(iVar3 + 0x20);
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),2,4);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    FUN_0134bd64(*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc0));
    return;
  }
  return;
}

