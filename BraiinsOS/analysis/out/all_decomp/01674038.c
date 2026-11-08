// FUN_01674038 @ 01674038 size=248 calls_out=1 calls_in=1
// strings: 

void FUN_01674038(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 *local_28;
  
  local_68 = *(undefined4 *)(param_3 + 8);
  uStack_64 = *(undefined4 *)(param_3 + 0xc);
  param_1[0x15] = 8;
  param_1[1] = 0;
  param_1[2] = 4;
  local_28 = &local_58;
  param_1[3] = 0;
  param_1[4] = 0;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  *param_1 = 1;
  local_60 = local_68;
  local_5c = uStack_64;
  local_58 = local_68;
  local_54 = uStack_64;
  iStack_2c = param_3;
  FUN_00953084(&local_50,param_1,&local_38);
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = uStack_3c;
  local_28 = &local_60;
  local_38 = param_2[3];
  uStack_34 = param_2[4];
  uStack_30 = param_2[5];
  iStack_2c = param_3;
  FUN_00953084(&local_50,param_1,&local_38);
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = uStack_3c;
  local_38 = param_2[6];
  uStack_34 = param_2[7];
  uStack_30 = param_2[8];
  iStack_2c = param_3;
  local_28 = &local_68;
  FUN_00953084(&local_50,param_1,&local_38);
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = uStack_3c;
  return;
}

