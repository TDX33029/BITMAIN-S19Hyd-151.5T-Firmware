// FUN_009828b0 @ 009828b0 size=204 calls_out=1 calls_in=4
// strings: 

void FUN_009828b0(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = *param_2;
  if (uVar1 == 7) {
    FUN_006666fc(&local_30,param_2[2],param_2[3]);
    FUN_006666fc(&local_320,param_2[5],param_2[6]);
    FUN_006666fc(&local_298,param_2[8],param_2[9]);
    param_1[1] = local_30;
    param_1[2] = uStack_2c;
    param_1[3] = uStack_28;
    param_1[4] = local_320;
    param_1[5] = uStack_31c;
    param_1[6] = uStack_318;
    param_1[7] = local_298;
    param_1[8] = uStack_294;
    param_1[9] = uStack_290;
    *param_1 = 7;
    return;
  }
  iVar2 = 1;
  if (1 < uVar1) {
    iVar2 = uVar1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00982970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00982974 + *(int *)(&DAT_00982974 + iVar2 * 4)))();
  return;
}

