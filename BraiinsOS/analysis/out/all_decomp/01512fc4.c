// FUN_01512fc4 @ 01512fc4 size=60 calls_out=0 calls_in=0
// strings: 

void FUN_01512fc4(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = 4;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x01513004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01513008 + *(int *)(&DAT_01513008 + iVar1 * 4)))(10,param_2 << 4);
  return;
}

