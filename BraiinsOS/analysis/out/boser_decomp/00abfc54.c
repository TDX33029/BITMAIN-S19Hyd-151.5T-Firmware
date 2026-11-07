// FUN_00abfc54 @ 00abfc54 size=100 calls_out=0 calls_in=2
// strings: 

void FUN_00abfc54(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0x80000006;
    return;
  }
  iVar1 = 2;
  if (*(int *)(param_2 + 0x10) < 0) {
    iVar1 = *(int *)(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00abfca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00abfca4 + *(int *)(&DAT_00abfca4 + iVar1 * 4)))();
  return;
}

