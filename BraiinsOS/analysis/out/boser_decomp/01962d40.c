// FUN_01962d40 @ 01962d40 size=32 calls_out=0 calls_in=17
// strings: 

void FUN_01962d40(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x15;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x01962d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01962d60 + *(int *)(&DAT_01962d60 + iVar1 * 4)))();
  return;
}

