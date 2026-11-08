// FUN_0001b750 @ 0001b750  size=72  callers=1
// program: bmminer


undefined4 FUN_0001b750(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = FUN_000201d8(iVar2), iVar1 == 0 ||
         (*(char *)(DAT_00089088 + iVar2 + 0x14) != '\0'))) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      return 1;
    }
  }
  return 0;
}

