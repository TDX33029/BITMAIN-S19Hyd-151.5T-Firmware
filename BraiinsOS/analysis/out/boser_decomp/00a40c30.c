// FUN_00a40c30 @ 00a40c30 size=72 calls_out=0 calls_in=4
// strings: 

void FUN_00a40c30(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x220) == 5 && *(int *)(param_2 + 0x224) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a40c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00a40c70 + *(int *)(&DAT_00a40c70 + *(int *)(param_2 + 0x220) * 4)))
            (*(undefined4 *)(param_2 + 0x228),*(undefined4 *)(param_2 + 0x22c),
             *(undefined4 *)(param_2 + 0x230),*(undefined4 *)(param_2 + 0x234));
  return;
}

