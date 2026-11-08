// FUN_012a4850 @ 012a4850 size=36 calls_out=2 calls_in=1
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

void FUN_012a4850(void)

{
  int iVar1;
  undefined4 in_stack_00000000;
  
  iVar1 = FUN_012a4878();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                 ,99,in_stack_00000000);
  }
  return;
}

