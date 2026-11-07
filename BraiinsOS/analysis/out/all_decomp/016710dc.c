// FUN_016710dc @ 016710dc size=40 calls_out=0 calls_in=1
// strings: 

void FUN_016710dc(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x01671100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01671104 + *(int *)(&LAB_01671104 + iVar1 * 4)))();
  return;
}

