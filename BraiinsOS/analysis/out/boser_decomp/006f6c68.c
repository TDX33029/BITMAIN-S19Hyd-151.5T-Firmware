// FUN_006f6c68 @ 006f6c68 size=200 calls_out=2 calls_in=1
// strings: 

void FUN_006f6c68(uint *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  uint local_48;
  uint local_44;
  
  uVar1 = param_3 * 0x10;
  bVar4 = 0xffffffe < param_3;
  bVar3 = param_3 == 0xfffffff;
  uVar2 = 0;
  if (param_3 < 0x10000000) {
    bVar4 = 0x7ffffffb < uVar1;
    bVar3 = uVar1 == 0x7ffffffc;
  }
  if (bVar4 && !bVar3) {
LAB_006f6c84:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,uVar1);
  }
  if (uVar1 == 0) {
    local_44 = 4;
    local_48 = 0;
  }
  else {
    uVar2 = 4;
    local_44 = FUN_01298504(uVar1,4);
    if (local_44 == 0) goto LAB_006f6c84;
    local_48 = param_3;
    if ((param_3 != 0) && (uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x006f6d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_006f6d04 + *(int *)(&DAT_006f6d04 + *param_2 * 4)))();
      return;
    }
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = param_3;
  return;
}

