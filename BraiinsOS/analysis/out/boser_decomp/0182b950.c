// FUN_0182b950 @ 0182b950 size=76 calls_out=0 calls_in=1
// strings: 

void FUN_0182b950(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  *param_2 = 2;
  iVar1 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0182b998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_0182b99c + (&DAT_0182b99c)[iVar1]))((&DAT_0182b99c)[iVar1],param_2 + 1);
  return;
}

