// FUN_012c0190 @ 012c0190 size=148 calls_out=2 calls_in=1
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

void FUN_012c0190(int param_1,int param_2)

{
  int *piVar1;
  undefined1 auStack_68 [88];
  
  FUN_012b19c8(auStack_68,param_1 + 0x20,1,0);
  if ((*(byte *)(param_2 + 0x145) & 4) == 0) {
    piVar1 = &DAT_0041fae0;
    if (*(int *)(param_2 + 0x10) != 5) {
      piVar1 = (int *)(param_2 + 0x10);
    }
    if ((*(byte *)(param_2 + 0x149) & 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                   ,99,&DAT_01ce27b4);
    }
  }
  else {
    piVar1 = &DAT_0041fae0;
    if (*(int *)(param_2 + 0x10) != 5) {
      piVar1 = (int *)(param_2 + 0x10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x012c0220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_012c0224 + *(int *)(&DAT_012c0224 + *piVar1 * 4)))
            (piVar1,*(int *)(&DAT_012c0224 + *piVar1 * 4),1,&UNK_01ce27e0);
  return;
}

