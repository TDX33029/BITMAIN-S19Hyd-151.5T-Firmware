// FUN_019135a4 @ 019135a4 size=124 calls_out=5 calls_in=0
// strings: 

void FUN_019135a4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0xc4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(*(undefined4 *)(param_1 + 0xc4));
  }
  if (*(int *)(param_1 + 100) != -0x80000000) {
    FUN_0190ebd8(param_1 + 0x40);
  }
  if ((*(char *)(param_1 + 0xcc) == '\0') && (*(int *)(param_1 + 0xd0) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
  }
  FUN_01902274(param_1 + 0xe0);
  FUN_0190f040(param_1 + 0xfc);
  return;
}

