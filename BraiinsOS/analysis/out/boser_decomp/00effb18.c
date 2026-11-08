// FUN_00effb18 @ 00effb18 size=40 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_00effb18(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 10) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00effb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&DAT_00effb3c + *(int *)(&DAT_00effb3c + *param_1 * 4)))(2,param_1);
  return uVar1;
}

