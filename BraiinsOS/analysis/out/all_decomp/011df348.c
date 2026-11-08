// FUN_011df348 @ 011df348 size=40 calls_out=0 calls_in=1
// strings: 

void FUN_011df348(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1 + -1;
  if (*(int *)*param_1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x011df36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_011df370 + (&DAT_011df370)[iVar1]))();
  return;
}

