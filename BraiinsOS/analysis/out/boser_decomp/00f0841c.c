// FUN_00f0841c @ 00f0841c size=1768 calls_out=25 calls_in=3
// strings: title | a UUID string | description | default | properties | examplematrix

void FUN_00f0841c(uint *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (1 < *param_1) {
    iVar1 = *param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00f08444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00f08448 + *(int *)(&DAT_00f08448 + iVar1 * 4)))();
  return;
}

