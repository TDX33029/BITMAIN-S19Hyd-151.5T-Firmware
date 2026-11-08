// FUN_010913fc @ 010913fc size=52 calls_out=0 calls_in=2
// strings: 

void FUN_010913fc(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (1 < *param_2) {
    uVar1 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0109142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01091430 + *(int *)(&DAT_01091430 + (uint)uVar1 * 4)))();
  return;
}

