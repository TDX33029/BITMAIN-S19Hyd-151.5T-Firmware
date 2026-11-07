// FUN_011578ec @ 011578ec size=60 calls_out=0 calls_in=77
// strings: 

void FUN_011578ec(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x22;
  if (0x80000009 < *(uint *)(*param_2 + 0x20)) {
    iVar1 = *(uint *)(*param_2 + 0x20) + 0x7ffffff6;
  }
                    /* WARNING: Could not recover jumptable at 0x01157924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01157928 + *(int *)(&DAT_01157928 + iVar1 * 4)))();
  return;
}

