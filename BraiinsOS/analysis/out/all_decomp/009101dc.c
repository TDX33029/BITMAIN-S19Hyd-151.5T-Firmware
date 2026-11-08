// FUN_009101dc @ 009101dc size=48 calls_out=1 calls_in=0
// strings: 

void FUN_009101dc(undefined4 param_1,int *param_2)

{
  undefined1 auStack_194 [356];
  
  FUN_016716cc(auStack_194);
                    /* WARNING: Could not recover jumptable at 0x00910208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_0091020c + *(int *)(&LAB_0091020c + *param_2 * 4)))();
  return;
}

