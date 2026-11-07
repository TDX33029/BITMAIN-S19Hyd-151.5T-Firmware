// FUN_006c8594 @ 006c8594 size=276 calls_out=3 calls_in=7
// strings: String

void FUN_006c8594(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_40;
  char *local_3c;
  undefined4 local_38;
  int *local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  code *local_28;
  
  iVar1 = param_2[4];
  local_70 = -0x80000000;
  if (iVar1 != -0x7ffffff9) {
    local_a0 = param_2[5];
    uStack_9c = param_2[6];
    uStack_98 = param_2[7];
    local_94 = param_2[8];
    uStack_90 = param_2[9];
    uStack_8c = param_2[10];
    uStack_88 = param_2[0xb];
    local_70 = iVar1;
    if (iVar1 == -0x7ffffffe) {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      param_1[1] = *param_2;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      *param_1 = 2;
      return;
    }
  }
  local_2c = &local_80;
  local_80 = *param_2;
  uStack_7c = param_2[1];
  uStack_78 = param_2[2];
  uStack_74 = param_2[3];
  local_6c = local_a0;
  uStack_68 = uStack_9c;
  uStack_64 = uStack_98;
  local_60 = local_94;
  uStack_5c = uStack_90;
  uStack_58 = uStack_8c;
  uStack_54 = uStack_88;
  local_38 = 6;
  local_34 = &local_40;
  local_3c = "String";
  local_40 = -0x80000000;
  local_28 = FUN_00700f8c;
  local_30 = &LAB_012b97d8;
  FUN_00664898(&local_50,&DAT_0059054b,&local_34);
  if (local_40 != -0x80000000) {
    FUN_019bb7e0(local_40,local_3c);
  }
  param_1[4] = local_50;
  param_1[5] = uStack_4c;
  param_1[6] = uStack_48;
  *param_1 = 0;
  FUN_00fe40e4(&local_80);
  return;
}

