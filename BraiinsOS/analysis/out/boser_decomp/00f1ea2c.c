// FUN_00f1ea2c @ 00f1ea2c size=248 calls_out=3 calls_in=1
// strings: 

void FUN_00f1ea2c(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 local_4c;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar3 = *param_2;
  uVar1 = 0x15;
  uVar2 = 0;
  if ((int)uVar3 < 0) {
    uVar1 = uVar3 ^ 0x80000000;
  }
  if (uVar1 != 0x10) {
    if (uVar1 == 0x11) {
      uVar1 = param_2[1];
      FUN_00fe4f7c(&local_34);
      local_4c = local_2c;
      thunk_FUN_01be4678(uVar1);
      uVar2 = 1;
      unaff_r7 = local_30;
      unaff_r11 = local_28;
      if (local_34 != 0) {
        uVar2 = 2;
      }
    }
    else if (uVar1 != 0x12) {
      FUN_00fe4f7c(&local_34,param_2);
      uVar2 = 1;
      local_4c = local_2c;
      if (local_34 != 0) {
        uVar2 = 2;
      }
      goto LAB_00f1eaf4;
    }
  }
  if (uVar3 != 0x80000011) {
    FUN_00db3970(param_2);
  }
  local_30 = unaff_r7;
  local_28 = unaff_r11;
LAB_00f1eaf4:
  uVar4 = 1;
  if (uVar2 != 2) {
    uVar4 = 0;
    param_1[2] = local_4c;
    if ((uVar2 & 1) == 0) {
      local_30 = 0;
      local_28 = 0;
    }
    param_1[3] = local_28;
  }
  *param_1 = uVar4;
  param_1[1] = local_30;
  return;
}

