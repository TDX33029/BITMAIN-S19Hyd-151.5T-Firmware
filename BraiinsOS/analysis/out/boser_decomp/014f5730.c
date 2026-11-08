// FUN_014f5730 @ 014f5730 size=108 calls_out=0 calls_in=1
// strings: 

void FUN_014f5730(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if (iVar1 == -0x7fffffeb) {
    *param_1 = 4;
    param_1[1] = iVar2;
    return;
  }
  iVar2 = 0x15;
  if (iVar1 < 0) {
    iVar2 = iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x014f578c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_014f5790 + *(int *)(&DAT_014f5790 + iVar2 * 4)))();
  return;
}

