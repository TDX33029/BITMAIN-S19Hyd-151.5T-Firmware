// FUN_012a8b4c @ 012a8b4c size=328 calls_out=1 calls_in=0
// strings: 

void FUN_012a8b4c(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 - 4;
  if (*param_2 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012a8b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012a8b74 + (&DAT_012a8b74)[iVar1]))();
  return;
}

