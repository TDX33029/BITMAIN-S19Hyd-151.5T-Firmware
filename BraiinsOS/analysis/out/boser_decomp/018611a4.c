// FUN_018611a4 @ 018611a4 size=192 calls_out=4 calls_in=2
// strings: 

void FUN_018611a4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_2c [2];
  undefined4 local_24;
  undefined4 local_1c;
  
  local_24 = 0;
  local_2c[0] = 0;
  local_1c = 0;
  FUN_01ac814c(&local_c0,local_2c,param_2,param_3);
  if (local_c0 == 2) {
    local_2c[0] = local_2c[0] & 0xffff0000;
    uVar1 = FUN_0183badc(local_2c,local_bc & 0xff);
  }
  else {
    local_70 = local_b8;
    uStack_6c = uStack_b4;
    uStack_68 = uStack_b0;
    uStack_64 = uStack_ac;
    uStack_60 = uStack_a8;
    local_5c = local_a4;
    uStack_58 = uStack_a0;
    uStack_54 = uStack_9c;
    uStack_50 = uStack_98;
    uStack_4c = uStack_94;
    local_48 = local_90;
    local_44 = uStack_8c;
    uVar1 = local_44;
    uStack_40 = uStack_88;
    uStack_3c = uStack_84;
    uStack_38 = uStack_80;
    uStack_34 = uStack_7c;
    local_44._0_1_ = (char)uStack_8c;
    local_74 = local_bc;
    local_78 = local_c0;
    local_44 = uVar1;
    if ((char)local_44 != '\0') {
      FUN_01bed4e2(param_1,&local_78,0x48);
      return;
    }
    uVar1 = FUN_0183b6d8(&local_78);
  }
  *param_1 = 2;
  param_1[1] = uVar1;
  return;
}

