// FUN_01910918 @ 01910918 size=140 calls_out=5 calls_in=0
// strings: 

void FUN_01910918(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x104);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(*(undefined4 *)(param_1 + 0x104));
  }
  if (*(int *)(param_1 + 0x3c) != -0x80000000) {
    FUN_0190ebd8(param_1 + 0x18);
  }
  if ((*(char *)(param_1 + 0xf0) == '\0') && (*(int *)(param_1 + 0xf4) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
  }
  FUN_01902274(param_1 + 0xd4);
  FUN_01910a14(param_1);
  FUN_0134bd64(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  FUN_0134bd64(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200));
  return;
}

