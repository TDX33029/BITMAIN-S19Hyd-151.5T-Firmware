// FUN_012d89fc @ 012d89fc size=328 calls_out=1 calls_in=0
// strings: 

void FUN_012d89fc(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 - 4;
  if (*param_2 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012d8a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012d8a24 + (&DAT_012d8a24)[iVar1]))();
  return;
}

