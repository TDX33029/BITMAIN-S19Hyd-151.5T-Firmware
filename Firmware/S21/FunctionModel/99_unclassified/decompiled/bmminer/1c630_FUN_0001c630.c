// FUN_0001c630 @ 0001c630  size=72  callers=0
// program: bmminer


undefined4 FUN_0001c630(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = FUN_0002a6f0(iVar2), iVar1 == 0 ||
         (*(char *)(DAT_000c0410 + iVar2 + 0x14) != '\0'))) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      return 1;
    }
  }
  return 0;
}

