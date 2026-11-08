// FUN_01440ae4 @ 01440ae4 size=448 calls_out=2 calls_in=2
// strings: 

void FUN_01440ae4(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *unaff_r8;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r12;
  undefined4 uVar4;
  uint local_88;
  uint *puStack_84;
  uint local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if (*param_2 == 0x80000002) {
    *param_1 = 0x80000002;
  }
  else {
    uVar2 = (uint)(byte)param_2[6];
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    else if (uVar2 == 1) {
      uVar3 = (uint)*(byte *)((int)param_2 + 0x19) << 8;
    }
    else {
      unaff_r8 = (uint *)FUN_014333b0();
      puVar1 = (undefined4 *)param_2[7];
      (**(code **)*puVar1)(&local_88,puVar1 + 3,puVar1[1],puVar1[2]);
      uVar3 = 0;
      *unaff_r8 = local_88;
      unaff_r8[1] = (uint)puStack_84;
      unaff_r8[2] = local_80;
      unaff_r8[3] = uStack_7c;
    }
    (**(code **)param_2[8])(&local_48,param_2 + 0xb,param_2[9],param_2[10]);
    uVar4 = 0x1440ba0;
    (**(code **)param_2[0xc])(&local_38,param_2 + 0xf,param_2[0xd],param_2[0xe]);
    local_88 = uVar3 | uVar2;
    local_28 = CONCAT22(local_28._2_2_,(short)param_2[0x10]);
    local_80 = local_48;
    uStack_7c = uStack_44;
    uStack_78 = uStack_40;
    local_74 = uStack_3c;
    local_70 = local_38;
    uStack_6c = local_34;
    uStack_68 = local_30;
    uStack_64 = uStack_2c;
    uStack_60 = local_28;
    uVar2 = 2;
    if ((int)*param_2 < 0) {
      uVar2 = *param_2 ^ 0x80000000;
    }
    puStack_84 = unaff_r8;
    if (uVar2 == 0) {
      local_48 = 0x80000000;
      local_38 = extraout_r12;
    }
    else if (uVar2 == 1) {
      (**(code **)param_2[1])(&local_38,param_2 + 4,param_2[2],param_2[3]);
      local_28 = CONCAT31(local_28._1_3_,(char)param_2[5]);
      local_48 = 0x80000001;
      local_58 = local_30;
      uStack_54 = uStack_2c;
      uStack_50 = local_28;
      uVar4 = local_34;
    }
    else {
      FUN_006666fc(&local_48,param_2[1],param_2[2]);
      FUN_006666fc(&local_38,param_2[4],param_2[5]);
      local_58 = local_38;
      uStack_54 = local_34;
      uStack_50 = local_30;
      local_38 = uStack_44;
      uVar4 = uStack_40;
    }
    param_1[6] = local_88;
    param_1[7] = puStack_84;
    param_1[8] = local_80;
    param_1[9] = uStack_7c;
    param_1[10] = uStack_78;
    param_1[0xb] = local_74;
    param_1[0xc] = local_70;
    param_1[0xd] = uStack_6c;
    param_1[0xe] = uStack_68;
    param_1[0xf] = uStack_64;
    param_1[0x10] = uStack_60;
    *param_1 = local_48;
    param_1[1] = local_38;
    param_1[2] = uVar4;
    param_1[3] = local_58;
    param_1[4] = uStack_54;
    param_1[5] = uStack_50;
  }
  return;
}

