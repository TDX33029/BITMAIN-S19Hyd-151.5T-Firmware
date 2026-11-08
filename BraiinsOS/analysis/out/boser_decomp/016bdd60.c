// FUN_016bdd60 @ 016bdd60 size=48 calls_out=0 calls_in=2
// strings: 

void FUN_016bdd60(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 4;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x016bdd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_016bdd90 + *(int *)(&DAT_016bdd90 + iVar1 * 4)))();
  return;
}

