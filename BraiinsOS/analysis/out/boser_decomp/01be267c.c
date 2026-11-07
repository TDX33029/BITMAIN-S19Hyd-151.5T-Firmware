// FUN_01be267c @ 01be267c size=138 calls_out=4 calls_in=2
// strings: saveVFPAsX | /checkout/src/llvm-project/libunwind/src/Registers.hpp | _use_X_for_vfp_save || !_saved_vfp_d0_d15 | libunwind: __unw_get_fpreg_save_vfp_as_X(cursor=%p)  | LIBUNWIND_PRINT_APIS

void FUN_01be267c(int *param_1)

{
  int iVar1;
  
  if (DAT_01d53488 == '\0') {
    iVar1 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
    DAT_01d53487 = iVar1 != 0;
    DAT_01d53488 = '\x01';
  }
  if (DAT_01d53487 != '\0') {
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: __unw_get_fpreg_save_vfp_as_X(cursor=%p)\n",param_1);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  if (*(code **)(*param_1 + 0x3c) != (code *)&LAB_01be15e8_1) {
                    /* WARNING: Could not recover jumptable at 0x01be2704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3c))(param_1);
    return;
  }
  if (((char)param_1[0x13] == '\0') && (*(char *)((int)param_1 + 0x4d) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("_use_X_for_vfp_save || !_saved_vfp_d0_d15",
                 "/checkout/src/llvm-project/libunwind/src/Registers.hpp",0x860,"saveVFPAsX");
  }
  *(undefined1 *)(param_1 + 0x13) = 1;
  return;
}

