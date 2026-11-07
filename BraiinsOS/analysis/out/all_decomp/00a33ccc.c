// FUN_00a33ccc @ 00a33ccc size=40 calls_out=1 calls_in=0
// strings: 

void FUN_00a33ccc(undefined4 param_1,int *param_2)

{
  undefined1 auStack_11c [248];
  
  FUN_016716cc(auStack_11c);
                    /* WARNING: Could not recover jumptable at 0x00a33cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00a33cf4 + *(int *)(&LAB_00a33cf4 + *param_2 * 4)))();
  return;
}

