// FUN_01ad6cf0 @ 01ad6cf0 size=36 calls_out=1 calls_in=2
// strings: 

void FUN_01ad6cf0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_0134bd64(param_1[0x10],param_1[0x11]);
                    /* WARNING: Could not recover jumptable at 0x01ad6d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01ad6d14 + *(int *)(&LAB_01ad6d14 + iVar1 * 4)))();
  return;
}

