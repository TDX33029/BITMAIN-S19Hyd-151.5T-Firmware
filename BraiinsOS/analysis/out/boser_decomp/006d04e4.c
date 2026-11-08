// FUN_006d04e4 @ 006d04e4 size=416 calls_out=3 calls_in=0
// strings: 

void FUN_006d04e4(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_88;
  uint local_84;
  
  uVar2 = *(uint *)(param_2 + 8);
  uVar4 = 0;
  iVar3 = uVar2 * 0x30;
  if (0x2aaaaaa < uVar2) {
LAB_006d0510:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar3);
  }
  if (iVar3 == 0) {
    local_84 = 8;
    local_88 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    uVar4 = 8;
    local_84 = FUN_01298504(iVar3,8);
    if (local_84 == 0) goto LAB_006d0510;
    local_88 = uVar2;
    if (uVar2 != 0) {
      if (iVar1 != iVar1 + uVar2 * 0x30) {
        iVar3 = 8;
        if (*(int *)(iVar1 + 0x10) < 0) {
          iVar3 = *(int *)(iVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x006d05d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_006d05dc + *(int *)(&DAT_006d05dc + iVar3 * 4)))();
        return;
      }
    }
  }
  *param_1 = local_88;
  param_1[1] = local_84;
  param_1[2] = uVar2;
  return;
}

