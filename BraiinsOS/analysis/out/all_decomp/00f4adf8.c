// FUN_00f4adf8 @ 00f4adf8 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_00f4adf8(undefined4 param_1,int *param_2)

{
  undefined1 auStack_194 [356];
  
  FUN_016716cc(auStack_194);
                    /* WARNING: Could not recover jumptable at 0x00f4ae24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00f4ae28 + *(int *)(&LAB_00f4ae28 + *param_2 * 4)))();
  return;
}

