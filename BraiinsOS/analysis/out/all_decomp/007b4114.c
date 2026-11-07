// FUN_007b4114 @ 007b4114 size=408 calls_out=3 calls_in=3
// strings: 

void FUN_007b4114(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  uint local_158;
  uint local_154;
  undefined1 auStack_138 [276];
  
  iVar1 = param_3 * 0xe8;
  if (0x8d3dcb < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  if (iVar1 == 0) {
    local_154 = 4;
    local_158 = 0;
  }
  else {
    local_154 = thunk_FUN_016d4a50(iVar1);
    if (local_154 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
    local_158 = param_3;
    if (param_3 != 0) {
      if (param_2 != param_3 * 0xe8 + param_2) {
        FUN_007b5860(auStack_138,param_2);
        uVar2 = 0x10;
        if (1 < *(ushort *)(param_2 + 0x48)) {
          uVar2 = *(ushort *)(param_2 + 0x48) - 2;
        }
                    /* WARNING: Could not recover jumptable at 0x007b4600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_007b4604 + *(int *)(&DAT_007b4604 + (uint)uVar2 * 4)))();
        return;
      }
    }
  }
  *param_1 = local_158;
  param_1[1] = local_154;
  param_1[2] = param_3;
  return;
}

