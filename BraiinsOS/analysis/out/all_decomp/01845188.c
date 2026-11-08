// FUN_01845188 @ 01845188 size=46 calls_out=1 calls_in=12
// strings: LIBUNWIND_PRINT_APIS

undefined1 FUN_01845188(void)

{
  int iVar1;
  
  if (DAT_018dffe0 == '\0') {
    iVar1 = FUN_016d2b7c("LIBUNWIND_PRINT_APIS");
    DAT_018dffe0 = 1;
    DAT_018dffdf = iVar1 != 0;
    return iVar1 != 0;
  }
  return DAT_018dffdf;
}

