// FUN_009d3c58 @ 009d3c58 size=320 calls_out=3 calls_in=3
// strings: 

void FUN_009d3c58(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_012cd8c4(&local_70);
  if (local_3c == -0x80000000) {
    *param_1 = local_70;
    param_1[1] = iStack_6c;
    param_1[2] = iStack_68;
    param_1[3] = iStack_64;
    param_1[0x12] = -0x80000000;
    return;
  }
  local_a8 = local_70;
  iStack_a4 = iStack_6c;
  iStack_a0 = iStack_68;
  iStack_9c = iStack_64;
  local_98 = local_60;
  iStack_94 = local_5c;
  iStack_90 = iStack_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  iStack_84 = iStack_4c;
  iStack_80 = local_48;
  iStack_7c = iStack_44;
  iStack_78 = iStack_40;
  FUN_012be0e4(&local_a8,&local_70,param_4,param_5);
  local_30 = iStack_a4;
  iStack_2c = iStack_a0;
  iStack_28 = iStack_9c;
  if (local_a8 == 5) {
    param_1[0x12] = iStack_a4;
    param_1[0x13] = iStack_a0;
    param_1[0x14] = iStack_9c;
    param_1[2] = local_70;
    param_1[3] = iStack_6c;
    param_1[4] = iStack_68;
    param_1[5] = iStack_64;
    param_1[6] = local_60;
    param_1[7] = local_5c;
    param_1[8] = iStack_58;
    param_1[9] = iStack_54;
    param_1[10] = local_50;
    param_1[0xb] = iStack_4c;
    param_1[0xc] = local_48;
    param_1[0xd] = iStack_44;
    param_1[0xe] = iStack_40;
    param_1[0xf] = local_3c;
    param_1[0x10] = local_38;
    param_1[0x11] = local_34;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 0x15) = param_3;
    return;
  }
  param_1[0x12] = -0x80000000;
  *param_1 = local_a8;
  param_1[1] = iStack_a4;
  param_1[2] = iStack_a0;
  param_1[3] = iStack_9c;
  FUN_011014e8(&local_70);
  return;
}

