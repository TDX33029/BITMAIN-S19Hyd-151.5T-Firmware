// FUN_0168f364 @ 0168f364 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_0168f364(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  for (iVar1 = param_1[2]; iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_01666b88(iVar2);
    iVar2 = iVar2 + 0x48;
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  FUN_01666b88(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x0168ef24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0168ef28 + *(int *)(&DAT_0168ef28 + param_1[0x16] * 4)))();
  return;
}

