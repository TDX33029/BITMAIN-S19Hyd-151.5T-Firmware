// FUN_012adf9c @ 012adf9c size=328 calls_out=1 calls_in=0
// strings: 

void FUN_012adf9c(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 - 4;
  if (*param_2 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012adfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012adfc4 + (&DAT_012adfc4)[iVar1]))();
  return;
}

