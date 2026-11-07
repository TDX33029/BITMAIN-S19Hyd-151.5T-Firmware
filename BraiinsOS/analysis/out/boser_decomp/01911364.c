// FUN_01911364 @ 01911364 size=148 calls_out=6 calls_in=2
// strings: 

void FUN_01911364(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x124);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(*(undefined4 *)(param_1 + 0x124));
  }
  if (*(int *)(param_1 + 0x3c) != -0x80000000) {
    FUN_0190ebd8(param_1 + 0x18);
  }
  if ((*(char *)(param_1 + 0x110) == '\0') && (*(int *)(param_1 + 0x114) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118));
  }
  FUN_01902274(param_1 + 0xf4);
  FUN_01910a14(param_1);
  FUN_0134bd64(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc));
  FUN_0134bd64(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8));
  FUN_01912928(param_1 + 0x78);
  return;
}

