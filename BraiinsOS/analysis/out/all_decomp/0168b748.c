// FUN_0168b748 @ 0168b748 size=100 calls_out=2 calls_in=2
// strings: 

void FUN_0168b748(int *param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_1 != -0x80000000) {
    FUN_0168248c(param_1[0x12],param_1[0x13],param_1,param_2);
    return;
  }
  uVar1 = param_1[2];
  if (*(uint *)(param_1[1] + 8) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,*(uint *)(param_1[1] + 8),&DAT_018add7c);
  }
                    /* WARNING: Could not recover jumptable at 0x0168b788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_0168b78c + *(int *)(&LAB_0168b78c + *param_2 * 4)))
            (*(int *)(&LAB_0168b78c + *param_2 * 4),&LAB_0168b78c,uVar1 * 3);
  return;
}

