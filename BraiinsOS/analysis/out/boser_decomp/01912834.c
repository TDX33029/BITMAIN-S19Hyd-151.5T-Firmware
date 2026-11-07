// FUN_01912834 @ 01912834 size=140 calls_out=4 calls_in=1
// strings: 

void FUN_01912834(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0xf8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(*(undefined4 *)(param_1 + 0xf8));
  }
  iVar3 = 200;
  do {
    *(undefined1 *)(param_1 + iVar3) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xf8);
  if (*(int *)(param_1 + 0x24) != -0x80000000) {
    FUN_0190ebd8(param_1);
  }
  if ((*(char *)(param_1 + 0xfc) == '\0') && (*(int *)(param_1 + 0x100) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104));
  }
  FUN_01902274(param_1 + 0x110);
  return;
}

