// FUN_00c5bf58 @ 00c5bf58 size=48 calls_out=0 calls_in=0
// strings: 

void FUN_00c5bf58(undefined4 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_3;
  if (!(param_3[1] == 0 && (uint)(4 < uVar1) <= param_3[1])) {
    uVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00c5bf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00c5bf88 + *(int *)(&LAB_00c5bf88 + uVar1 * 4)))();
  return;
}

