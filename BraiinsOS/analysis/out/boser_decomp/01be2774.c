// FUN_01be2774 @ 01be2774 size=46 calls_out=1 calls_in=3
// strings: LIBUNWIND_PRINT_UNWINDING

undefined1 FUN_01be2774(void)

{
  int iVar1;
  
  if (DAT_01d53486 == '\0') {
    iVar1 = FUN_01be31f8("LIBUNWIND_PRINT_UNWINDING");
    DAT_01d53486 = 1;
    DAT_01d53485 = iVar1 != 0;
    return iVar1 != 0;
  }
  return DAT_01d53485;
}

