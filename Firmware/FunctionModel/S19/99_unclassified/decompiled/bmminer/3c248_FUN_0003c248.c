// FUN_0003c248 @ 0003c248  size=64  callers=1
// program: bmminer


undefined4 FUN_0003c248(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = FUN_000201d8(iVar2), iVar1 == 0 || (iVar1 = FUN_0003c198(iVar2), iVar1 != 0))) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      return 1;
    }
  }
  return 0;
}

