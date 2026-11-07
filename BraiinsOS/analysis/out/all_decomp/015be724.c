// FUN_015be724 @ 015be724 size=380 calls_out=5 calls_in=516
// strings: 

void FUN_015be724(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  ulonglong uVar4;
  int iStack_5c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  int *local_20;
  int iStack_1c;
  
  local_20 = (int *)((int)register0x00000054 + -8);
  iStack_1c = 0x15be738;
  puStack_28 = (undefined1 *)&local_20;
  uStack_24 = 0x15be744;
  local_30 = param_1;
  local_2c = param_2;
  uVar4 = FUN_015be95c(&local_30,&DAT_018ab138,param_3,1);
  iVar2 = (int)(uVar4 >> 0x20);
  switch((uint)uVar4 & 3) {
  case 0:
    if ((uVar4 & 8) == 0) {
      iStack_5c = iVar2;
      FUN_01842f88(extraout_r2,0,0xc,0,&iStack_5c);
      uVar1 = FUN_015e9c7c(extraout_r2);
      if ((1 << (uVar1 & 0xff) & 3U) == 0) {
        if ((1 << (uVar1 & 0xff) & 0xcU) != 0) {
          iStack_5c = 0;
          FUN_018430e4(extraout_r2,0,0xd,0,&iStack_5c);
          *(int *)(iVar2 + 0x20) = iStack_5c;
                    /* WARNING: Could not recover jumptable at 0x015be844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)0x15be780)(6);
          return;
        }
        goto switchD_015be7ac_caseD_3;
      }
    }
    break;
  case 1:
    iStack_5c = iVar2;
    FUN_01842f88(extraout_r2,0,0xc,0,&iStack_5c);
    iVar2 = FUN_015e9c7c(extraout_r2);
                    /* WARNING: Could not recover jumptable at 0x015be880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_015be884 + *(int *)(&DAT_015be884 + iVar2 * 4)))(9);
    return;
  case 3:
switchD_015be7ac_caseD_3:
                    /* WARNING: Could not recover jumptable at 0x015be928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)0x15be780)(9);
    return;
  }
  iVar2 = FUN_01843cd4(iVar2,extraout_r2);
  uVar3 = 9;
  if (iVar2 == 0) {
    uVar3 = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x015be954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x15be780)(uVar3);
  return;
}

