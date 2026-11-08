// FUN_012d665c @ 012d665c size=168 calls_out=1 calls_in=0
// strings: 

void FUN_012d665c(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012d6678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012d667c + (&DAT_012d667c)[iVar1]))();
  return;
}

