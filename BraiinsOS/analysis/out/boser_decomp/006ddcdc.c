// FUN_006ddcdc @ 006ddcdc size=48 calls_out=0 calls_in=0
// strings: 

void FUN_006ddcdc(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (*(int *)(param_2 + 0x10) < 0) {
    iVar1 = *(int *)(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x006ddd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_006ddd0c + *(int *)(&DAT_006ddd0c + iVar1 * 4)))();
  return;
}

