// FUN_0005a738 @ 0005a738  size=64  callers=2
// program: bmminer


undefined4 FUN_0005a738(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = FUN_0002a6f0(iVar2), iVar1 == 0 || (iVar1 = FUN_0005a540(iVar2), iVar1 != 1))) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      return 0;
    }
  }
  return 1;
}

