// FUN_013d19cc @ 013d19cc size=336 calls_out=2 calls_in=0
// strings: 

void FUN_013d19cc(undefined4 *param_1)

{
  ushort uVar1;
  
  uVar1 = 7;
  if (1 < **(ushort **)*param_1) {
    uVar1 = **(ushort **)*param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x013d19fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013d1a00 + *(int *)(&DAT_013d1a00 + (uint)uVar1 * 4)))();
  return;
}

