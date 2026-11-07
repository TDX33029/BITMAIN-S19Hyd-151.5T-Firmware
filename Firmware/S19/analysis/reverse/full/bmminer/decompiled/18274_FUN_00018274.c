// FUN_00018274 @ 00018274  size=96  callers=1
// program: bmminer


int FUN_00018274(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00017028();
    if (iVar1 <= iVar2) {
      return 0;
    }
    while ((iVar1 = iVar2 * 4, iVar2 = iVar2 + 1, *(int *)(DAT_00088824 + iVar1) == param_1 &&
           (iVar1 = FUN_000200ac(), iVar1 != 0))) {
      iVar1 = thunk_FUN_00036ad8();
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_00017028();
      if (iVar1 <= iVar2) {
        return 0;
      }
    }
  } while( true );
}

