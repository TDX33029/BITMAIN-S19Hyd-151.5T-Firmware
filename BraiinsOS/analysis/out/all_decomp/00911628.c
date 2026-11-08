// FUN_00911628 @ 00911628 size=40 calls_out=1 calls_in=0
// strings: 

void FUN_00911628(undefined4 param_1,int *param_2)

{
  undefined1 auStack_11c [248];
  
  FUN_016716cc(auStack_11c);
                    /* WARNING: Could not recover jumptable at 0x0091164c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00911650 + *(int *)(&LAB_00911650 + *param_2 * 4)))();
  return;
}

