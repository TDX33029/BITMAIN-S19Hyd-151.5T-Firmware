// FUN_013b6288 @ 013b6288 size=72 calls_out=1 calls_in=8
// strings: 

void FUN_013b6288(undefined4 param_1,int param_2,uint param_3)

{
  if (*(uint *)(param_2 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,*(uint *)(param_2 + 0x18),&DAT_01893a60);
  }
                    /* WARNING: Could not recover jumptable at 0x013b62b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_013b62b8 +
            *(int *)(&LAB_013b62b8 + *(int *)(*(int *)(param_2 + 0x14) + param_3 * 0x10) * 4)))
            (param_1,param_2,4);
  return;
}

