// FUN_0142bc4c @ 0142bc4c size=132 calls_out=0 calls_in=6
// strings: 

void FUN_0142bc4c(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)param_1[1]) {
                    /* WARNING: Could not recover jumptable at 0x0142bcbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0142bcc0 + *(int *)(&DAT_0142bcc0 + *piVar1 * 4)))
              (0,0xffffffff,piVar1 + 9,(uint)(param_1[1] - (int)piVar1) / 0x28);
    return;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 == (int *)param_1[3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0142bd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0142bd7c + *(int *)(&DAT_0142bd7c + *piVar1 * 4)))
            (0,(uint)(param_1[3] - (int)piVar1) / 0x28,piVar1 + 9,0xffffffff);
  return;
}

