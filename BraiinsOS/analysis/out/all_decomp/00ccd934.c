// FUN_00ccd934 @ 00ccd934 size=236 calls_out=2 calls_in=7
// strings: 

void FUN_00ccd934(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_3 * 0x24;
  if (0x38e38e3 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar2);
  }
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = param_3;
    return;
  }
  uVar1 = thunk_FUN_016d4a50(iVar2);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar2);
  }
  if ((param_3 == 0) || (iVar2 == 0)) {
    *param_1 = param_3;
    param_1[1] = uVar1;
    param_1[2] = param_3;
    return;
  }
  iVar2 = 3;
  if (1 < *param_2) {
    iVar2 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00ccda9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00ccdaa0 + *(int *)(&DAT_00ccdaa0 + iVar2 * 4)))();
  return;
}

