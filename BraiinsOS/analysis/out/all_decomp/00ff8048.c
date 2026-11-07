// FUN_00ff8048 @ 00ff8048 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_00ff8048(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0 && *(char *)(param_3 + 0x21) == '\0') {
    FUN_00ff969c(param_1,param_2,param_3);
    return;
  }
  iVar1 = 9;
  if (**(int **)(param_3 + 0xc) < 0) {
    iVar1 = **(int **)(param_3 + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x00ff8094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00ff8098 + *(int *)(&DAT_00ff8098 + iVar1 * 4)))();
  return;
}

