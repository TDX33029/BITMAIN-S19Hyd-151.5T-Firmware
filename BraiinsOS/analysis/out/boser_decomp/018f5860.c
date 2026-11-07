// FUN_018f5860 @ 018f5860 size=728 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_018f5860(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int **local_60;
  code *local_5c;
  int *local_38 [5];
  
  local_38[0] = (int *)*param_1;
  uVar2 = 0xc;
  if (*local_38[0] < 0) {
    uVar2 = *local_38[0] + 0x7ffffffe;
  }
  if ((uVar2 >> 1 | uVar2 << 0x1f) < 8) {
                    /* WARNING: Could not recover jumptable at 0x018f5898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_018f589c + *(int *)(&DAT_018f589c + (uVar2 >> 1) * 4)))(local_38[0] + 2)
    ;
    return uVar1;
  }
  local_5c = FUN_018f51ec;
  local_60 = local_38;
  uVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_60);
  return uVar1;
}

