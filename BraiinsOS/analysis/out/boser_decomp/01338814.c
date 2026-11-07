// FUN_01338814 @ 01338814 size=104 calls_out=1 calls_in=2
// strings: 

void FUN_01338814(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0 && *(char *)(param_3 + 0x21) == '\0') {
    FUN_013395fc(param_1,param_2,param_3);
    return;
  }
  iVar1 = 9;
  if (**(int **)(param_3 + 0xc) < 0) {
    iVar1 = **(int **)(param_3 + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x01338860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01338864 + *(int *)(&DAT_01338864 + iVar1 * 4)))();
  return;
}

