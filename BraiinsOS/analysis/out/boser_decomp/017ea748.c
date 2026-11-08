// FUN_017ea748 @ 017ea748 size=288 calls_out=3 calls_in=4
// strings: 

void FUN_017ea748(undefined4 *param_1,uint *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r3;
  uint extraout_r3_00;
  undefined4 uVar6;
  uint unaff_lr;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  uVar4 = *param_2;
  if (uVar4 == 0) {
    if ((param_2[3] != 0) && (iVar5 = FUN_019e84a0(param_2[3],*param_3), iVar5 == 0)) {
      uVar6 = FUN_017ea86c(4);
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = uVar6;
      return;
    }
    (**(code **)(param_2[2] + 0xc))(&local_24,param_2[1],param_3);
    if (local_24 == 2) {
      *param_1 = 2;
      return;
    }
    uVar4 = local_24;
    uVar1 = extraout_r2;
    uVar2 = extraout_r3;
    uVar3 = 0x17ea7d4;
    if ((local_24 & 1) != 0) {
      uVar6 = 1;
      if (local_20 == 0) {
        local_1c = FUN_017ea8ec(4,local_1c);
        local_20 = 0;
        local_18 = extraout_r2_00;
        local_14 = extraout_r3_00;
      }
      goto LAB_017ea818;
    }
  }
  else {
    local_18 = param_2[2];
    uVar1 = local_18;
    uVar2 = param_4;
    uVar3 = unaff_lr;
    if (local_18 != 0) {
      local_14 = param_2[3];
      uVar6 = 1;
      local_1c = param_2[1];
      *param_2 = (uint)&PTR_FUN_01d1cd44;
      param_2[1] = 1;
      param_2[2] = 0;
      param_2[3] = 0;
      local_20 = uVar4;
      goto LAB_017ea818;
    }
  }
  local_1c = uVar3;
  local_14 = uVar2;
  local_18 = uVar1;
  local_20 = uVar4;
  uVar6 = 0;
LAB_017ea818:
  *param_1 = uVar6;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  param_1[3] = local_18;
  param_1[4] = local_14;
  return;
}

