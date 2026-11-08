// FUN_01832a0c @ 01832a0c size=188 calls_out=1 calls_in=3
// strings: 

void FUN_01832a0c(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01832ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[0x28])
              ("ctx == NULL || rustsecp256k1_v0_9_2_context_is_proper(ctx)",param_1[0x29]);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x27] = 0;
  FUN_016dd606(param_1 + 9,0,0x28);
  FUN_016dd606(param_1 + 0x13,0,0x28);
  FUN_016dd606(param_1 + 0x1d,0,0x28);
  return;
}

