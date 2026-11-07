// FUN_01a3d52c @ 01a3d52c size=48 calls_out=0 calls_in=1
// strings: 

void FUN_01a3d52c(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 4;
  if (1 < *param_2) {
    iVar1 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01a3d558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01a3d55c + *(int *)(&DAT_01a3d55c + iVar1 * 4)))();
  return;
}

