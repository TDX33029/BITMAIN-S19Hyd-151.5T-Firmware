// FUN_006dec3c @ 006dec3c size=264 calls_out=4 calls_in=4
// strings: Boolean

void FUN_006dec3c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
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
  
  if (param_2[4] == -0x7ffffff9) {
    local_a0 = -0x80000000;
  }
  else {
    local_b0 = *param_2;
    uStack_ac = param_2[1];
    uStack_a8 = param_2[2];
    uStack_a4 = param_2[3];
    local_a0 = param_2[4];
    uStack_9c = param_2[5];
    local_98 = param_2[6];
    uStack_94 = param_2[7];
    uStack_90 = param_2[8];
    uStack_8c = param_2[9];
    uStack_88 = param_2[10];
    uStack_84 = param_2[0xb];
    if (local_a0 == -0x7ffffffd) {
      *(undefined1 *)(param_1 + 1) = (undefined1)local_b0;
      *param_1 = 2;
      FUN_006dd0fc(&local_b0);
      return;
    }
  }
  local_2c = &uStack_80;
  uStack_80 = local_b0;
  uStack_7c = uStack_ac;
  uStack_78 = uStack_a8;
  uStack_74 = uStack_a4;
  iStack_70 = local_a0;
  uStack_6c = uStack_9c;
  local_68 = local_98;
  uStack_64 = uStack_94;
  uStack_60 = uStack_90;
  uStack_5c = uStack_8c;
  uStack_58 = uStack_88;
  uStack_54 = uStack_84;
  local_38 = 7;
  local_40 = -0x80000000;
  local_34 = &local_40;
  local_3c = "Boolean";
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
  FUN_00fe40e4(&uStack_80);
  return;
}

