// FUN_01910220 @ 01910220 size=124 calls_out=5 calls_in=1
// strings: 

void FUN_01910220(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0xe8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(*(undefined4 *)(param_1 + 0xe8));
  }
  if (*(int *)(param_1 + 0x3c) != -0x80000000) {
    FUN_0190ebd8(param_1 + 0x18);
  }
  if ((*(char *)(param_1 + 0xd4) == '\0') && (*(int *)(param_1 + 0xd8) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc));
  }
  FUN_01902274(param_1 + 0xb8);
  FUN_01910a14(param_1);
  return;
}

