// FUN_01232d24 @ 01232d24 size=48 calls_out=1 calls_in=2
// strings: 

void FUN_01232d24(undefined4 param_1,int *param_2)

{
  undefined1 auStack_254 [560];
  
  FUN_01a56a10(auStack_254);
                    /* WARNING: Could not recover jumptable at 0x01232d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01232d54 + *(int *)(&LAB_01232d54 + *param_2 * 4)))();
  return;
}

