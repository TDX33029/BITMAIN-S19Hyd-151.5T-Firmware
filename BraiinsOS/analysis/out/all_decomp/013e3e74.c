// FUN_013e3e74 @ 013e3e74 size=52 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_013e3e74(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x013e3e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_013e3ea0 + *(int *)(&DAT_013e3ea0 + *param_1 * 4)))();
    return uVar1;
  }
  return 0;
}

