// FUN_018dabf0 @ 018dabf0 size=124 calls_out=4 calls_in=0
// strings: 

void FUN_018dabf0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x1a8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(*(undefined4 *)(param_1 + 0x1a8));
  }
  if (*(int *)(param_1 + 8) != -0x80000000) {
    FUN_018c4448(param_1);
  }
  if (*(char *)(param_1 + 0x194) == '\0') {
    FUN_0134bd64(*(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c));
  }
  if (*(int *)(param_1 + 0x138) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x13c));
  }
  FUN_018c644c(param_1 + 0x188);
  return;
}

