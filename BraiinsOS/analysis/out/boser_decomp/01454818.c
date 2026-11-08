// FUN_01454818 @ 01454818 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_01454818(undefined4 param_1)

{
  int local_28 [6];
  
  FUN_01454890(local_28,param_1);
                    /* WARNING: Could not recover jumptable at 0x01454844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01454848 + *(int *)(&LAB_01454848 + local_28[0] * 4)))();
  return;
}

