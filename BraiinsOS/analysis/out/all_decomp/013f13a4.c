// FUN_013f13a4 @ 013f13a4 size=52 calls_out=0 calls_in=1
// strings: 

void FUN_013f13a4(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = 2;
  if (0x10 < *param_3 >> 0x10) {
    iVar1 = *param_3 - 0x110000;
  }
                    /* WARNING: Could not recover jumptable at 0x013f13d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013f13d8 + *(int *)(&DAT_013f13d8 + iVar1 * 4)))();
  return;
}

