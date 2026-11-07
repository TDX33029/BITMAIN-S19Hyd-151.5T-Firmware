// FUN_01ac5678 @ 01ac5678 size=100 calls_out=1 calls_in=0
// strings: 

void FUN_01ac5678(uint *param_1)

{
  int iVar1;
  
  iVar1 = 10;
  if ((uint)(*param_1 < 3) <= -param_1[1]) {
    iVar1 = *param_1 - 3;
  }
                    /* WARNING: Could not recover jumptable at 0x01ac569c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01ac56a0 + *(int *)(&DAT_01ac56a0 + iVar1 * 4)))();
  return;
}

