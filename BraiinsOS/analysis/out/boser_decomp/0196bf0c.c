// FUN_0196bf0c @ 0196bf0c size=152 calls_out=1 calls_in=68
// strings: 

void FUN_0196bf0c(int *param_1,int *param_2)

{
  int *piVar1;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  piVar1 = (int *)*param_1;
  *param_1 = -0x80000000;
  if (piVar1 == (int *)&DAT_80000000) {
                    /* WARNING: Could not recover jumptable at 0x0196bf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0196bf70 + *(int *)(&DAT_0196bf70 + *param_2 * 4)))();
    return;
  }
  local_30 = *param_1;
  iStack_2c = param_1[1];
  iStack_28 = param_1[2];
  *param_1 = (int)piVar1;
  param_1[1] = param_1[1];
  if (local_30 != -0x80000000) {
    piVar1 = &local_30;
  }
  param_1[2] = param_1[2];
  if (local_30 != -0x80000000) {
    FUN_0196c22c(piVar1);
  }
  return;
}

