// FUN_013514a4 @ 013514a4 size=68 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_013514a4(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 3) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x013514e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&DAT_013514e8 + *(int *)(&DAT_013514e8 + param_1[10] * 4)))();
  return uVar1;
}

