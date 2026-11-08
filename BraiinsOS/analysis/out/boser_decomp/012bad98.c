// FUN_012bad98 @ 012bad98 size=112 calls_out=0 calls_in=4
// strings: 

void FUN_012bad98(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  if (((*(uint *)(param_2 + 8) & 1) != 0) && (*(int *)(param_2 + 0x10) == 0)) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  piVar1 = &DAT_0041fdf8;
  if (*(int *)(param_2 + 0x28) != 5) {
    piVar1 = (int *)(param_2 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x012bade8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_012badec + *(int *)(&DAT_012badec + *piVar1 * 4)))
            (1,*(int *)(&DAT_012badec + *piVar1 * 4),piVar1,&UNK_01ce27e0);
  return;
}

