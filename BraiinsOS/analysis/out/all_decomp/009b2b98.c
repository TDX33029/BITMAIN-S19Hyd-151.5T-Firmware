// FUN_009b2b98 @ 009b2b98 size=36 calls_out=0 calls_in=1
// strings: 

void FUN_009b2b98(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x009b2bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_009b2bbc + (&DAT_009b2bbc)[iVar1]))();
  return;
}

