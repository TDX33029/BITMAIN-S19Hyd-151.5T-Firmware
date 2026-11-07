// FUN_012d4210 @ 012d4210 size=256 calls_out=1 calls_in=1
// strings: 

void FUN_012d4210(void)

{
  int in_stack_00000004;
  
  thunk_FUN_01bee35a(0,0x280,0x290);
                    /* WARNING: Could not recover jumptable at 0x012d430c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_012d4310 + *(int *)(&DAT_012d4310 + in_stack_00000004 * 4)))();
  return;
}

