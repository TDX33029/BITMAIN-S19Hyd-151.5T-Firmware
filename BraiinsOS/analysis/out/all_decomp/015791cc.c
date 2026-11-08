// FUN_015791cc @ 015791cc size=40 calls_out=0 calls_in=6
// strings: 

void FUN_015791cc(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x15;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x015791f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_015791f4 + *(int *)(&DAT_015791f4 + iVar1 * 4)))();
  return;
}

