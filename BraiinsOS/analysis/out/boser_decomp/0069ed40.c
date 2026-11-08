// FUN_0069ed40 @ 0069ed40 size=568 calls_out=2 calls_in=3
// strings: 

void FUN_0069ed40(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar6 = param_2[0xd];
  uVar1 = *(undefined1 *)(param_2 + 0x20);
  if (param_2[0xe] == -0x80000000) {
    local_88 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_88,param_2[0xf],param_2[0x10]);
  }
  if (param_2[0x11] == -0x80000000) {
    local_78 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_78,param_2[0x12],param_2[0x13]);
  }
  cVar2 = *(char *)(param_2 + 7);
  if (cVar2 == '\x02') {
    local_5c = CONCAT31(local_5c._1_3_,2);
  }
  else {
    FUN_0067e188(&local_38,param_2 + 4);
    local_2c = CONCAT31(local_2c._1_3_,cVar2);
    local_68 = local_38;
    uStack_64 = local_34;
    uStack_60 = local_30;
    local_5c = local_2c;
  }
  if (param_2[0x14] == -0x80000000) {
    local_58 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_58,param_2[0x15],param_2[0x16]);
  }
  if (param_2[0x17] == -0x80000000) {
    local_48 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_48,param_2[0x18],param_2[0x19]);
  }
  iVar3 = param_2[8];
  if (iVar3 == 2) {
    local_90 = param_2[10];
    local_94 = param_2[9];
  }
  else {
    local_94 = param_2[9];
    if (param_2[10] == -0x80000000) {
      local_38 = 0x80000000;
    }
    else {
      FUN_006666fc(&local_38,param_2[0xb],param_2[0xc]);
      local_98 = local_34;
      local_9c = local_30;
    }
    local_90 = local_38;
  }
  uVar4 = param_2[0x1b];
  uVar5 = param_2[0x1c];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar4;
  param_1[0x1c] = uVar5;
  uVar4 = param_2[0x1e];
  uVar5 = param_2[0x1f];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar4;
  param_1[0x1f] = uVar5;
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  param_1[0xd] = uVar6;
  uVar5 = *param_2;
  uVar7 = param_2[1];
  uVar6 = param_2[2];
  uVar4 = param_2[3];
  param_1[0xe] = local_88;
  param_1[0xf] = uStack_84;
  param_1[0x10] = uStack_80;
  param_1[0x11] = local_78;
  param_1[0x12] = uStack_74;
  param_1[0x13] = uStack_70;
  param_1[4] = local_68;
  param_1[5] = uStack_64;
  param_1[6] = uStack_60;
  param_1[7] = local_5c;
  param_1[0x14] = local_58;
  param_1[0x15] = uStack_54;
  param_1[0x16] = uStack_50;
  param_1[0x17] = local_48;
  param_1[0x18] = uStack_44;
  param_1[0x19] = uStack_40;
  *param_1 = uVar5;
  param_1[1] = uVar7;
  param_1[0xb] = local_98;
  param_1[0xc] = local_9c;
  param_1[8] = iVar3;
  param_1[9] = local_94;
  param_1[2] = uVar6;
  param_1[3] = uVar4;
  param_1[10] = local_90;
  return;
}

