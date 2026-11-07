// FUN_00daec68 @ 00daec68 size=292 calls_out=4 calls_in=0
// strings: 

void FUN_00daec68(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  int local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_00d43344(&local_48,param_2 + 0x1c);
  if (local_48 == 1) {
    if ((*param_2 != 2 || param_2[1] != 0) &&
       (FUN_00709104(&local_30,param_2,*param_3), local_30 != 0)) {
      local_80 = local_30;
      uStack_7c = uStack_2c;
      uStack_78 = uStack_28;
      local_74 = uStack_24;
LAB_00daed20:
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_80;
      param_1[3] = uStack_7c;
      param_1[4] = uStack_78;
      param_1[5] = local_74;
      param_1[6] = uStack_70;
      param_1[7] = uStack_6c;
      param_1[8] = uStack_68;
      param_1[9] = uStack_64;
      param_1[10] = local_60;
      param_1[0xb] = uStack_5c;
      param_1[0xc] = uStack_58;
      param_1[0xd] = uStack_54;
      param_1[0xe] = uStack_50;
      param_1[0xf] = uStack_4c;
      return;
    }
    uVar1 = 6;
  }
  else {
    if (local_44 != 0) {
      if (*param_2 != 2 || param_2[1] != 0) {
        FUN_00709188(param_2);
      }
      local_30 = local_44;
      uStack_2c = uStack_40;
      uStack_28 = uStack_3c;
      uStack_24 = uStack_38;
      uStack_20 = uStack_34;
      FUN_00709268(&local_80);
      goto LAB_00daed20;
    }
    uVar1 = 5;
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

