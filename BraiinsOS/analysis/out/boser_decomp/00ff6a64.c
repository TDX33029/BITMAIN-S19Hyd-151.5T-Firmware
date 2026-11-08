// FUN_00ff6a64 @ 00ff6a64 size=1088 calls_out=8 calls_in=1
// strings: 

void FUN_00ff6a64(undefined4 param_1,int *param_2,int param_3)

{
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int extraout_r1_07;
  int extraout_r1_08;
  undefined8 uVar1;
  undefined1 auStack_128 [196];
  undefined *local_64;
  undefined *local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  undefined *local_4c;
  undefined **local_48;
  undefined *local_44;
  undefined *local_40;
  uint uStack_3c;
  undefined *local_38;
  undefined *local_34;
  undefined **local_30;
  undefined *local_2c;
  undefined **local_28;
  undefined1 *local_24;
  
  switch(*(undefined1 *)(param_3 + 0x6c)) {
  case 0:
    if (param_2[9] == 0) goto switchD_00ff6a8c_default;
    if (param_2[9] == 2) {
      (**(code **)(param_2[0xb] + 0xc))(param_2[10]);
      uVar1 = (**(code **)(extraout_r1 + 0x10))();
    }
    else {
      uVar1 = (**(code **)(param_2[0xb] + 0x14))(param_2[10]);
    }
    break;
  case 1:
    if (*param_2 == 0) goto switchD_00ff6a8c_default;
    if (*param_2 == 2) {
      (**(code **)(param_2[2] + 0xc))(param_2[1]);
      uVar1 = (**(code **)(extraout_r1_04 + 0x10))();
    }
    else {
      uVar1 = (**(code **)(param_2[2] + 0x14))(param_2[1]);
    }
    break;
  case 2:
    if (param_2[0xf] == 0) goto switchD_00ff6a8c_default;
    if (param_2[0xf] == 2) {
      (**(code **)(param_2[0x11] + 0xc))(param_2[0x10]);
      uVar1 = (**(code **)(extraout_r1_01 + 0x10))();
    }
    else {
      uVar1 = (**(code **)(param_2[0x11] + 0x14))(param_2[0x10]);
    }
    break;
  case 3:
    if (param_2[0x12] == 0) goto switchD_00ff6a8c_default;
    if (param_2[0x12] == 2) {
      (**(code **)(param_2[0x14] + 0xc))(param_2[0x13]);
      uVar1 = (**(code **)(extraout_r1_02 + 0x10))();
    }
    else {
      uVar1 = (**(code **)(param_2[0x14] + 0x14))(param_2[0x13]);
    }
    break;
  case 4:
    if (param_2[6] == 0) goto switchD_00ff6a8c_default;
    if (param_2[6] == 2) {
      (**(code **)(param_2[8] + 0xc))(param_2[7]);
      uVar1 = (**(code **)(extraout_r1_00 + 0x10))();
    }
    else {
      uVar1 = (**(code **)(param_2[8] + 0x14))(param_2[7]);
    }
    break;
  case 5:
    if (param_2[3] == 0) {
      if (*param_2 == 0) goto switchD_00ff6a8c_default;
      if (*param_2 == 2) {
        (**(code **)(param_2[2] + 0xc))(param_2[1]);
        uVar1 = (**(code **)(extraout_r1_07 + 0x10))();
      }
      else {
        uVar1 = (**(code **)(param_2[2] + 0x14))(param_2[1]);
      }
    }
    else if (param_2[3] == 1) {
      uVar1 = (**(code **)(param_2[5] + 0x14))(param_2[4]);
    }
    else {
      (**(code **)(param_2[5] + 0xc))(param_2[4]);
      uVar1 = (**(code **)(extraout_r1_08 + 0x10))();
    }
    break;
  case 6:
    if (param_2[0x15] == 0) goto switchD_00ff6a8c_default;
    if (param_2[0x15] == 2) {
      (**(code **)(param_2[0x17] + 0xc))(param_2[0x16]);
      uVar1 = (**(code **)(extraout_r1_05 + 0x10))();
    }
    else {
      uVar1 = (**(code **)(param_2[0x17] + 0x14))(param_2[0x16]);
    }
    break;
  case 7:
    if (param_2[0x18] == 0) goto switchD_00ff6a8c_default;
    if (param_2[0x18] == 2) {
      (**(code **)(param_2[0x1a] + 0xc))(param_2[0x19]);
      uVar1 = (**(code **)(extraout_r1_03 + 0x10))();
    }
    else {
      uVar1 = (**(code **)(param_2[0x1a] + 0x14))(param_2[0x19]);
    }
    break;
  case 8:
    if (param_2[0xc] == 0) goto switchD_00ff6a8c_default;
    if (param_2[0xc] == 2) {
      (**(code **)(param_2[0xe] + 0xc))(param_2[0xd]);
      uVar1 = (**(code **)(extraout_r1_06 + 0x10))();
    }
    else {
      uVar1 = (**(code **)(param_2[0xe] + 0x14))(param_2[0xd]);
    }
    break;
  default:
switchD_00ff6a8c_default:
    FUN_00711b60(&local_30,param_2 + 0x1b);
    FUN_01bed4e2(auStack_128,param_3,0x90);
    FUN_00ff6f2c(param_1,&local_30,auStack_128);
    if (param_2[0x1e] == 0) {
      FUN_01bed4e2(auStack_128,param_1,0xc0);
      local_24 = (undefined1 *)0x0;
      local_28 = (undefined **)0x0;
      local_30 = &PTR_FUN_01c1d160;
      local_2c = (undefined *)0x1;
    }
    else {
      if (param_2[0x1e] == 1) {
        return;
      }
      FUN_01bed4e2(auStack_128,param_1,0xc0);
      FUN_012841fc(&local_64,param_2[0x1f],param_2[0x20]);
      if ((local_58 & 1) == 0) {
        local_2c = local_64;
        local_28 = (undefined **)local_60;
        local_24 = (undefined1 *)local_58;
        local_30 = (undefined **)&DAT_01d2e520;
      }
      else {
        local_50 = (int)local_64 - (local_58 >> 5);
        local_4c = local_60 + (local_58 >> 5);
        local_54 = local_5c + (local_58 >> 5);
        FUN_01283524(&local_48,&local_54);
        local_38 = (undefined *)(local_58 >> 5);
        if (local_40 < local_38) {
          local_28 = &local_34;
          local_34 = local_40;
          local_24 = &LAB_01a6a304;
          local_2c = &LAB_01a6a304;
          local_30 = &local_38;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_30,&DAT_01d2e534);
        }
        local_40 = local_40 + -(int)local_38;
        local_44 = local_44 + (int)local_38;
        local_30 = local_48;
        local_24 = (undefined1 *)uStack_3c;
        local_2c = local_44;
        local_28 = (undefined **)local_40;
      }
    }
    FUN_011ddcdc(param_1,auStack_128,&local_30);
    return;
  }
  FUN_01bed4e2(auStack_128,param_3,0x90);
  FUN_011ddc04(param_1,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20),auStack_128);
  return;
}

