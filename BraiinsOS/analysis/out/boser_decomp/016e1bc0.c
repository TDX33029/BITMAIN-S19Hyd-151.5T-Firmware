// FUN_016e1bc0 @ 016e1bc0 size=52 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_016e1bc0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x016e1be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_016e1bec + *(int *)(&DAT_016e1bec + *param_1 * 4)))();
    return uVar1;
  }
  return 0;
}

