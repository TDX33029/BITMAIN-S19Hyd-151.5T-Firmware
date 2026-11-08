// FUN_012ea3a4 @ 012ea3a4 size=236 calls_out=2 calls_in=2
// strings: 

void FUN_012ea3a4(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_60;
  uint local_5c;
  
  uVar2 = 0;
  iVar1 = param_3 * 0x18;
  if (0x5555555 < param_3) {
LAB_012ea3d4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,iVar1);
  }
  if (iVar1 == 0) {
    local_5c = 4;
    local_60 = 0;
  }
  else {
    uVar2 = 4;
    local_5c = FUN_01298504(iVar1,4);
    if (local_5c == 0) goto LAB_012ea3d4;
    local_60 = param_3;
    if (param_3 != 0) {
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x012ea45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_012ea460 + *(int *)(&DAT_012ea460 + *param_2 * 4)))
                  (*(int *)(&DAT_012ea460 + *param_2 * 4),param_2 + 1);
        return;
      }
    }
  }
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = param_3;
  return;
}

