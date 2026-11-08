// FUN_014157b8 @ 014157b8 size=380 calls_out=1 calls_in=5
// strings: 

void FUN_014157b8(uint *param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_lr;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_2[8] == 0) {
    if ((char)*param_2 == '\0') {
      bVar2 = true;
      uVar6 = 0;
      uVar4 = 3;
      uVar7 = 0;
      bVar1 = true;
      goto LAB_0141583c;
    }
    uVar7 = param_2[6];
    local_40 = param_2[7];
    uStack_3c = param_2[8];
    uStack_38 = param_2[9];
    uStack_34 = param_2[10];
  }
  else {
    uVar7 = param_2[6];
    param_4 = &local_40;
    local_40 = param_2[7];
    uStack_3c = param_2[8];
    uStack_38 = param_2[9];
    uStack_34 = param_2[10];
    if ((char)*param_2 == '\0') {
      bVar1 = true;
      uVar4 = 3;
      bVar2 = false;
      uVar6 = 0;
      goto LAB_0141583c;
    }
  }
  uVar4 = *param_2;
  param_4 = (uint *)(param_2[1] >> 8);
  bVar1 = false;
  unaff_lr = uVar4 >> 8 | param_2[1] << 0x18;
  bVar2 = false;
  uVar6 = uVar4;
LAB_0141583c:
  uVar5 = param_2[4];
  if (uVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2[2];
    local_30 = param_2[3];
    uStack_2c = param_2[4];
    uStack_28 = param_2[5];
  }
  *param_1 = uVar4 & 0xff | unaff_lr << 8;
  param_1[1] = (int)param_4 << 8 | unaff_lr >> 0x18;
  param_1[2] = uVar3;
  param_1[3] = local_30;
  param_1[4] = uStack_2c;
  param_1[5] = uStack_28;
  param_1[6] = uVar7;
  param_1[7] = local_40;
  param_1[8] = uStack_3c;
  param_1[9] = uStack_38;
  param_1[10] = uStack_34;
  if (bVar1) {
    FUN_01414eb8(uVar6,param_2[1]);
  }
  if (uVar5 == 0) {
    (**(code **)(param_2[2] + 0x10))(param_2 + 5,param_2[3],param_2[4]);
  }
  if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x01415910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[6] + 0x10))(param_2 + 9,param_2[7],param_2[8]);
    return;
  }
  return;
}

