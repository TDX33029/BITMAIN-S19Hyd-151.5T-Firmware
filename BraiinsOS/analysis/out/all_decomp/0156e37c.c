// FUN_0156e37c @ 0156e37c size=808 calls_out=5 calls_in=0
// strings: a Display implementation returned an error unexpectedly

void FUN_0156e37c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int **local_60;
  code *pcStack_5c;
  int *local_38 [5];
  
  local_38[0] = (int *)*param_1;
  uVar1 = 0xc;
  if (*local_38[0] < 0) {
    uVar1 = *local_38[0] + 0x7ffffffe;
  }
  if ((uVar1 >> 1 | uVar1 << 0x1f) < 8) {
                    /* WARNING: Could not recover jumptable at 0x0156e3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0156e3bc + *(int *)(&DAT_0156e3bc + (uVar1 >> 1) * 4)))(local_38[0] + 2);
    return;
  }
  pcStack_5c = FUN_0156c8d8;
  local_60 = local_38;
  FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_60);
  return;
}

