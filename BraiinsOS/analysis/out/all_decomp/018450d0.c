// FUN_018450d0 @ 018450d0 size=138 calls_out=4 calls_in=2
// strings: saveVFPAsX | /checkout/src/llvm-project/libunwind/src/Registers.hpp | _use_X_for_vfp_save || !_saved_vfp_d0_d15 | libunwind: __unw_get_fpreg_save_vfp_as_X(cursor=%p)  | LIBUNWIND_PRINT_APIS

void FUN_018450d0(int *param_1)

{
  int iVar1;
  
  if (DAT_018dffe0 == '\0') {
    iVar1 = FUN_016d2b7c("LIBUNWIND_PRINT_APIS");
    DAT_018dffdf = iVar1 != 0;
    DAT_018dffe0 = '\x01';
  }
  if (DAT_018dffdf != '\0') {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: __unw_get_fpreg_save_vfp_as_X(cursor=%p)\n",param_1);
    FUN_016daeb4(&DAT_018db5c0);
  }
  if (*(code **)(*param_1 + 0x3c) != (code *)&LAB_0184403c_1) {
                    /* WARNING: Could not recover jumptable at 0x01845158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3c))(param_1);
    return;
  }
  if (((char)param_1[0x13] == '\0') && (*(char *)((int)param_1 + 0x4d) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("_use_X_for_vfp_save || !_saved_vfp_d0_d15",
                 "/checkout/src/llvm-project/libunwind/src/Registers.hpp",0x860,"saveVFPAsX");
  }
  *(undefined1 *)(param_1 + 0x13) = 1;
  return;
}

