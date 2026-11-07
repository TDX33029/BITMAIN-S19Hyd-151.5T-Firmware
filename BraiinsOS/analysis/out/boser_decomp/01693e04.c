// FUN_01693e04 @ 01693e04 size=340 calls_out=2 calls_in=2
// strings: 

void FUN_01693e04(undefined4 *param_1,uint param_2)

{
  undefined *local_60;
  undefined1 *local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  
  local_2c = 0;
  local_30 = 4;
  local_34 = 0;
  local_38 = 0;
  local_3c = 4;
  local_40 = (undefined *)0x0;
  local_28 = 0;
  if ((int)param_2 < 0) {
    local_5c = &LAB_01a6a304;
    local_60 = &DAT_0056e3b4;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00595e91,&local_60,&DAT_01d092e0);
  }
  if (param_2 == 0) {
    local_38 = 0;
LAB_01693e78:
    local_2c = param_2;
  }
  else {
    FUN_016c1078(&local_40,param_2);
    if (param_2 <= local_2c) goto LAB_01693e78;
    FUN_016c1078(&local_34,param_2 - local_2c);
  }
  local_60 = local_40;
  local_5c = (undefined1 *)local_3c;
  uStack_58 = local_38;
  local_54 = local_34;
  uStack_50 = local_30;
  uStack_4c = local_2c;
  uStack_48 = local_28;
  local_2c = 0;
  local_30 = 4;
  local_34 = 0;
  local_38 = 0;
  local_3c = 4;
  local_40 = (undefined *)0x0;
  local_28 = 0;
  if (param_2 == 0) {
    local_38 = 0;
  }
  else {
    FUN_016c1078(&local_40,param_2);
    if (local_2c < param_2) {
      FUN_016c1078(&local_34,param_2 - local_2c);
      goto LAB_01693ef8;
    }
  }
  local_2c = param_2;
LAB_01693ef8:
  param_1[7] = local_40;
  param_1[8] = local_3c;
  param_1[9] = local_38;
  param_1[10] = local_34;
  param_1[0xb] = local_30;
  param_1[0xc] = local_2c;
  param_1[0xd] = local_28;
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = uStack_58;
  param_1[3] = local_54;
  param_1[4] = uStack_50;
  param_1[5] = uStack_4c;
  param_1[6] = uStack_48;
  return;
}

