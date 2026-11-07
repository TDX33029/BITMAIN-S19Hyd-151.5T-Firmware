// FUN_014d7960 @ 014d7960 size=36 calls_out=0 calls_in=5
// strings: 

void FUN_014d7960(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 0xb;
  if (0x80000012 < *param_2) {
    iVar1 = *param_2 + 0x7fffffed;
  }
                    /* WARNING: Could not recover jumptable at 0x014d7980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_014d7984 + *(int *)(&DAT_014d7984 + iVar1 * 4)))();
  return;
}

