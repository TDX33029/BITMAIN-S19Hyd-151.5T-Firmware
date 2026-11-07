// FUN_013de928 @ 013de928 size=248 calls_out=2 calls_in=1
// strings: 

void FUN_013de928(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_68;
  uint local_64;
  
  uVar2 = 0;
  iVar1 = param_3 * 0x14;
  if (0x6666666 < param_3) {
LAB_013de950:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,iVar1);
  }
  if (iVar1 == 0) {
    local_64 = 4;
    local_68 = 0;
  }
  else {
    uVar2 = 4;
    local_64 = FUN_01298504(iVar1,4);
    if (local_64 == 0) goto LAB_013de950;
    local_68 = param_3;
    if (param_3 != 0) {
      if (param_2 != param_2 + param_3 * 0x14) {
                    /* WARNING: Could not recover jumptable at 0x013de9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_013de9f8 + *(int *)(&DAT_013de9f8 + (uint)*(ushort *)(param_2 + 4) * 4)))();
        return;
      }
    }
  }
  *param_1 = local_68;
  param_1[1] = local_64;
  param_1[2] = param_3;
  return;
}

