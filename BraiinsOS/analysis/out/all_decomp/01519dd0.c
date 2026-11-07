// FUN_01519dd0 @ 01519dd0 size=48 calls_out=0 calls_in=1
// strings: 

void FUN_01519dd0(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  iVar2 = 0x13;
  if (0x80000000 < uVar1) {
    iVar2 = uVar1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x01519dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01519e00 + *(int *)(&DAT_01519e00 + iVar2 * 4)))(uVar1,param_2,param_2 + 2);
  return;
}

