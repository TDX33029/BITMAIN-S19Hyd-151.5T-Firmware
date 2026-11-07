// FUN_00c07bf8 @ 00c07bf8 size=40 calls_out=0 calls_in=1
// strings: 

void FUN_00c07bf8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00c07c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_00c07c20 + (&DAT_00c07c20)[iVar1]))();
  return;
}

