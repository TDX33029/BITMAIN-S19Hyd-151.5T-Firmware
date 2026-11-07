// FUN_012334f0 @ 012334f0 size=40 calls_out=1 calls_in=2
// strings: 

void FUN_012334f0(undefined4 param_1,int *param_2)

{
  undefined1 auStack_11c [248];
  
  FUN_01a56a10(auStack_11c);
                    /* WARNING: Could not recover jumptable at 0x01233514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01233518 + *(int *)(&LAB_01233518 + *param_2 * 4)))();
  return;
}

