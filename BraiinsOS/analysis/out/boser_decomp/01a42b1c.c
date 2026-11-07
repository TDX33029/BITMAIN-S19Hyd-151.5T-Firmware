// FUN_01a42b1c @ 01a42b1c size=628 calls_out=9 calls_in=0
// strings: $__toml_private_Datetime

void FUN_01a42b1c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 4;
  if (1 < *(uint *)*param_3) {
    iVar1 = *(uint *)*param_3 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01a42b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01a42b54 + *(int *)(&DAT_01a42b54 + iVar1 * 4)))();
  return;
}

