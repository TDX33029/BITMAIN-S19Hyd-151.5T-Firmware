// FUN_0001779c @ 0001779c  size=148  callers=1
// program: bmminer


void FUN_0001779c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  DAT_000872a0 = 1;
  FUN_00017714();
  iVar1 = FUN_00017028();
  if (0 < iVar1) {
    do {
      iVar1 = 0;
      do {
        iVar2 = FUN_000201d8(iVar1);
        if (iVar2 != 0) {
          FUN_000160d8(iVar1,*(undefined4 *)(DAT_00088824 + iVar3 * 4));
          FUN_00034a5c(10);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      iVar3 = iVar3 + 1;
      iVar1 = FUN_00017028();
    } while (iVar3 < iVar1);
  }
  FUN_00034a5c(500);
  DAT_000872a0 = 0;
  return;
}

