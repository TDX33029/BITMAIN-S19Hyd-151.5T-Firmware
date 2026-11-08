// FUN_012bfac0 @ 012bfac0 size=88 calls_out=1 calls_in=1
// strings: 

void FUN_012bfac0(int param_1,int param_2)

{
  int *piVar1;
  undefined1 auStack_70 [88];
  
  FUN_012b19c8(auStack_70,param_1 + 0x20,*(undefined4 *)(param_2 + 0x114),
               *(undefined4 *)(param_2 + 0x118));
  piVar1 = &DAT_0041fdf8;
  if (*(int *)(param_2 + 0x28) != 5) {
    piVar1 = (int *)(param_2 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x012bfb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_012bfb18 + *(int *)(&DAT_012bfb18 + *piVar1 * 4)))
            (piVar1,*(int *)(&DAT_012bfb18 + *piVar1 * 4),1,&UNK_01ce27e0);
  return;
}

