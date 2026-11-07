// FUN_00fc5304 @ 00fc5304 size=40 calls_out=0 calls_in=1
// strings: 

void FUN_00fc5304(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x11;
  if (*param_2 < 0) {
    iVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00fc5328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00fc532c + *(int *)(&DAT_00fc532c + iVar1 * 4)))();
  return;
}

