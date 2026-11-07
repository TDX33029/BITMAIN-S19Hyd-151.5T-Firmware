// FUN_010ea8f8 @ 010ea8f8 size=32 calls_out=1 calls_in=0
// strings: 

void FUN_010ea8f8(int param_1)

{
  FUN_010ea1d4(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x010ea914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_010ea918 + *(int *)(&DAT_010ea918 + *(int *)(param_1 + 0x1c) * 4)))();
  return;
}

