// FUN_018451c8 @ 018451c8 size=46 calls_out=1 calls_in=3
// strings: LIBUNWIND_PRINT_UNWINDING

undefined1 FUN_018451c8(void)

{
  int iVar1;
  
  if (DAT_018dffde == '\0') {
    iVar1 = FUN_016d2b7c("LIBUNWIND_PRINT_UNWINDING");
    DAT_018dffde = 1;
    DAT_018dffdd = iVar1 != 0;
    return iVar1 != 0;
  }
  return DAT_018dffdd;
}

