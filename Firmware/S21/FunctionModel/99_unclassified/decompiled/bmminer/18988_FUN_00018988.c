// FUN_00018988 @ 00018988  size=80  callers=0
// program: bmminer


undefined4 FUN_00018988(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00017ec4();
    if (iVar1 <= iVar2) {
      return 0;
    }
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
  } while ((*(int *)(DAT_000bfb44 + iVar1) != param_1) || (iVar1 = FUN_0002a594(), iVar1 == 0));
  return 1;
}

