// FUN_012779f0 @ 012779f0 size=40 calls_out=0 calls_in=2
// strings: 

void FUN_012779f0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x15;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x01277a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01277a18 + *(int *)(&DAT_01277a18 + iVar1 * 4)))();
  return;
}

