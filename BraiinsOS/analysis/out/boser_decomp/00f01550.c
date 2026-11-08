// FUN_00f01550 @ 00f01550 size=96 calls_out=0 calls_in=1
// strings: 

int FUN_00f01550(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1[0x1a] == 1) {
    iVar1 = ((LZCOUNT(param_1[0x1b] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  if (*param_1 == 5 && param_1[1] == 0) {
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00f015a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)(&DAT_00f015a8 + *(int *)(&DAT_00f015a8 + *param_1 * 4)))(param_1,param_1 + 2);
  return iVar1;
}

