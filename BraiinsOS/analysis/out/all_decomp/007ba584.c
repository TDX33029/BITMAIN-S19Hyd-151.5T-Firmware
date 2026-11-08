// FUN_007ba584 @ 007ba584 size=300 calls_out=2 calls_in=0
// strings: 

void FUN_007ba584(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint local_40;
  uint local_3c;
  
  uVar3 = *(uint *)(param_2 + 8);
  iVar2 = uVar3 * 0x18;
  if (0x5555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar2);
  }
  if (iVar2 == 0) {
    local_3c = 8;
    local_40 = 0;
  }
  else {
    puVar1 = *(uint **)(param_2 + 4);
    local_3c = thunk_FUN_016d4a50(iVar2);
    if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar2);
    }
    local_40 = uVar3;
    if ((uVar3 != 0) && (iVar2 != 0)) {
      iVar2 = 4;
      uVar3 = *puVar1;
      if (1 < uVar3) {
        iVar2 = uVar3 - 2;
      }
                    /* WARNING: Could not recover jumptable at 0x007ba678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_007ba67c + *(int *)(&DAT_007ba67c + iVar2 * 4)))(uVar3,puVar1 + 1);
      return;
    }
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = uVar3;
  return;
}

