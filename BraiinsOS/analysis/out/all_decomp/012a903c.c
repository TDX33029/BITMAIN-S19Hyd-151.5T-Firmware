// FUN_012a903c @ 012a903c size=36 calls_out=0 calls_in=81
// strings: 

void FUN_012a903c(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 - 4;
  if (*param_2 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012a905c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012a9060 + (&DAT_012a9060)[iVar1]))();
  return;
}

