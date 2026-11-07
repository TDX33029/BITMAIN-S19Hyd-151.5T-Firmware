// FUN_018f7f34 @ 018f7f34 size=600 calls_out=12 calls_in=0
// strings: 

void FUN_018f7f34(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  uint uStack_70;
  int local_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  int local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  
  if ((param_4 != 0x4a0) || (iVar3 = FUN_01b4cf3c(0x3dd,param_3,0x4a0), iVar3 == 0)) {
    param_1[4] = 0;
    param_1[2] = &DAT_8000001c;
    param_1[3] = 0x1a;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = 1;
    return;
  }
  local_48 = 0x440;
  local_44 = 0x20;
  FUN_018a7af8(&local_40,0x440);
  FUN_018a7af8(&local_30,0x20);
  iVar4 = FUN_01b47ffc(iVar3,0);
  uVar2 = local_2c;
  uVar6 = local_3c;
  if (iVar4 == 0) {
LAB_018f8128:
    FUN_0134bd64(local_30,uVar2);
    FUN_0134bd64(local_40,uVar6);
  }
  else {
    iVar5 = FUN_01b48aa0(iVar4,local_3c,&local_48,local_2c,&local_44);
    if (iVar5 != 1) {
      FUN_01b47028(iVar4);
      goto LAB_018f8128;
    }
    if (local_48 < local_38) {
      local_38 = local_48;
    }
    if (local_44 < local_28) {
      local_28 = local_44;
    }
    local_58 = local_40;
    uStack_54 = local_3c;
    local_78 = local_30;
    uStack_74 = local_2c;
    uStack_70 = local_28;
    uStack_50 = local_38;
    uVar7 = FUN_00703dd4(&local_78);
    uVar1 = local_38;
    iVar5 = local_58;
    uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_01b47028(iVar4);
    if (iVar5 != -0x7fffffff) {
      local_40 = iVar5;
      local_38 = uVar1;
      FUN_0193a93c(&local_30);
      FUN_0190def0(&local_58,(int)uVar7,uVar6);
      local_78 = local_30;
      uStack_74 = local_2c;
      uStack_70 = local_28;
      local_6c = local_58;
      uStack_68 = uStack_54;
      uStack_64 = uStack_50;
      uStack_60 = uStack_4c;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      param_1[3] = local_28;
      param_1[4] = local_58;
      param_1[5] = uStack_54;
      param_1[6] = uStack_50;
      param_1[7] = uStack_4c;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 8) = 0xb;
      FUN_007047f8((int)uVar7,uVar6);
      FUN_018f822c(&local_40);
      goto LAB_018f817c;
    }
  }
  param_1[3] = 0x1a;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = &DAT_8000001c;
  *param_1 = 1;
LAB_018f817c:
  FUN_01b46fd8(iVar3);
  return;
}

