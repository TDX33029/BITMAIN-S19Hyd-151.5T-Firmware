// FUN_009a6974 @ 009a6974 size=144 calls_out=0 calls_in=1
// strings: 

void FUN_009a6974(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return;
  }
  iVar1 = *param_2 + -1;
  if (*param_2 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x009a6a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_009a6a24 + (&DAT_009a6a24)[iVar1]))();
  return;
}

