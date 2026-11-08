// FUN_007b6508 @ 007b6508 size=224 calls_out=2 calls_in=2
// strings: 

void FUN_007b6508(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint local_40;
  uint local_3c;
  
  iVar1 = param_3 * 0x14;
  if (0x6666666 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (iVar1 == 0) {
    local_3c = 4;
    local_40 = 0;
  }
  else {
    local_3c = thunk_FUN_016d4a50(iVar1);
    if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
    local_40 = param_3;
    if (param_3 != 0) {
      if (param_2 != param_2 + param_3 * 0x14) {
                    /* WARNING: Could not recover jumptable at 0x007b65b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_007b65b8 + *(int *)(&DAT_007b65b8 + (uint)*(ushort *)(param_2 + 4) * 4)))();
        return;
      }
    }
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = param_3;
  return;
}

